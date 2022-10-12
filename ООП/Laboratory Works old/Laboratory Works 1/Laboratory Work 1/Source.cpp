#include "Header.h"

void Data::set(const string& firm, const short int& product, const long int& as, const float& part) {

	this->firm = firm;
	this->product = product;
	this->as = as;
	this->part = part;

}

void Data::get(string& firm, short int& product, long int& as, float& part) const {

	firm = this->firm;
	product = this->product;
	as = this->as;
	part = this->part;

}


void Data::show() const {
	cout << " ----------------------------------------------------------------------------------" << endl
		<< "|����� - ������������� ����" << setw(57) << "|" << endl
		<< "|����� " << setw(30) << "|����������. ��������� " << setw(12) << "|������� ����� ������� ($) " << setw(20) << "|����� ����� (%): |" << endl
		<< "|" << setw(13) << left << this->firm << "|" << setw(22) << left << this->product << "|" << setw(27) << left << this->as << "|" << setw(17) << left << this->part << "|" << endl
	 	 << " ----------------------------------------------------------------------------------" << endl;
		

};