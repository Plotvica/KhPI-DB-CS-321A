#include <iostream>
#include <ctime>
#include <string>  
#include <fstream>
#include "windows.h"





using namespace std;

void encode(const char first_encode[], const char second_encode[]) {

	char check;
	string file_read;
	string file_write;

	cout << "Enter name of file to open \n --->";
	cin >> file_read;
	ifstream data_read(file_read);
	if(data_read.is_open()){
		cout << "Data file was opened successfully." << endl;
 	}
	else {
		cout << "Data file is not open or does not exist!" << endl;
		return;
	}


	cout << "\nEnter name of file to write \n --->";
	cin >> file_write;
	ofstream data_write(file_write);
	if(data_write.is_open()){
		cout << "Data file was created successfully." << endl;
 	}
	else {
		cout << "Something goes wrong!" << endl;
		return;
	}


	while (!data_read.eof()) {
		check = "";
		getline(data_read, check);
		for (int j = 0; j < check.length(); j++){
			for (int i = 0; i < strlen(first_encode); i++) {
				if (check[j] == first_encode[i]) {
					check[j] = second_encode[i]; 
					break;
				}
			}
		}
		data_write << check << "\n";
	}cout << "\n\tEncoding complited!\n";



	system("pause");

	data_read.close();
	data_write.close();
}

int main() {


	system("chcp 1251");
	system("cls");
	const char UTF8[] = "абвгґдеєжзиіїйклмнопрстуфхцчшщьюяАБВГҐДЕЄЖЗИІЇЙКЛМНОПРСТУФХЦЧШЩЬЮЯ";
	const char win1251[] = "ЮАБЦ╢ДЕ╨ФГХЁ©ИЙКЛМНОПЯРСТУЖВЬЫЭЧЪюабц╔де╙фгх╡╞ийклмнопярстужвьыэчъ";
	const char koi8_r[] = "ИЖСЙЕМЦЬЫГУЗТШБЮОПНКДФЩЪВЯЛХРЭАЧёижсйемцьыгузтшбюопнкдфщъвялхрэачЁ";

	

	short int number;
	while (true) {
		system("cls");
		cout << "You file encode: \nUTF8 - 1 \nWindows 1251 - 2 \nKOI8-R - 3 \nExit - 0 \n---> "; cin >> number;
			switch (number) {
			case 1:
				system("cls");
				cout << "You new encode: \nUTF8 - 1 \nWindows 1251 - 2 \nKOI8-R - 3 \nBack - 0 \n---> "; cin >> number;
				switch (number)
				{
				case 1:
					system("cls");
					encode(UTF8, UTF8);
					break;
				case 2:
					system("cls");
					encode(UTF8, win1251);
					break;
				case 3:
					system("cls");
					encode(UTF8, koi8_r);
					break;
				case 0:
					system("cls");
					break;
				default:
					break;
				}
				break;
			case 2:
				system("cls");
				cout << "You new encode: \nUTF8 - 1 \nWindows 1251 - 2 \nKOI8-R - 3 \nBack - 0 \n---> "; cin >> number;
				switch (number)
				{
				case 1:
					system("cls");
					encode(win1251, UTF8);
					break;
				case 2:
					system("cls");
					encode(win1251, win1251);
					break;
				case 3:
					system("cls");
					encode(win1251, koi8_r);
					break;
				case 0:
					system("cls");
					break;
				default:
					break;
				}
				break;
			case 3:
				system("cls");
				cout << "You new encode: \nUTF8 - 1 \nWindows 1251 - 2 \nKOI8-R - 3 \nBack - 0 \n---> "; cin >> number;
				switch (number)
				{
				case 1:
					system("cls");
					encode(koi8_r, UTF8);
					break;
				case 2:
					system("cls");
					encode(koi8_r, win1251);
					break;
				case 3:
					system("cls");
					encode(koi8_r, koi8_r);
					break;
				default:
					break;
				case 0:
					system("cls");
					break;
				}
				break;
			case 0:
				system("cls");
			    exit(0);
				break;
			default:
				break;
			}
	}

	return 0;
}