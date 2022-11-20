#include<iostream>   
#include<Windows.h>   
#include<string>   
using namespace std;

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int size = 100;
    string stroka = "abc[qwe]k?[345]as[67]?r/?";//abc-k*-as-*r? 
    string for_example = "lmnabcwkl4as71r?k0000";
    string array_1 = "";
    string array_2 = "";
    string* array_3 = new string[size / 10];
    int count = 0;
    int count_for_string = 0;
    int skobka = 2;
    cout << stroka;
    for (int i = 0; i < stroka.length(); i++) {
        if (i != 0 && stroka[i - 1] != '/' && stroka[i] == '?') {
            array_1 += '1';
            array_2 += '0';
        }
        else if (stroka[i] == '/') {
            i++;
            array_1 += '0';
            array_2 += stroka[i];
        }
        else if (stroka[i] == '[') {
            array_1 += to_string(skobka);
            array_2 += '0';
            skobka++;
            i++;
            while (stroka[i] != ']') {
                array_3[count_for_string] += stroka[i];
                i++;
            }
            count_for_string++;
        }
        else {
            array_1 += '0';
            array_2 += stroka[i];
        }
        count++;
    }
    cout << endl;
    for (int i = 0; i < count + 1; i++) {
        cout << array_1[i];
    }
    cout << endl;
    for (int i = 0; i < count + 1; i++) {
        cout << array_2[i];
    }
    cout << endl;
    for (int i = 0; i < count_for_string; i++) {
        cout << array_3[i] << endl;
    }
    bool is = false;
    bool is_1 = false;
    int is_is = 0;
    for (int i = 0; i < for_example.length(); i++)
    {
        if (for_example[i] == array_2[0]) {
            is = true;
            for (int j = 0, k = i; j < count; j++, k++) {
                if (array_2[j] != '0') {
                    cout << for_example[k] << "\t" << array_2[j] << endl;
                    if (array_2[j] != for_example[k]) {
                        is = false;
                        break;
                    }
                }
                else {
                    if (array_1[j] != '1') {
                        int number = (array_1[j] - '0') - 2;
                        cout << number << endl;
                        for (int l = 0; l < array_3[number].length(); l++) {
                            if (array_3[number][l] == for_example[k]) {
                                cout << for_example[k] << "\t" << array_3[number][l] << endl;
                                is_is = 1;
                            }
                        }
                    }
                }
            }
            if (is && is_is == 1) {
                cout << "Даний рядок є" << endl;
                is_1 = true;
            }
        }
    }
    if (!is_1)  cout << "Даного рядка немає в рядку " << endl;
    

}
