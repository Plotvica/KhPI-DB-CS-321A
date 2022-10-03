#include "Header.h"







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

