#include<iostream>
#include<iomanip>

#include<string>
#include<fstream>
using namespace std;
ifstream fin;
class Change {
public:
	string word_for_change;
	string word_to_change;
	int get_size_word_for_change() { return word_for_change.size(); }
};

int compare(const void* a, const void* b)									//Сортировочный компаратор
{
	class Change* source = (class Change*)a;
	class Change* proc = (class Change*)b;
	if (source->word_for_change < proc->word_for_change) { return 1; }
	else if (source->word_for_change > proc->word_for_change) { return -1; }
	else { return 0; }
}

int string_counter(string name) {											//Количество заменяемых слов
	int count = 0;
	fin.open(name);
	string key;
	while (!fin.eof()) {
		fin >> key;
		count++;
	}
	fin.close();
	return count / 2;
}

string string_from(string string1) {										//Функция создания строки с искомыми словами
	string res;
	fin.open(string1);
	string key, temp;
	while (!fin.eof()) {
		fin >> key;
		fin >> temp;
		res += key + " ";
	}
	fin.close();
	return res;
}
string string_into(string string1) {										//Функция создания строки с заменяемыми словами
	string res;
	fin.open(string1);
	string temp, key;
	while (!fin.eof()) {
		fin >> temp;
		fin >> key;
		res += key + " ";
	}
	fin.close();
	return res;
}
void create_objects_array(Change data[], int count_words, string source, string processed) {	//Функция переноса строк в класс
	int count = 0;
	for (int i = 0; i < count_words; i++) {
		for (int j = 0; j < source.length(); j++) {

			if (source[count] == ' ') {
				count++;
				break;
			}
			data[i].word_for_change += source[count];
			count++;
		}
	}
	count = 0;
	for (int i = 0; i < count_words; i++) {
		for (int j = 0; j < processed.length(); j++) {

			if (processed[count] == ' ') {
				count++;
				break;
			}
			data[i].word_to_change += processed[count];
			count++;
		}
	}
}
string change_word(string source_string, int number_word, Change* data) {				//Функция замены слов
	string processed_string;
	int count = 0;
	bool is = false;
	for (int i = 0; i < source_string.length();) {
		for (int j = 0; j < number_word; j++) {
			for (int source = 0, l = i; source < data[j].get_size_word_for_change(); source++, l++) {
				if (source_string[l] == data[j].word_for_change[source]) { // проверка совпадения первых букв
					int true_cnt = 0;
					if (source_string.length() - i >= data[j].get_size_word_for_change()) { //если совпавшая буква находится в самом конце, проверяется остаток символов
						for (int t = 0, x = i; t < data[j].get_size_word_for_change(); t++, x++)
						{
							if (source_string[x] == data[j].word_for_change[t]) true_cnt++; //Счет совпавших букв
						}
					}
					is = false;
					if (true_cnt == data[j].get_size_word_for_change()) {
						is = true; //если количество совпавших букв одинаковое, переходим на следующий шаг с значением true
					}
					count = j;
					goto step;
				}
				else {
					is = false;
					break;
				}
			}
		}
	step:
		if (!is) {
			processed_string += source_string[i];
			i++; // сдвиг по изначальному массиву на 1 символ
		}
		else {
			processed_string += data[count].word_to_change; //замена слова
			i = i + data[count].get_size_word_for_change(); //сдвиг на длину заменяемого слова
		}
	}
	return processed_string;
}
int main() {
	system("chcp 1251");
	system("cls");
	ofstream fout;
	string source, to_process, s_name;
	s_name = "change.txt";
	string name = "text1.txt";
	string name2 = "text2.txt";
	source = string_from(s_name);
	to_process = string_into(s_name);
	int number_word = string_counter(s_name);
	Change* change = new Change[number_word];
	create_objects_array(change, number_word, source, to_process);
	qsort(change, number_word, sizeof(Change), compare);
	fin.open(name);
	fout.open(name2, ios::app);
	string get_string;
	string set_change_string;
	while (!fin.eof()) {
		getline(fin, get_string);
		cout << get_string;
		set_change_string = change_word(get_string, number_word, change);
		fout << set_change_string;
	}
	cout << endl << set_change_string << endl;
}