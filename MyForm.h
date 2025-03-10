#pragma once
#include <iostream>
#include <stack>
#include <math.h>
#include <Windows.h>
#include <string>
#include <ctype.h>
#include <queue>
#include <msclr\marshal_cppstd.h>
#include <string>
#include <algorithm>
#include <stdio.h>
#include <typeinfo>
#include <cstdlib>
#include <vector>
#include <ctime>
namespace laba20 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(226, 38);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(62, 22);
			this->numericUpDown1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->button1->Location = System::Drawing::Point(24, 79);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(195, 48);
			this->button1->TabIndex = 1;
			this->button1->Text = L"создать таблицу";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label1->Location = System::Drawing::Point(16, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(203, 20);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Количество студентов";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label2->Location = System::Drawing::Point(517, 35);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(185, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Количество отметок";
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(750, 35);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(101, 22);
			this->numericUpDown2->TabIndex = 4;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->button2->Location = System::Drawing::Point(521, 90);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(330, 48);
			this->button2->TabIndex = 5;
			this->button2->Text = L"заполнить случайными отметками";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(20, 169);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(831, 250);
			this->dataGridView1->TabIndex = 6;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->button3->Location = System::Drawing::Point(115, 425);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(587, 39);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Посчитать";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->button4->Location = System::Drawing::Point(115, 485);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(206, 34);
			this->button4->TabIndex = 8;
			this->button4->Text = L"Раскрасить";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->button5->Location = System::Drawing::Point(496, 485);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(206, 34);
			this->button5->TabIndex = 9;
			this->button5->Text = L"Очистить";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(986, 554);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->numericUpDown1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int kolvoOc;
		int kolvoSt;
	//	bool otmetki = false;
		bool sozdan = false;
		bool raskrashen = false;
		bool poschitan = false;
		int nujn;
		array<String^>^ studenti = gcnew array<String^>(3);

		bool proverkaocenki() {
			bool otm = false;
			if (sozdan) {

				for (int i = 0; i < kolvoSt; i++) {

					for (int j = 1; j <= kolvoOc; j++) {
						if (dataGridView1->Rows[i]->Cells[j]->Value != nullptr) {
							String^ st = (dataGridView1->Rows[i]->Cells[j]->Value)->ToString();
							int oc;

							if (Int32::TryParse(st, oc) && oc > 0 && oc <= 10) {
								otm = true;
							}
							else {
								MessageBox::Show("Введи нормальные цифры");

								return false;
								break;

							}
						}
					}

				}
				return otm;
			}

		}
		void raskraska() {
			if (sozdan && proverkaocenki()) {
				for (int i = 0; i < kolvoSt; i++) {
					for (int j = 1; j <= kolvoOc; j++) {
						String^ st = (dataGridView1->Rows[i]->Cells[j]->Value)->ToString();
						int ocenka = Int32::Parse(st);
						if (ocenka >= 8 && ocenka <= 10) {
							dataGridView1->Rows[i]->Cells[j]->Style->BackColor = BackColor.LightGreen;
						}
						else if (ocenka >= 4 && ocenka <= 7) {
							dataGridView1->Rows[i]->Cells[j]->Style->BackColor = BackColor.Yellow;
						}
						else {
							dataGridView1->Rows[i]->Cells[j]->Style->BackColor = BackColor.Red;
						}
					}

				}
				raskrashen = true;
			}

		}


		void poschitat() {
			if (proverkaocenki()) {
				for (int i = 0; i < kolvoSt; i++) {
					double summa = 0;
					for (int j = 1; j <= kolvoOc; j++) {
						String^ st = (dataGridView1->Rows[i]->Cells[j]->Value)->ToString();
						summa = summa + Int32::Parse(st);
					}
					dataGridView1->Rows[i]->Cells[(int)kolvoOc + 1]->Value = summa / (double)kolvoOc;
				}
				for (int i = 1; i < kolvoOc + 1; i++) {
					double summa = 0;
					for (int j = 0; j < kolvoSt; j++) {
						String^ st = (dataGridView1->Rows[j]->Cells[i]->Value)->ToString();
						summa = summa + Int32::Parse(st);
					}
					//int nujn = dataGridView1->Rows->Count;
					dataGridView1->Rows[nujn + 1]->Cells[i]->Value = summa / (double)kolvoSt;
				}
				poschitan = true;
			}
		}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		if (!sozdan) {
			studenti[0] = "Сидоров";
			studenti[1] = "Романенко";
			studenti[2] = "Иванов";
			//std::string familii[3] = { "Сидоров","Романенко","Иванов" };

			kolvoOc = (int)numericUpDown2->Value;
			kolvoSt = (int)numericUpDown1->Value;

			if (kolvoSt > 0 && kolvoOc > 0) {
				dataGridView1->Columns->Add("Familiya", "Фамилия");
				for (int i = 1; i < kolvoOc + 1; i++) {
					String^ nazv = "ocenka_" + i;
					String^ nomer = "" + i;
					dataGridView1->Columns->Add(nazv, nomer);
				}
				dataGridView1->Columns->Add("sredni", "Средняя");
				for (int i = 0; i < kolvoSt; i++) {
					dataGridView1->Rows->Add(studenti[rand()%3]);
				}
				dataGridView1->Rows->Add();
				dataGridView1->Rows->Add("Средняя оценка по группе:");
				sozdan = true;
				nujn = kolvoSt;
			}
		}
	}



	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (sozdan) {
			srand(time(NULL));
			for (int i = 0; i < kolvoSt; i++) {
				for (int j = 1; j <= kolvoOc; j++) {
					int ocenka = 1 + rand() % 10;
					dataGridView1->Rows[i]->Cells[j]->Value = ocenka;
				}
			}
			if (raskrashen) {
				raskraska();
			}
			if (poschitan) {
				poschitat();
			}
		}
	}



	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		poschitat();
	}



	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!raskrashen) {
			raskraska();
		}
	}


	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		if (raskrashen) {
			for (int i = 0; i < kolvoSt; i++) {
				for (int j = 1; j <= kolvoOc; j++) {
						dataGridView1->Rows[i]->Cells[j]->Style->BackColor = BackColor.White;
				}
			}
			raskrashen = false;
		}
		else if (sozdan) {   
			//for (int j = 0; j <= kolvoOc + 1; j++) {
				dataGridView1->Columns->Clear();
			//}
			sozdan = false;
		}
	}
	};
}
