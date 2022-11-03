#pragma once
#include "1.h"
class Menu {
	int size = 10;
	Trip** poezdka = new Trip * [size];
	int id = -1;
	void print() {
		Trip::header();
		for (int i = 0; i < size; i++)
		{
			poezdka[i]->print();
		}
	}
public:
	Menu() {
		create();
		do
		{
			system("cls");
			print();
			int menu;
			cout << "1 - Выборочная печать" << endl;
			cout << "2 - Добавить строки" << endl;
			cout << "3 - Удалить строки по времени" << endl;
			cout << "4 - Редактирование" << endl;
			cin >> menu;
			switch (menu)
			{
			case 1: {
				print_list_arrival();
				system("pause");
				break;
			}
			case 2: {
				add_lines();
				break;
			}
			case 3: {
				delete_lines();
				break;
			}
			case 4: {
				edit_by_city();
				break;
			}
			default:
				break;
			}


		} while (true);
	}
	void create() {
		cout << "Введите размер таблицы: ";
		cin >> size;
		poezdka = new Trip * [size];
		for (int i = 0; i < size; i++)
		{
			id = rand() % (4 - 1 + 1) + 1;
			switch (id)
			{
			case(1):
				poezdka[i] = new Train;
				break;
			case(2):
				poezdka[i] = new Fighter;
				break;
			case(3):
				poezdka[i] = new Passanger;
				break;
			case(4):
				poezdka[i] = new Bus;
				break;
			default:
				break;
			}
		}
	}
	void print_list_arrival() {
		cout << "Введите место прибытия: ";
		bool time = false;
		string city;
		int hours = 0;
		cin >> city;
		cout << "Печать по определенному времени?\n 0 - нет\n 1 - да\n";
		cin >> time;
		if (time)
		{
			cout << "Введите время: ";
			cin >> hours;
		}
		system("cls");
		print();
		cout << "Выборочная печать:" << endl;
		for (int i = 0; i < size; i++)
		{
			if (poezdka[i]->get_arrival() == city && poezdka[i]->get_hour() >= hours) {
				poezdka[i]->print();
			}
		}
	}
	void add_lines() {
		int count;
		cout << "Количество строк: ";
		cin >> count;
		Trip** temp = new Trip * [size + count];
		for (int i = 0; i < size; i++)
		{
			temp[i] = poezdka[i];
		}
		size += count;
		delete[]poezdka;
		poezdka = new Trip * [size];
		for (int i = 0; i < size; i++)
		{
			poezdka[i] = temp[i];
			if (i > size - count - 1) {
				id = rand() % (4 - 1 + 1) + 1;
				switch (id)
				{
				case(1):
					poezdka[i] = new Train;
					break;
				case(2):
					poezdka[i] = new Fighter;
					break;
				case(3):
					poezdka[i] = new Passanger;
					break;
				case(4):
					poezdka[i] = new Bus;
					break;
				default:
					break;
				}
			}
		}
		delete[] temp;
		temp = nullptr;
	}
	void delete_lines() {
		int hours = 0;
		cout << "Введите время: ";
		cin >> hours;
		int temp_size = 0;
		for (int i = 0; i < size; i++)
		{
			if (poezdka[i]->get_hour() >= hours) {
				temp_size++;
			}
		}
		Trip** temp = new Trip * [temp_size];
		int c = 0;
		for (int i = 0; i < size; i++)
		{
			if (poezdka[i]->get_hour() >= hours) {
				temp[c] = poezdka[i];
				c++;
			}
		}
		size = temp_size;
		delete[]poezdka;
		poezdka = new Trip * [size];
		for (int i = 0; i < size; i++)
		{
			poezdka[i] = temp[i];
		}
		delete[] temp;
		for (int i = 0; i < size; i++)
		{
			poezdka[i]->print();
		}
	}
	void edit_by_city() {
		cout << "Введите место прибытия транспортов:\n";
		string city = " ";
		cin >> city;
		int hour, minutes;
		for (int i = 0; i < size; i++)
		{
			if (poezdka[i]->get_arrival() == city) {
				cout << "Транспорт: \t" << poezdka[i]->get_number() << endl;
				cout << "Введите время:" << endl;
				cout << "Часы: ";
				cin >> hour;
				cout << "Минуты: ";
				cin >> minutes;
				poezdka[i]->set_hour(hour);
				poezdka[i]->set_minutes(minutes);
			}
		}
	}
};