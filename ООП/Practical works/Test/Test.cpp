#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<direct.h>
#include<io.h>
#include<Windows.h>
#include <fstream>
#include <vector>
#include <filesystem>
#define NO_OF_CHARS 256
using namespace std;
ifstream fin;
void get_files(vector<string>& paths, const string& current_path)
{
	for (const auto& file : filesystem::directory_iterator(current_path))
	{
		if (filesystem::is_directory(file))
		{
			get_files(paths, file.path().string());
		}
		else
		{
			paths.push_back(file.path().string());
		}
	}
}
// A utility function to get maximum of two integers
int maxim(int a, int b)
{
	return (a > b) ? a : b;
}

void badCharHeuristic(char* str, int size, int badchar[NO_OF_CHARS])
{
	int i;

	// Initialize all occurrences as -1
	for (i = 0; i < NO_OF_CHARS; i++)
		badchar[i] = -1;

	// Fill the actual value of last occurrence of a character
	for (i = 0; i < size; i++)
		badchar[(int)str[i]] = i;
}

bool Boyer(char* txt, char* pat)
{
	int m = strlen(pat);
	int n = strlen(txt);

	int badchar[NO_OF_CHARS];

	badCharHeuristic(pat, m, badchar);

	int s = 0; // s is shift of the pattern with respect to text
	while (s <= (n - m))
	{
		int j = m - 1;

		while (j >= 0 && pat[j] == txt[s + j])
			j--;

		if (j < 0)
		{

			s += (s + m < n) ? m - badchar[txt[s + m]] : 1;
			return true;
		}

		else {
			s += maxim(1, j - badchar[txt[s + j]]);
		}
	}
	return false;
}

void find(const char* path) {
	fin.open(path);
	char* block;
	int iter = 40;
	char virus[] = "virus";
	int size = strlen(virus) * 2;
	char* sub_virus = new char[size * 2];
	bool vir1, vir2 = false;
	int idx = 0;
	int block_index = 1;
	while (!fin.eof()) {
		block = new char[iter];
		fin.read(block, iter);
		if (block_index % 2 != 0) {
			idx = 0;
			for (int i = iter - 10; i < iter; i++)
			{
				sub_virus[idx] = block[i];
				idx++;
			}

		}
		else
		{
			idx = 10;
			for (int i = 0; i < 10; i++)
			{
				sub_virus[idx] = block[i];

				idx++;
			}
		}
		block_index++;
		vir1 = Boyer(block, virus);
		vir2 = Boyer(sub_virus, virus);
		delete[] block;
		if (vir1 || vir2)break;
	}
	if (vir1 || vir2) {
		cout << "\t--->\tФайл містить вірус\n";
	}
	else cout << endl;
	delete[] sub_virus;
	sub_virus = nullptr;
	fin.close();
}

void main(int argc, char** argv) {

	for (int i = 0; i < argc; i++) {
		cout << argv[i] << endl;
	}
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	const char path[] = { "C:\\viruses" };
	vector<string> paths;
	get_files(paths, path);
	int size = paths.size();
	/*for (int i = 0; i < size; i++)
	{
		cout << paths[i] << endl;
	}*/
	for (int i = 0; i < size; i++)
	{
		const char* pth = paths[i].c_str();
		cout << "PTH: " << pth;
		find(pth);
	}
	system("pause");
	return;
}

