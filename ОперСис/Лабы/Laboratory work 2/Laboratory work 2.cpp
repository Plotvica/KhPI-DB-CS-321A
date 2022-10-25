#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <fstream>
#include <vector>
#include <filesystem>

#define NO_OF_CHARS 256

using namespace std;
ifstream fin;

void find_virus(const char* filepath);
bool Boyer(char* txt, char* pat, int size);
void badCharHeuristic(char* str, int size, int badchar[NO_OF_CHARS]);
void get_file_paths(const string& current_path);


void main(int argc, char** argv) {

	system("chcp 1251");

	for (int i = 0; i < argc; i++) {
		cout << argv[i] << endl;
	}
	system("cls");
	
	const char directory[] = { "D:\\KhPI-DB-CS-321A" };
	get_file_paths(directory);

	system("pause");
	return;
}

void get_file_paths(const string& current_path)
{
	for (const auto& file : filesystem::directory_iterator(current_path))
	{
		if (filesystem::is_directory(file))
		{
			get_file_paths(file.path().string());
		}
		else
		{
			find_virus(file.path().string().c_str());
		}
	}
}

void badCharHeuristic(char* str, int size, int badchar[NO_OF_CHARS])
{
	for (int i = 0; i < NO_OF_CHARS; i++)
		badchar[i] = -1;

	for (int i = 0; i < size; i++)
		badchar[(int)str[i]] = i;
}

bool Boyer(char* block, char* virus_word, int n)
{
	int m = strlen(virus_word);

	int badchar[NO_OF_CHARS];

	badCharHeuristic(virus_word, m, badchar);

	int s = 0;
	while (s <= (n - m))
	{
		int j = m - 1;

		while (j >= 0 && virus_word[j] == block[s + j])
			j--;

		if (j < 0)
		{
			s += (s + m < n) ? m - badchar[block[s + m]] : 1;
			return true;
		}

		else {
			s += max(1, j - badchar[block[s + j]]);
		}
	}
	return false;
}

void find_virus(const char* filepath) {

	char virus_word[] = "virus";
	int size = strlen(virus_word);


	int block_size = 60;

	char* blockread = new char[block_size];
	blockread[block_size] = '\0';

	int temp_read_size = block_size + size;
	char* blocktempread = new char[temp_read_size];
	blocktempread[temp_read_size] = '\0';

	char* blocktemp = new char[size];
	blocktemp[size] = '\0';

	bool flagFirstBlock = true;
	bool is_virus = false;

	fin.open(filepath);

	while (!fin.eof()) {

		if (flagFirstBlock) {
			fin.read(blockread, block_size);
			is_virus = Boyer(blockread, virus_word, fin.gcount());

			if (is_virus) {
				cout << filepath;
				cout << "\t----->\tVirus detected!\n";
				break;
			}
			else {
			
				for (int i = block_size - size, c = 0; i < block_size; i++, c++)
				{
					blocktemp[c] = blockread[i];
				}
			}
			flagFirstBlock = false;
		}
		else {
			fin.read(blockread, block_size);

			for (int i = 0, j = 0; i < temp_read_size; i++)
			{
				if (i < size) {
					blocktempread[i] = blocktemp[i];
				}
				else
				{
					blocktempread[i] = blockread[j];
					j++;
				}
			}
			is_virus = Boyer(blocktempread, virus_word, temp_read_size);

			if (is_virus) {
				cout << filepath;
				cout << "\t----->\tVirus detected!\n";
				break;
			}
			else {
				for (int i = temp_read_size - size, c = 0; i < temp_read_size; i++, c++)
				{
					blocktemp[c] = blocktempread[i];
				}

			}
		}
	}


	fin.close();

	//delete[] blockread; blockread = NULL;
	//delete[] blocktempread; blocktempread = NULL;
	//delete[] blocktemp; blocktemp = NULL;
}