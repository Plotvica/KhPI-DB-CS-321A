#pragma once
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
const int cities = 10;

class Trip {
protected:
	string number;
	string arrival;
	string arrival_arr[10] = { "��������","�������","����", "�����","������", "���������", "������", "������", "������", "������" };

	int department_hour;
	int department_min;
public:
	Trip() {
		this->arrival = arrival_arr[rand() % cities];
		this->department_hour = rand() % 24;
		this->department_min = rand() % 60;
	}
	virtual void print() = 0;
	static void header()
	{
		cout << " | " << setw(10) << left << "���������" << "| " << setw(15) << left
			<< "��������" << "| " << setw(8) << "�����" << "|" << setw(65) << left << " �������������" << "|" << endl;
	}
	string get_arrival() {
		return arrival;
	}
	int get_hour() {
		return department_hour;
	}
	string get_number() {
		return number;
	}
	void set_hour(int hour) {
		this->department_hour = hour;
	}
	void set_minutes(int minutes) {
		this->department_min = minutes;
	}
};

class Train : public Trip {
	int joinseet;
	int coupeseet;
	int platzseet;

public:
	Train() {
		this->number = "Train " + to_string(rand() % 100);
		this->joinseet = rand() % 10;
		this->platzseet = rand() % 10;
		this->coupeseet = rand() % 10;
	}
	void print() override {
		cout << " | " << setw(10) << left << number << "| " << setw(15) << left << arrival << "| ";
		if (department_hour < 10)
		{
			cout << 0;
		}
		cout << department_hour << " : ";
		if (department_min < 10) {
			cout << 0;
		}
		cout << department_min << " | " << setw(20) << left << "�����: " + to_string(joinseet) << "| " << setw(20) << left << "��������: " + to_string(platzseet) << "| "
			<< setw(20) << left << "����: " + to_string(coupeseet) << "|" << endl;
	}
	int get_joinseet() {
		return joinseet;
	}
	void set_joinseet(int joinseet) {
		this->joinseet = joinseet;
	}

};

class Plain : public Trip {
protected:
	string airport;
	string airports_arr[3] = { "���������", "���������", "�������" };
public:
	Plain() {
		this->airport = airports_arr[rand() % 3];
	}
	void set_airport(string airport) {
		this->airport = airport;
	}
};

class Passanger : public Plain
{
	bool foodService;
	string seatClass;
	string seatClasses[3] = { "A", "B", "C" };

public:
	Passanger() {
		this->number = "Plain " + to_string(rand() % 100);
		this->seatClass = seatClasses[rand() % 3];
		if (seatClass < "C") {
			this->foodService = true;
		}
		else {
			this->foodService = false;
		}
	}
	void print()override {

		cout << " | " << setw(10) << left << number << "| " << setw(15) << left << arrival << "| ";
		if (department_hour < 10)
		{
			cout << 0;
		}
		cout << department_hour << " : ";
		if (department_min < 10) {
			cout << 0;
		}
		cout << department_min << " | " << left << setw(20) << "��������: " + airport << "| " << setw(20) << left
			<< "�����: " + seatClass << "| ";
		if (foodService)
		{
			cout << setw(20) << left << "���: ��������" << "|" << endl;
		}
		else {
			cout << setw(20) << left << "���: �� ��������" << "|" << endl;
		}
	}

};

class Fighter : public Plain {
	int rocket_count;
	string engine;
	string engines_arr[3] = { "�-32", "��-31��", "F119" };

public:
	Fighter() {
		this->number = "Fighter " + to_string(rand() % 100);
		this->rocket_count = rand() % 5 + 5;
		this->engine = engines_arr[rand() % 3];
	}
	void shoot() {
		if (rocket_count > 0)
		{
			cout << "Shoot" << endl << "- 1 rocket" << endl;
			rocket_count--;
		}
		else {
			cout << "No more rockets" << endl;
		}
	}
	void print() override {
		cout << " | " << setw(10) << left << number << "| " << setw(15) << left << arrival << "| ";
		if (department_hour < 10)
		{
			cout << 0;
		}
		cout << department_hour << " : ";
		if (department_min < 10) {
			cout << 0;
		}
		cout << department_min << " | " << left << setw(20) << "��������: " + airport << "| " << setw(20) << left << "��� ������: " + engine << "| "
			<< setw(20) << left << "���-�� �����: " + to_string(rocket_count) << "|" << endl;
	}
};

class Bus : public Trip {
	bool wifi;
	int driveTime;
public:
	Bus() {
		this->number = "Bus " + to_string(rand() % 100);
		this->wifi = rand() % 2;
		this->driveTime = rand() % 10 + 5;
	}
	void print() override {
		cout << " | " << setw(10) << left << number << "| " << setw(15) << left << arrival << "| ";
		if (department_hour < 10)
		{
			cout << 0;
		}
		cout << department_hour << " : ";
		if (department_min < 10) {
			cout << 0;
		}
		cout << department_min << " | " << setw(20) << left << "����� � ����: " + to_string(driveTime) << "| ";
		if (wifi)
		{
			cout << setw(20) << left << "Wi - Fi: ��������" << "|" << endl;
		}
		else {
			cout << setw(20) << left << "Wi - Fi: �� ��������" << "|" << endl;
		}

	}
	void set_driveTime(int driveTime) {
		this->driveTime = driveTime;
	}
};