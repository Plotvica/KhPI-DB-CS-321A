#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<io.h>
#include<Windows.h>
#include <fstream>


#define NO_OF_CHARS 256
using namespace std;
ifstream fin;


int maxc(int a, int b)
{
	return (a > b) ? a : b;
}


void badCharHeuristic(char* str, int size, int badchar[NO_OF_CHARS])
{
	int i;

	for (i = 0; i < NO_OF_CHARS; i++)
		badchar[i] = -1;


	for (i = 0; i < size; i++)
		badchar[(int)str[i]] = i;
}

bool Boyer(char* txt, char* pat)
{
	int m = strlen(pat);
	int n = strlen(txt);

	int badchar[NO_OF_CHARS];

	badCharHeuristic(pat, m, badchar);

	int s = 0; 
	while (s <= (n - m)) {

		int j = m - 1;

		while (j >= 0 && pat[j] == txt[s + j])
			j--;

		if (j < 0) {

			s += (s + m < n) ? m - badchar[txt[s + m]] : 1;
			return true;
		}

		else 
			s += maxc(1, j - badchar[txt[s + j]]);
		
	}
	return false;
}





void vrDetect(const char path[]) {

	_finddata_t file;
	
	string tempName;
	intptr_t handle = _findfirst(path, &file);
	cout << "\tFile list:\n";

	do {
		tempName = file.name;
		if (tempName[0] == '.')
			continue;
		cout << file.name;



		string path = file.name;
		bool t = false;
		if (path.substr(path.find_last_of("Laboratory work 2.") + 1) != "cpp") {
			fin.open(path);
			char* block;
			int iter = 25;
			char virus[] = "virus";
			int size = strlen(virus) * 2;
			char* sub_virus = new char[size * 2];

			int idx = 0;
			int block_index = 1;
			while (!fin.eof()) {
				block = new char[iter];
				fin.read(block, iter);
				if (block_index % 2 != 0) {
					idx = 0;
					for (int i = iter - 10; i < iter; i++) {
						sub_virus[idx] = block[i];
						idx++;
					}

				}
				else {
					idx = 10;
					for (int i = 0; i < 10; i++) {
						sub_virus[idx] = block[i];
						idx++;
					}
				}
				block_index++;
				if (Boyer(block, virus)) {
					cout << "\t--->\tФайл містить вірус\n";
				}
				if (Boyer(sub_virus, virus)) {
					cout << "\t--->\tФайл містить вірус\n";
				}
				delete[] block;
			}

			delete[] sub_virus; sub_virus = nullptr;
			fin.close();
		}
		
		cout << endl;
	} 
	while (_findnext(handle, &file) == 0);
	_findclose(handle);
}




void main(int argc, char** argv) {

	for (int i = 0; i < argc; i++) {
		cout << argv[i] << endl;
	}

	system("chcp 1251");

	const char path[] = { "D:\*.*" }; // worked dir
	
	vrDetect(path);


}