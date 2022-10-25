#include "Hangman Funcions.h"


void HangmanStartTheGame::check(char response)
{

    bool goodGuess = false;

    for (int i = 0;i < code_word.length();i++) {
        if (response == code_word[i]) {
            display_guess[i] = code_word[i];
            opened++;
            goodGuess = true;
        }

    }

    if (!goodGuess) {
        mistakes++;
        DrawingDeadMan(mistakes);
    }

    if (opened == code_word.length()) {
        Won = true;
        MessageBox::Show("You`ve Won ;)", "Rules");
    }
    else if (mistakes == 7) {
        Lose = true;
        MessageBox::Show("You`ve Lose :(", "Rules");
        display_guess = code_word;
    }


}


// Draw function
void DrawingDeadMan(int incorrect_answer) {

    if (incorrect_answer == 1) {
        MessageBox::Show("Mistakes 1/7", "Opps, you wrong");
       
    }
    else if (incorrect_answer == 2) {
        MessageBox::Show("Mistakes 2/7", "Opps, you wrong");
        

    }
    else if (incorrect_answer == 3) {
        MessageBox::Show("Mistakes 3/7", "Opps, you wrong");
       
    }
    else if (incorrect_answer == 4) {
        MessageBox::Show("Mistakes 4/7", "Opps, you wrong");
        
    }
    else if (incorrect_answer == 5) {
        MessageBox::Show("Mistakes 5/7", "Opps, you wrong");
        
    }
    else if (incorrect_answer == 6) {
        MessageBox::Show("Mistakes 6/7", "Opps, you wrong");
       
    }
    else if (incorrect_answer == 7) {
        MessageBox::Show("Mistakes 7/7", "Opps, you wrong");
       

    }
   
}

// Get lib word function
string LoadRandomWord()
{
    int lineCount = 0;
    std::string word;
    std::vector<string> v;
    std::ifstream reader("words.txt");
    if (reader.is_open()) {

        while (getline(reader, word))
            v.push_back(word);

        int randomLine = rand() % v.size();

        word = v.at(randomLine);
        
        reader.close();
    }
    return word;

}


// rules
void rules() {

    MessageBox::Show(" You need to guess a word that covered by #. \n Seven tries to guess it. \n If you use all tries you lose! \n Good luck! ", "Rules");

}

// rights
void author() {

    MessageBox::Show(" created by Plotva.Inc ", "Author");
   
}




// Convert CLR funtions  



//convert System::string^ TO std::string

std::string& Convert_String_to_string(String^ s, std::string& os) {

    using namespace Runtime::InteropServices;

    const char* chars =

        (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();

    os = chars;

    Marshal::FreeHGlobal(IntPtr((void*)chars));



    return os;

}



//convert std::string TO System::string^

String^ Convert_string_to_String(std::string& os, String^ s) {

    s = gcnew System::String(os.c_str());



    return s;

}



//convert System::string^ TO std::string

std::string& Convert_String_to_string(String^ s) {

    std::string os;

    using namespace Runtime::InteropServices;

    const char* chars =

        (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();

    os = chars;

    Marshal::FreeHGlobal(IntPtr((void*)chars));



    return os;

}



//convert std::string TO System::string^

String^ Convert_string_to_String(std::string& os) {

    System::String^ s = gcnew System::String(os.c_str());



    return s;

}



//convert char TO System::string^

System::String^ Convert_char_to_String(char ch) {

    char* chr = new char();

    chr[0] = ch;

    System::String^ str;

    for (int i = 0; chr[i] != '\0'; i++)

        str += wchar_t(ch);

    return str;

}



//convert System::string^ TO char*

char* Convert_String_to_char(System::String^ string) {

    using namespace System::Runtime::InteropServices;

    return (char*)(void*)Marshal::StringToHGlobalAnsi(string);

}



//convert char* TO System::string^

System::String^ Convert_char_to_String(char* ch) {

    char* chr = new char();

    chr = ch;

    System::String^ str;

    for (int i = 0; chr[i] != '\0'; i++)

        str += wchar_t(ch[i]);

    return str;

}