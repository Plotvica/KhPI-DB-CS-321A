#include<iostream>   
#include<string>  

using namespace std;

int main() {

    string primestring = "lmnabcwkl4as71r?k0000jfhgjfhgggonvbfffjhugu";
    cout << primestring << endl;

    string request = "abc[qwe]k?[345]as[67]?r/?";
    cout << request << endl;
   

    string mask;
    string result_string;
    string* brackets = new string[10];

    int count = 0;
    int count_breckets = 0;
    int bracket = 2;
    
    
    for (int i = 0; i < request.length(); i++) {
        if (i != 0 and request[i - 1] != '/' and request[i] == '?') {
            mask += '1';
            result_string += '0';
        }
        else if (request[i] == '/') {
            i++;
            mask += '0';
            result_string += request[i];
        }
        else if (request[i] == '[') {
            mask += to_string(bracket);
            result_string += '0';
            bracket++;
            i++;
            while (request[i] != ']') {
                brackets[count_breckets] += request[i];
                i++;
            }
            count_breckets++;
        }
        else {
            mask += '0';
            result_string += request[i];
        }
        count++;
    }

    cout << endl;
    for (int i = 0; i < count_breckets; i++) cout << brackets[i] << endl;

    cout << endl << mask << endl;
   

    cout << endl << result_string << endl << endl;

    count_breckets = 0;

    for (int i = 0; i < primestring.length(); i++)
        if (primestring[i] == result_string[0])
            for (int j = 0; j < count; j++, i++)
                if (result_string[j] != '0' ) {
                    if (result_string[j] != primestring[i]) break;
                    else cout << primestring[i] << "\t" << result_string[j] << endl;
                }
                else {
                    if (mask[j] != '1') {
                        for (int l = 0; l < brackets[count_breckets].length(); l++)
                            if (brackets[count_breckets][l] == primestring[i]) {
                                cout << primestring[i] << "\t" << brackets[count_breckets][l] << endl;
                                count_breckets++;
                                break;
                            }
                    }
                    else cout << primestring[i] << "\t" << result_string[j] << endl;   
                }



    ////////////////////////////////////////////////////////////////
    ////////////////////// DOP * //////////////////////////////////
    //////////////////////////////////////////////////////////////

    string star = "g*j*f";

    bool crSet = true;

    for (size_t i = 0; i < star.length(); i++)
        if (star[i] == '*')
            if (i == star.length() - 1)
                crSet = false;

    cout << "\nStar regex: " << star << endl;

    if (crSet == false)
        cout << "False input!\n";

    else for (size_t i = 0; i < primestring.length(); i++)
        if (primestring[i] == star[0]) {
            int stepFlag = i;
            int count = 1;
            i++; 
            int j = 1;
            if (primestring[stepFlag+1] != star[j] and star[j] != '*') continue;
            while (true) { if (primestring[i] == star[0]) { count++; i++; } else break; }
            while (true) {
                if (primestring[i] != star[j] and star[j] != '*' or primestring[i] == primestring[primestring.length()-1]){
                    if(j == 1){ count = 0;break;}
                    break;
                }
                else if (primestring[i] != star[j] and star[j] != '*') { count = 0; break; }
                else if (star[j] == '*'){
                    while (true){
                        if (i == primestring.length() - 1 and primestring[primestring.length() - 1] != star[star.length()]) { count = 0; break; }
                        if (primestring[i] == star[j + 1]) { j++; break; }
                        i++;count++;
                    }
                }
                if (count == 0) break;
                i++; j++; count++;
            }
            while (true) { if (primestring[i] == star[star.length() - 1]) { count++; i++; } else break;} 
            if(count > 0) cout << stepFlag <<"*: " << count << endl;
        }       
    

    

}
