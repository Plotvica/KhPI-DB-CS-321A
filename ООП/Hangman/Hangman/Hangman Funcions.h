#pragma once
#include <iostream>
#include <algorithm>
#include <string>
#include <fstream>
#include <vector>
#include "windows.h";
using namespace System::Windows::Forms;
using namespace System;
using namespace std;


class HangmanStartTheGame {

	std::string code_word;
	std::string display_guess;
	int opened = 0;
	int mistakes = 0;

	bool Won = false;
	bool Lose = false;



public:

	//reset the Game

	void startNewGame() {
		this->opened = 0;
		this->mistakes = 0;

		this->Won = false;
		this->Lose = false;
	}
	HangmanStartTheGame() {
		 opened = 0;
		 mistakes = 0;

		 Won = false;
		 Lose = false;
	}

	// setters 
	void setCodeWord(const string CodeWord) { this->code_word = CodeWord; };
	void setDisplayGuess(const string DisplayGuess) { this->display_guess = DisplayGuess; };
	
	//getter 
	std::string getCodeWord() const { return this->code_word; } ;
	std::string getDisplayGuess() const { return this->display_guess; };
	int getOpened() const { return this->opened; };
	int getMistakes() const { return this->mistakes; };
	bool getWon() const { return this->Won; };
	bool getLose() const { return this->Lose; };

	// main functions
	void check(char response);
};


void DrawingDeadMan(int incorrect_answer); // Draw function
string LoadRandomWord(); // Get lib word function
void rules(); // rules menu
void author(); // rights


// Convert functions 
std::string& Convert_String_to_string(String^ s, std::string& os); //convert System::string^ TO std::string

String^ Convert_string_to_String(std::string& os, String^ s); //convert std::string TO System::string^

std::string& Convert_String_to_string(String^ s); //convert System::string^ TO std::string

String^ Convert_string_to_String(std::string& os); //convert std::string TO System::string^

System::String^ Convert_char_to_String(char* ch); //convert char* TO System::string^

char* Convert_String_to_char(System::String^ string); //convert System::string^ TO char*