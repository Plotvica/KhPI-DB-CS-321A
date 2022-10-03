#include "Header.h"


void encode(const char first_encode[], const char second_encode[]) {

	string check;

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