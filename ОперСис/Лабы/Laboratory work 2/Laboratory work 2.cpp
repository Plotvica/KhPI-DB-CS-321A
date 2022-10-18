#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <fstream>
#include <vector>
#include <filesystem>

#define NO_OF_CHARS 256

using namespace std;
ifstream fin;

void get_files(vector<string>& paths, const string& current_path);
int maxim(int a, int b); // A utility function to get maximum of two integers
void badCharHeuristic(char* str, int size, int badchar[NO_OF_CHARS]);
bool Boyer(char* txt, char* pat);
void AntivirusCheck(const char* path);


void main(int argc, char** argv) {

	for (int i = 0; i < argc; i++) {
		cout << argv[i] << endl;
	}
	system("chcp 1251");

	const char path[] = { "D:\\KhPI-DB-CS-321A" };
	vector<string> paths;
	get_files(paths, path);
	int size = paths.size();

	for (int i = 0; i < size; i++) {
		const char* fileName = paths[i].c_str();
		cout << "File path: " << fileName;
		AntivirusCheck(fileName);
	}
	system("pause");
	return;
}



void get_files(vector<string>& paths, const string& current_path)
{
	for (const auto& file : filesystem::directory_iterator(current_path)){
		if (filesystem::is_directory(file))
			get_files(paths, file.path().string());
		else
			paths.push_back(file.path().string());	
	}
}


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

		if (j < 0) {
			s += (s + m < n) ? m - badchar[txt[s + m]] : 1;
			return true;
		}

		else 
			s += maxim(1, j - badchar[txt[s + j]]);
	}
	return false;
}

void AntivirusCheck(const char* path) {
	fin.open(path);
	
	char virus[] = "virus";

	int iter = 40;
	char* VirusChecker = new char[strlen(virus) * 2];
	bool case1 = false, case2 = false;
	int idx = 0;
	float blockIndex = 1;
	char* block = new char[iter];

	while (!fin.eof()) {
		
		fin.read(block, iter);
	
		if ( (blockIndex / 2) != 0) {
			idx = 0;
			for (int i = iter - 10; i < iter; i++,idx++)
				VirusChecker[idx] = block[i];
		}
		else {
			idx = 10;
			for (int i = 0; i < 10; i++, idx++)
				  VirusChecker[idx] = block[i];
		}
		blockIndex++;

		case1 = Boyer(block, virus);
		case2 = Boyer(VirusChecker, virus);

		if (case1 or case2) break;
	}
	if (case1 or case2)
		cout << "\t---> Virus has been detected!\n";
	else 
		cout << endl;

	delete[] VirusChecker; VirusChecker = NULL;
	delete[] block; block = NULL;
	
	fin.close();
}