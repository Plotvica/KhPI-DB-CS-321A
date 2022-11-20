#include "HangmanGame.h"
#include "Hangman Funcions.h"
#include <msclr\marshal_cppstd.h>


HangmanStartTheGame Game;


// main function for form
void main() {

	srand(time(NULL));
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Hangman::HangmanGame form;
	Application::Run(% form);

	
}


// ONE PLAYER MOD
System::Void Hangman::HangmanGame::OnePlayerMod_Click(System::Object^ sender, System::EventArgs^ e)
{

	Game.startNewGame();

	OnButtonsKeyboard();
	
	std::string CodeWordSet = LoadRandomWord();
	std::string DisplayGuessSet;
	
	transform(CodeWordSet.begin(), CodeWordSet.end(), CodeWordSet.begin(), ::toupper);

	DisplayGuessSet = CodeWordSet;
	for (int i = 0; i < CodeWordSet.length(); i++)
		DisplayGuessSet[i] = '#';

	Game.setCodeWord(CodeWordSet);
	Game.setDisplayGuess(DisplayGuessSet);

	OutPutGuees -> Text = Convert_string_to_String(Game.getDisplayGuess());

	picture_of_hangman->Show();
	keyboardPanel->Show();

	InputButton->Enabled = false;
	
}

// TWO PLAYERs MOD


System::Void Hangman::HangmanGame::InputButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	
	std::string CodeWordSet; 
	
	CodeWordSet = msclr::interop::marshal_as<std::string>(InputTextBox->Text);
	transform(CodeWordSet.begin(), CodeWordSet.end(), CodeWordSet.begin(), ::toupper);
	
	bool input = false;
	
	for (size_t i = 0; i < CodeWordSet.length(); i++) {
		if (CodeWordSet[i] >= 'A' && CodeWordSet[i] <= 'Z')
			input = true;
		else {
			input = false;
			MessageBox::Show("False input", "Error");
			break;
		}
	}

	if(input == true) {
			
		std::string DisplayGuessSet = CodeWordSet;
		for (int i = 0; i < CodeWordSet.length(); i++)
			DisplayGuessSet[i] = '#';
		

		Game.setCodeWord(CodeWordSet);
		Game.setDisplayGuess(DisplayGuessSet);

		OutPutGuees->Text = Convert_string_to_String(Game.getDisplayGuess());


		picture_of_hangman->Show();
		keyboardPanel->Show();
			
	}
	
	
}


System::Void Hangman::HangmanGame::TwoPlayersMod_Click(System::Object^ sender, System::EventArgs^ e)
{
	picture_of_hangman->Hide();
	keyboardPanel->Hide();

	Game.startNewGame();

	InputButton->Enabled = true;
	OutPutGuees->Text = " ";
	OnButtonsKeyboard();
	
	
}



// KEYBORAD functions 
System::Void Hangman::HangmanGame::keyboardPanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e)
{
	Bitmap^ zero_mistake = gcnew Bitmap("sprites/0.bmp");
	Bitmap^ one_mistake = gcnew Bitmap("sprites/1.bmp");
	Bitmap^ two_mistakes = gcnew Bitmap("sprites/2.bmp");
	Bitmap^ three_mistakes = gcnew Bitmap("sprites/3.bmp");
	Bitmap^ four_mistakes = gcnew Bitmap("sprites/4.bmp");
	Bitmap^ five_mistakes = gcnew Bitmap("sprites/5.bmp");
	Bitmap^ six_mistakes = gcnew Bitmap("sprites/6.bmp");
	Bitmap^ seven_mistakes = gcnew Bitmap("sprites/7.bmp");
	

	if (Game.getMistakes() == 0) {
		picture_of_hangman->Image = zero_mistake;
	}
	else if (Game.getMistakes() == 1) {
		picture_of_hangman->Image = one_mistake;
	}
	else if (Game.getMistakes() == 2) {
		picture_of_hangman->Image = two_mistakes;
	}
	else if (Game.getMistakes() == 3) {
		picture_of_hangman->Image = three_mistakes;
	}
	else if (Game.getMistakes() == 4) {
		picture_of_hangman->Image = four_mistakes;
	}
	else if (Game.getMistakes() == 5) {
		picture_of_hangman->Image = five_mistakes;
	}
	else if (Game.getMistakes() == 6) {
		picture_of_hangman->Image = six_mistakes;
	}
	else if (Game.getMistakes() == 7) {
		picture_of_hangman->Image = seven_mistakes;
	}
	
	// shut down the keyboard
	if (Game.getWon() == true || Game.getLose() == true) {
		keyboardPanel->Enabled = false;
	}

}

