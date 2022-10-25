#pragma once

#include "Hangman Funcions.h"

namespace Hangman {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;




	/// <summary>
	/// —водка дл€ HangmanGame
	/// </summary>
	public ref class HangmanGame : public System::Windows::Forms::Form {
	

	public:
		HangmanGame(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~HangmanGame()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ picture_of_hangman;
	protected:

	protected:




	private: System::Windows::Forms::Button^ A_button;

	private:

	private: System::Windows::Forms::Button^ B_button;
	private: System::Windows::Forms::Button^ C_button;
	private: System::Windows::Forms::Button^ D_button;
	private: System::Windows::Forms::Button^ E_button;
	private: System::Windows::Forms::Button^ F_button;
	private: System::Windows::Forms::Button^ G_button;
	private: System::Windows::Forms::Button^ H_button;
	private: System::Windows::Forms::Button^ I_button;
	private: System::Windows::Forms::Button^ J_button;
	private: System::Windows::Forms::Button^ K_button;
	private: System::Windows::Forms::Button^ L_button;
	private: System::Windows::Forms::Button^ M_button;
	private: System::Windows::Forms::Button^ N_button;
	private: System::Windows::Forms::Button^ O_button;
	private: System::Windows::Forms::Button^ P_button;
	private: System::Windows::Forms::Button^ Q_button;
	private: System::Windows::Forms::Button^ R_button;
	private: System::Windows::Forms::Button^ S_button;
	private: System::Windows::Forms::Button^ T_button;
	private: System::Windows::Forms::Button^ U_button;
	private: System::Windows::Forms::Button^ V_button;
	private: System::Windows::Forms::Button^ W_button;
	private: System::Windows::Forms::Button^ X_button;
	private: System::Windows::Forms::Button^ Y_button;
	private: System::Windows::Forms::Button^ Z_button;
	private: System::Windows::Forms::Panel^ keyboardPanel;






	private: System::Windows::Forms::Label^ OutPutGuees;
	private: System::Windows::Forms::ToolStripMenuItem^ startANewGameToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ OnePlayerMod;
	private: System::Windows::Forms::ToolStripMenuItem^ TwoPlayersMod;
	private: System::Windows::Forms::ToolStripMenuItem^ Rules;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::Label^ InputLabel;
	private: System::Windows::Forms::TextBox^ InputTextBox;
	private: System::Windows::Forms::Button^ InputButton;










	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(HangmanGame::typeid));
			this->picture_of_hangman = (gcnew System::Windows::Forms::PictureBox());
			this->A_button = (gcnew System::Windows::Forms::Button());
			this->B_button = (gcnew System::Windows::Forms::Button());
			this->C_button = (gcnew System::Windows::Forms::Button());
			this->D_button = (gcnew System::Windows::Forms::Button());
			this->E_button = (gcnew System::Windows::Forms::Button());
			this->F_button = (gcnew System::Windows::Forms::Button());
			this->G_button = (gcnew System::Windows::Forms::Button());
			this->H_button = (gcnew System::Windows::Forms::Button());
			this->I_button = (gcnew System::Windows::Forms::Button());
			this->J_button = (gcnew System::Windows::Forms::Button());
			this->K_button = (gcnew System::Windows::Forms::Button());
			this->L_button = (gcnew System::Windows::Forms::Button());
			this->M_button = (gcnew System::Windows::Forms::Button());
			this->N_button = (gcnew System::Windows::Forms::Button());
			this->O_button = (gcnew System::Windows::Forms::Button());
			this->P_button = (gcnew System::Windows::Forms::Button());
			this->Q_button = (gcnew System::Windows::Forms::Button());
			this->R_button = (gcnew System::Windows::Forms::Button());
			this->S_button = (gcnew System::Windows::Forms::Button());
			this->T_button = (gcnew System::Windows::Forms::Button());
			this->U_button = (gcnew System::Windows::Forms::Button());
			this->V_button = (gcnew System::Windows::Forms::Button());
			this->W_button = (gcnew System::Windows::Forms::Button());
			this->X_button = (gcnew System::Windows::Forms::Button());
			this->Y_button = (gcnew System::Windows::Forms::Button());
			this->Z_button = (gcnew System::Windows::Forms::Button());
			this->keyboardPanel = (gcnew System::Windows::Forms::Panel());
			this->OutPutGuees = (gcnew System::Windows::Forms::Label());
			this->startANewGameToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->OnePlayerMod = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->TwoPlayersMod = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Rules = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->InputLabel = (gcnew System::Windows::Forms::Label());
			this->InputTextBox = (gcnew System::Windows::Forms::TextBox());
			this->InputButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture_of_hangman))->BeginInit();
			this->keyboardPanel->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// picture_of_hangman
			// 
			this->picture_of_hangman->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picture_of_hangman.InitialImage")));
			this->picture_of_hangman->Location = System::Drawing::Point(98, 38);
			this->picture_of_hangman->Name = L"picture_of_hangman";
			this->picture_of_hangman->Size = System::Drawing::Size(316, 267);
			this->picture_of_hangman->TabIndex = 2;
			this->picture_of_hangman->TabStop = false;
			// 
			// A_button
			// 
			this->A_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A_button->Location = System::Drawing::Point(32, 22);
			this->A_button->Name = L"A_button";
			this->A_button->Size = System::Drawing::Size(40, 37);
			this->A_button->TabIndex = 6;
			this->A_button->Text = L"A";
			this->A_button->UseVisualStyleBackColor = true;
			this->A_button->Click += gcnew System::EventHandler(this, &HangmanGame::A_button_Click);
			// 
			// B_button
			// 
			this->B_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B_button->Location = System::Drawing::Point(78, 22);
			this->B_button->Name = L"B_button";
			this->B_button->Size = System::Drawing::Size(40, 37);
			this->B_button->TabIndex = 7;
			this->B_button->Text = L"B";
			this->B_button->UseVisualStyleBackColor = true;
			this->B_button->Click += gcnew System::EventHandler(this, &HangmanGame::B_button_Click);
			// 
			// C_button
			// 
			this->C_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->C_button->Location = System::Drawing::Point(124, 22);
			this->C_button->Name = L"C_button";
			this->C_button->Size = System::Drawing::Size(40, 37);
			this->C_button->TabIndex = 8;
			this->C_button->Text = L"C";
			this->C_button->UseVisualStyleBackColor = true;
			this->C_button->Click += gcnew System::EventHandler(this, &HangmanGame::C_button_Click);
			// 
			// D_button
			// 
			this->D_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->D_button->Location = System::Drawing::Point(170, 22);
			this->D_button->Name = L"D_button";
			this->D_button->Size = System::Drawing::Size(40, 37);
			this->D_button->TabIndex = 9;
			this->D_button->Text = L"D";
			this->D_button->UseVisualStyleBackColor = true;
			this->D_button->Click += gcnew System::EventHandler(this, &HangmanGame::D_button_Click);
			// 
			// E_button
			// 
			this->E_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->E_button->Location = System::Drawing::Point(216, 22);
			this->E_button->Name = L"E_button";
			this->E_button->Size = System::Drawing::Size(40, 37);
			this->E_button->TabIndex = 10;
			this->E_button->Text = L"E";
			this->E_button->UseVisualStyleBackColor = true;
			this->E_button->Click += gcnew System::EventHandler(this, &HangmanGame::E_button_Click);
			// 
			// F_button
			// 
			this->F_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->F_button->Location = System::Drawing::Point(262, 22);
			this->F_button->Name = L"F_button";
			this->F_button->Size = System::Drawing::Size(40, 37);
			this->F_button->TabIndex = 11;
			this->F_button->Text = L"F";
			this->F_button->UseVisualStyleBackColor = true;
			this->F_button->Click += gcnew System::EventHandler(this, &HangmanGame::F_button_Click);
			// 
			// G_button
			// 
			this->G_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->G_button->Location = System::Drawing::Point(308, 22);
			this->G_button->Name = L"G_button";
			this->G_button->Size = System::Drawing::Size(40, 37);
			this->G_button->TabIndex = 12;
			this->G_button->Text = L"G";
			this->G_button->UseVisualStyleBackColor = true;
			this->G_button->Click += gcnew System::EventHandler(this, &HangmanGame::G_button_Click);
			// 
			// H_button
			// 
			this->H_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->H_button->Location = System::Drawing::Point(32, 65);
			this->H_button->Name = L"H_button";
			this->H_button->Size = System::Drawing::Size(40, 37);
			this->H_button->TabIndex = 13;
			this->H_button->Text = L"H";
			this->H_button->UseVisualStyleBackColor = true;
			this->H_button->Click += gcnew System::EventHandler(this, &HangmanGame::H_button_Click);
			// 
			// I_button
			// 
			this->I_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->I_button->Location = System::Drawing::Point(78, 65);
			this->I_button->Name = L"I_button";
			this->I_button->Size = System::Drawing::Size(40, 37);
			this->I_button->TabIndex = 14;
			this->I_button->Text = L"I";
			this->I_button->UseVisualStyleBackColor = true;
			this->I_button->Click += gcnew System::EventHandler(this, &HangmanGame::I_button_Click);
			// 
			// J_button
			// 
			this->J_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->J_button->Location = System::Drawing::Point(124, 65);
			this->J_button->Name = L"J_button";
			this->J_button->Size = System::Drawing::Size(40, 37);
			this->J_button->TabIndex = 15;
			this->J_button->Text = L"J";
			this->J_button->UseVisualStyleBackColor = true;
			this->J_button->Click += gcnew System::EventHandler(this, &HangmanGame::J_button_Click);
			// 
			// K_button
			// 
			this->K_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->K_button->Location = System::Drawing::Point(170, 65);
			this->K_button->Name = L"K_button";
			this->K_button->Size = System::Drawing::Size(40, 37);
			this->K_button->TabIndex = 16;
			this->K_button->Text = L"K";
			this->K_button->UseVisualStyleBackColor = true;
			this->K_button->Click += gcnew System::EventHandler(this, &HangmanGame::K_button_Click);
			// 
			// L_button
			// 
			this->L_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->L_button->Location = System::Drawing::Point(216, 65);
			this->L_button->Name = L"L_button";
			this->L_button->Size = System::Drawing::Size(40, 37);
			this->L_button->TabIndex = 17;
			this->L_button->Text = L"L";
			this->L_button->UseVisualStyleBackColor = true;
			this->L_button->Click += gcnew System::EventHandler(this, &HangmanGame::L_button_Click);
			// 
			// M_button
			// 
			this->M_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->M_button->Location = System::Drawing::Point(262, 65);
			this->M_button->Name = L"M_button";
			this->M_button->Size = System::Drawing::Size(40, 37);
			this->M_button->TabIndex = 18;
			this->M_button->Text = L"M";
			this->M_button->UseVisualStyleBackColor = true;
			this->M_button->Click += gcnew System::EventHandler(this, &HangmanGame::M_button_Click);
			// 
			// N_button
			// 
			this->N_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->N_button->Location = System::Drawing::Point(308, 65);
			this->N_button->Name = L"N_button";
			this->N_button->Size = System::Drawing::Size(40, 37);
			this->N_button->TabIndex = 19;
			this->N_button->Text = L"N";
			this->N_button->UseVisualStyleBackColor = true;
			this->N_button->Click += gcnew System::EventHandler(this, &HangmanGame::N_button_Click);
			// 
			// O_button
			// 
			this->O_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->O_button->Location = System::Drawing::Point(32, 108);
			this->O_button->Name = L"O_button";
			this->O_button->Size = System::Drawing::Size(40, 37);
			this->O_button->TabIndex = 20;
			this->O_button->Text = L"O";
			this->O_button->UseVisualStyleBackColor = true;
			this->O_button->Click += gcnew System::EventHandler(this, &HangmanGame::O_button_Click);
			// 
			// P_button
			// 
			this->P_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->P_button->Location = System::Drawing::Point(78, 108);
			this->P_button->Name = L"P_button";
			this->P_button->Size = System::Drawing::Size(40, 37);
			this->P_button->TabIndex = 21;
			this->P_button->Text = L"P";
			this->P_button->UseVisualStyleBackColor = true;
			this->P_button->Click += gcnew System::EventHandler(this, &HangmanGame::P_button_Click);
			// 
			// Q_button
			// 
			this->Q_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Q_button->Location = System::Drawing::Point(124, 108);
			this->Q_button->Name = L"Q_button";
			this->Q_button->Size = System::Drawing::Size(40, 37);
			this->Q_button->TabIndex = 22;
			this->Q_button->Text = L"Q";
			this->Q_button->UseVisualStyleBackColor = true;
			this->Q_button->Click += gcnew System::EventHandler(this, &HangmanGame::Q_button_Click);
			// 
			// R_button
			// 
			this->R_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->R_button->Location = System::Drawing::Point(170, 108);
			this->R_button->Name = L"R_button";
			this->R_button->Size = System::Drawing::Size(40, 37);
			this->R_button->TabIndex = 23;
			this->R_button->Text = L"R";
			this->R_button->UseVisualStyleBackColor = true;
			this->R_button->Click += gcnew System::EventHandler(this, &HangmanGame::R_button_Click);
			// 
			// S_button
			// 
			this->S_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->S_button->Location = System::Drawing::Point(216, 108);
			this->S_button->Name = L"S_button";
			this->S_button->Size = System::Drawing::Size(40, 37);
			this->S_button->TabIndex = 24;
			this->S_button->Text = L"S";
			this->S_button->UseVisualStyleBackColor = true;
			this->S_button->Click += gcnew System::EventHandler(this, &HangmanGame::S_button_Click);
			// 
			// T_button
			// 
			this->T_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->T_button->Location = System::Drawing::Point(262, 108);
			this->T_button->Name = L"T_button";
			this->T_button->Size = System::Drawing::Size(40, 37);
			this->T_button->TabIndex = 25;
			this->T_button->Text = L"T";
			this->T_button->UseVisualStyleBackColor = true;
			this->T_button->Click += gcnew System::EventHandler(this, &HangmanGame::T_button_Click);
			// 
			// U_button
			// 
			this->U_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->U_button->Location = System::Drawing::Point(308, 108);
			this->U_button->Name = L"U_button";
			this->U_button->Size = System::Drawing::Size(40, 37);
			this->U_button->TabIndex = 26;
			this->U_button->Text = L"U";
			this->U_button->UseVisualStyleBackColor = true;
			this->U_button->Click += gcnew System::EventHandler(this, &HangmanGame::U_button_Click);
			// 
			// V_button
			// 
			this->V_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->V_button->Location = System::Drawing::Point(78, 151);
			this->V_button->Name = L"V_button";
			this->V_button->Size = System::Drawing::Size(40, 37);
			this->V_button->TabIndex = 27;
			this->V_button->Text = L"V";
			this->V_button->UseVisualStyleBackColor = true;
			this->V_button->Click += gcnew System::EventHandler(this, &HangmanGame::V_button_Click);
			// 
			// W_button
			// 
			this->W_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->W_button->Location = System::Drawing::Point(124, 151);
			this->W_button->Name = L"W_button";
			this->W_button->Size = System::Drawing::Size(40, 37);
			this->W_button->TabIndex = 28;
			this->W_button->Text = L"W";
			this->W_button->UseVisualStyleBackColor = true;
			this->W_button->Click += gcnew System::EventHandler(this, &HangmanGame::W_button_Click);
			// 
			// X_button
			// 
			this->X_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->X_button->Location = System::Drawing::Point(170, 151);
			this->X_button->Name = L"X_button";
			this->X_button->Size = System::Drawing::Size(40, 37);
			this->X_button->TabIndex = 29;
			this->X_button->Text = L"X";
			this->X_button->UseVisualStyleBackColor = true;
			this->X_button->Click += gcnew System::EventHandler(this, &HangmanGame::X_button_Click);
			// 
			// Y_button
			// 
			this->Y_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Y_button->Location = System::Drawing::Point(216, 151);
			this->Y_button->Name = L"Y_button";
			this->Y_button->Size = System::Drawing::Size(40, 37);
			this->Y_button->TabIndex = 30;
			this->Y_button->Text = L"Y";
			this->Y_button->UseVisualStyleBackColor = true;
			this->Y_button->Click += gcnew System::EventHandler(this, &HangmanGame::Y_button_Click);
			// 
			// Z_button
			// 
			this->Z_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Z_button->Location = System::Drawing::Point(262, 151);
			this->Z_button->Name = L"Z_button";
			this->Z_button->Size = System::Drawing::Size(40, 37);
			this->Z_button->TabIndex = 31;
			this->Z_button->Text = L"Z";
			this->Z_button->UseVisualStyleBackColor = true;
			this->Z_button->Click += gcnew System::EventHandler(this, &HangmanGame::Z_button_Click);
			// 
			// keyboardPanel
			// 
			this->keyboardPanel->AutoSize = true;
			this->keyboardPanel->Controls->Add(this->Z_button);
			this->keyboardPanel->Controls->Add(this->Y_button);
			this->keyboardPanel->Controls->Add(this->X_button);
			this->keyboardPanel->Controls->Add(this->W_button);
			this->keyboardPanel->Controls->Add(this->V_button);
			this->keyboardPanel->Controls->Add(this->U_button);
			this->keyboardPanel->Controls->Add(this->T_button);
			this->keyboardPanel->Controls->Add(this->S_button);
			this->keyboardPanel->Controls->Add(this->R_button);
			this->keyboardPanel->Controls->Add(this->Q_button);
			this->keyboardPanel->Controls->Add(this->P_button);
			this->keyboardPanel->Controls->Add(this->O_button);
			this->keyboardPanel->Controls->Add(this->N_button);
			this->keyboardPanel->Controls->Add(this->M_button);
			this->keyboardPanel->Controls->Add(this->L_button);
			this->keyboardPanel->Controls->Add(this->K_button);
			this->keyboardPanel->Controls->Add(this->J_button);
			this->keyboardPanel->Controls->Add(this->I_button);
			this->keyboardPanel->Controls->Add(this->H_button);
			this->keyboardPanel->Controls->Add(this->G_button);
			this->keyboardPanel->Controls->Add(this->F_button);
			this->keyboardPanel->Controls->Add(this->E_button);
			this->keyboardPanel->Controls->Add(this->D_button);
			this->keyboardPanel->Controls->Add(this->C_button);
			this->keyboardPanel->Controls->Add(this->B_button);
			this->keyboardPanel->Controls->Add(this->A_button);
			this->keyboardPanel->Enabled = false;
			this->keyboardPanel->Location = System::Drawing::Point(66, 382);
			this->keyboardPanel->Name = L"keyboardPanel";
			this->keyboardPanel->Size = System::Drawing::Size(379, 193);
			this->keyboardPanel->TabIndex = 32;
			this->keyboardPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &HangmanGame::keyboardPanel_Paint);
			// 
			// OutPutGuees
			// 
			this->OutPutGuees->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->OutPutGuees->AutoEllipsis = true;
			this->OutPutGuees->Font = (gcnew System::Drawing::Font(L"Segoe Print", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->OutPutGuees->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->OutPutGuees->Location = System::Drawing::Point(66, 322);
			this->OutPutGuees->Name = L"OutPutGuees";
			this->OutPutGuees->Size = System::Drawing::Size(379, 47);
			this->OutPutGuees->TabIndex = 33;
			this->OutPutGuees->Text = L"HangmanGame";
			this->OutPutGuees->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// startANewGameToolStripMenuItem
			// 
			this->startANewGameToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->OnePlayerMod,
					this->TwoPlayersMod
			});
			this->startANewGameToolStripMenuItem->Name = L"startANewGameToolStripMenuItem";
			this->startANewGameToolStripMenuItem->Size = System::Drawing::Size(110, 20);
			this->startANewGameToolStripMenuItem->Text = L"Start a new game";
			// 
			// OnePlayerMod
			// 
			this->OnePlayerMod->Name = L"OnePlayerMod";
			this->OnePlayerMod->Size = System::Drawing::Size(135, 22);
			this->OnePlayerMod->Text = L"One player";
			this->OnePlayerMod->Click += gcnew System::EventHandler(this, &HangmanGame::OnePlayerMod_Click);
			// 
			// TwoPlayersMod
			// 
			this->TwoPlayersMod->Name = L"TwoPlayersMod";
			this->TwoPlayersMod->Size = System::Drawing::Size(135, 22);
			this->TwoPlayersMod->Text = L"Two players";
			this->TwoPlayersMod->Click += gcnew System::EventHandler(this, &HangmanGame::TwoPlayersMod_Click);
			// 
			// Rules
			// 
			this->Rules->Name = L"Rules";
			this->Rules->Size = System::Drawing::Size(47, 20);
			this->Rules->Text = L"Rules";
			this->Rules->Click += gcnew System::EventHandler(this, &HangmanGame::Rules_Click);
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(55, 20);
			this->aboutToolStripMenuItem->Text = L"About ";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &HangmanGame::aboutToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(38, 20);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &HangmanGame::exitToolStripMenuItem_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->startANewGameToolStripMenuItem,
					this->Rules, this->aboutToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(516, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// InputLabel
			// 
			this->InputLabel->AutoSize = true;
			this->InputLabel->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->InputLabel->Location = System::Drawing::Point(161, 199);
			this->InputLabel->Name = L"InputLabel";
			this->InputLabel->Size = System::Drawing::Size(200, 19);
			this->InputLabel->TabIndex = 34;
			this->InputLabel->Text = L"Your guess word is a";
			this->InputLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// InputTextBox
			// 
			this->InputTextBox->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->InputTextBox->Location = System::Drawing::Point(165, 221);
			this->InputTextBox->Name = L"InputTextBox";
			this->InputTextBox->Size = System::Drawing::Size(196, 26);
			this->InputTextBox->TabIndex = 35;
			// 
			// InputButton
			// 
			this->InputButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->InputButton->Font = (gcnew System::Drawing::Font(L"Miriam Mono CLM", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->InputButton->Location = System::Drawing::Point(202, 265);
			this->InputButton->Name = L"InputButton";
			this->InputButton->Size = System::Drawing::Size(119, 39);
			this->InputButton->TabIndex = 36;
			this->InputButton->Text = L"OK";
			this->InputButton->UseVisualStyleBackColor = true;
			this->InputButton->Click += gcnew System::EventHandler(this, &HangmanGame::InputButton_Click);
			// 
			// HangmanGame
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(516, 587);
			this->Controls->Add(this->picture_of_hangman);
			this->Controls->Add(this->InputButton);
			this->Controls->Add(this->InputTextBox);
			this->Controls->Add(this->InputLabel);
			this->Controls->Add(this->OutPutGuees);
			this->Controls->Add(this->keyboardPanel);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"HangmanGame";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"HangmanGame";
			this->Load += gcnew System::EventHandler(this, &HangmanGame::HangmanGame_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture_of_hangman))->EndInit();
			this->keyboardPanel->ResumeLayout(false);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void HangmanGame_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void aboutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Rules_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void OnePlayerMod_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void TwoPlayersMod_Click(System::Object^ sender, System::EventArgs^ e);



	   //keyboard 
private: System::Void keyboardPanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e);
private: System::Void A_button_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void B_button_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void C_button_Click(System::Object ^ sender, System::EventArgs ^ e);
private: System::Void D_button_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void E_button_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void F_button_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void G_button_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void H_button_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void I_button_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void J_button_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void K_button_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void L_button_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void M_button_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void N_button_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void O_button_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void P_button_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Q_button_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void R_button_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void S_button_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void T_button_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void U_button_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void V_button_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void W_button_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void X_button_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Y_button_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Z_button_Click(System::Object^ sender, System::EventArgs^ e);




private: System::Void InputButton_Click(System::Object^ sender, System::EventArgs^ e);
	   // turn on the buttons to play
public: System::Void OnButtonsKeyboard() {
	keyboardPanel->Enabled = true;
	A_button->Enabled = true;
	B_button->Enabled = true;
	C_button->Enabled = true;
	D_button->Enabled = true;
	E_button->Enabled = true;
	F_button->Enabled = true;
	G_button->Enabled = true;
	H_button->Enabled = true;
	I_button->Enabled = true;
	J_button->Enabled = true;
	K_button->Enabled = true;
	L_button->Enabled = true;
	M_button->Enabled = true;
	N_button->Enabled = true;
	O_button->Enabled = true;
	P_button->Enabled = true;
	Q_button->Enabled = true;
	R_button->Enabled = true;
	S_button->Enabled = true;
	T_button->Enabled = true;
	U_button->Enabled = true;
	V_button->Enabled = true;
	W_button->Enabled = true;
	X_button->Enabled = true;
	Y_button->Enabled = true;
	Z_button->Enabled = true;
};

	 

};




}