System::Void Hangman::HangmanGame::A_button_Click(System::Object^ sender, System::EventArgs^ e )
{
	Game.check('A');
	OutPutGuees->Text = Convert_string_to_String(Game.getDisplayGuess());
	A_button->Enabled = false;
	
}
System::Void Hangman::HangmanGame::B_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	Game.check('B');
	OutPutGuees->Text = Convert_string_to_String(Game.getDisplayGuess());
	B_button->Enabled = false;

}
System::Void Hangman::HangmanGame::C_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	Game.check('C');
	OutPutGuees->Text = Convert_string_to_String(Game.getDisplayGuess());
	C_button->Enabled = false;
}
System::Void Hangman::HangmanGame::D_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	Game.check('D');
	OutPutGuees->Text = Convert_string_to_String(Game.getDisplayGuess());
	D_button->Enabled = false;
}
System::Void Hangman::HangmanGame::E_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	Game.check('E');
	OutPutGuees->Text = Convert_string_to_String(Game.getDisplayGuess());
	E_button->Enabled = false;
}
System::Void Hangman::HangmanGame::F_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	Game.check('F');
	OutPutGuees->Text = Convert_string_to_String(Game.getDisplayGuess());
	F_button->Enabled = false;
}
System::Void Hangman::HangmanGame::G_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	Game.check('G');
	OutPutGuees->Text = Convert_string_to_String(Game.getDisplayGuess());
	G_button->Enabled = false;
}
System::Void Hangman::HangmanGame::H_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	Game.check('H');
	OutPutGuees->Text = Convert_string_to_String(Game.getDisplayGuess());
	H_button->Enabled = false;
}
System::Void Hangman::HangmanGame::I_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	Game.check('I');
	OutPutGuees->Text = Convert_string_to_String(Game.getDisplayGuess());
	I_button->Enabled = false;
}
System::Void Hangman::HangmanGame::J_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	Game.check('J');
	OutPutGuees->Text = Convert_string_to_String(Game.getDisplayGuess());
	J_button->Enabled = false;
}
System::Void Hangman::HangmanGame::K_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	Game.check('K');
	OutPutGuees->Text = Convert_string_to_String(Game.getDisplayGuess());
	K_button->Enabled = false;
}
System::Void Hangman::HangmanGame::L_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	Game.check('L');
	OutPutGuees->Text = Convert_string_to_String(Game.getDisplayGuess());
	L_button->Enabled = false;
}
System::Void Hangman::HangmanGame::M_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	Game.check('M');
	OutPutGuees->Text = Convert_string_to_String(Game.getDisplayGuess());
	M_button->Enabled = false;
}
System::Void Hangman::HangmanGame::N_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	Game.check('N');
	OutPutGuees->Text = Convert_string_to_String(Game.getDisplayGuess());
	N_button->Enabled = false;
}
System::Void Hangman::HangmanGame::O_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	Game.check('O');
	OutPutGuees->Text = Convert_string_to_String(Game.getDisplayGuess());
	O_button->Enabled = false;
}
System::Void Hangman::HangmanGame::P_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	Game.check('P');
	OutPutGuees->Text = Convert_string_to_String(Game.getDisplayGuess());
	P_button->Enabled = false;
}
System::Void Hangman::HangmanGame::Q_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	Game.check('Q');
	OutPutGuees->Text = Convert_string_to_String(Game.getDisplayGuess());
	Q_button->Enabled = false;
}
System::Void Hangman::HangmanGame::R_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	Game.check('R');
	OutPutGuees->Text = Convert_string_to_String(Game.getDisplayGuess());
	R_button->Enabled = false;
}
System::Void Hangman::HangmanGame::S_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	Game.check('S');
	OutPutGuees->Text = Convert_string_to_String(Game.getDisplayGuess());
	S_button->Enabled = false;
}
System::Void Hangman::HangmanGame::T_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	Game.check('T');
	OutPutGuees->Text = Convert_string_to_String(Game.getDisplayGuess());
	T_button->Enabled = false;
}
System::Void Hangman::HangmanGame::U_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	Game.check('U');
	OutPutGuees->Text = Convert_string_to_String(Game.getDisplayGuess());
	U_button->Enabled = false;
}
System::Void Hangman::HangmanGame::V_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	Game.check('V');
	OutPutGuees->Text = Convert_string_to_String(Game.getDisplayGuess());
	V_button->Enabled = false;
}
System::Void Hangman::HangmanGame::W_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	Game.check('W');
	OutPutGuees->Text = Convert_string_to_String(Game.getDisplayGuess());
	W_button->Enabled = false;
}
System::Void Hangman::HangmanGame::X_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	Game.check('X');
	OutPutGuees->Text = Convert_string_to_String(Game.getDisplayGuess());
	X_button->Enabled = false;
}
System::Void Hangman::HangmanGame::Y_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	Game.check('Y');
	OutPutGuees->Text = Convert_string_to_String(Game.getDisplayGuess());
	Y_button->Enabled = false;
}
System::Void Hangman::HangmanGame::Z_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	Game.check('Z');
	OutPutGuees->Text = Convert_string_to_String(Game.getDisplayGuess());
	Z_button->Enabled = false;
}








// about game
System::Void Hangman::HangmanGame::aboutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	author();
}
// game rules 
System::Void Hangman::HangmanGame::Rules_Click(System::Object^ sender, System::EventArgs^ e) 
{
	rules();
}
// exit bar
System::Void Hangman::HangmanGame::exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}