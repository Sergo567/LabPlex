#pragma once

#include"TPoint.h"
#include"TLine.h"
#include<vector>
#include<set>
#include<queue>
#include<iostream>
#include <msclr\marshal_cppstd.h>
#include"Plex.h"

namespace PlexForma {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для PlexForm
	/// </summary>

	std::vector<TPoint*> Dots;
	std::vector<TLine*> Lines;
	Plex *flex = nullptr;

	std::set<TPoint> setik;

	public ref class PlexForm : public System::Windows::Forms::Form
	{
	public:
		PlexForm(void)
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
		~PlexForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected:
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::Button^  exite;
	private: System::Windows::Forms::Label^  point;

	private: System::Windows::Forms::Label^  Line;
	private: System::Windows::Forms::Label^  startPoint;
	private: System::Windows::Forms::Label^  endPoint;
	private: System::Windows::Forms::Label^  nameOfPoint;
	private: System::Windows::Forms::Label^  moveX;
	private: System::Windows::Forms::Label^  moveY;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Button^  createLine;
	private: System::Windows::Forms::Button^  movePoint;
	private: System::Windows::Forms::Button^  save;
	private: System::Windows::Forms::Button^  loadButton;
	private: System::Windows::Forms::ColorDialog^  colorDialog1;
	private: System::Windows::Forms::Button^  button1;


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->exite = (gcnew System::Windows::Forms::Button());
			this->point = (gcnew System::Windows::Forms::Label());
			this->Line = (gcnew System::Windows::Forms::Label());
			this->startPoint = (gcnew System::Windows::Forms::Label());
			this->endPoint = (gcnew System::Windows::Forms::Label());
			this->nameOfPoint = (gcnew System::Windows::Forms::Label());
			this->moveX = (gcnew System::Windows::Forms::Label());
			this->moveY = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->createLine = (gcnew System::Windows::Forms::Button());
			this->movePoint = (gcnew System::Windows::Forms::Button());
			this->save = (gcnew System::Windows::Forms::Button());
			this->loadButton = (gcnew System::Windows::Forms::Button());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(545, 392);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &PlexForm::pictureBox1_MouseDown);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->ColumnHeadersVisible = false;
			this->dataGridView1->Location = System::Drawing::Point(652, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->Size = System::Drawing::Size(154, 178);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &PlexForm::dataGridView1_CellContentClick);
			// 
			// dataGridView2
			// 
			this->dataGridView2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView2->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->ColumnHeadersVisible = false;
			this->dataGridView2->Location = System::Drawing::Point(652, 196);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersVisible = false;
			this->dataGridView2->Size = System::Drawing::Size(154, 180);
			this->dataGridView2->TabIndex = 2;
			this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &PlexForm::dataGridView2_CellContentClick);
			// 
			// exite
			// 
			this->exite->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->exite->Location = System::Drawing::Point(944, 411);
			this->exite->Name = L"exite";
			this->exite->Size = System::Drawing::Size(75, 23);
			this->exite->TabIndex = 3;
			this->exite->Text = L"Exit";
			this->exite->UseVisualStyleBackColor = true;
			this->exite->Click += gcnew System::EventHandler(this, &PlexForm::exite_Click);
			// 
			// point
			// 
			this->point->AutoSize = true;
			this->point->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->point->Location = System::Drawing::Point(551, 12);
			this->point->Name = L"point";
			this->point->Size = System::Drawing::Size(53, 16);
			this->point->TabIndex = 4;
			this->point->Text = L"Точки";
			// 
			// Line
			// 
			this->Line->AutoSize = true;
			this->Line->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Line->Location = System::Drawing::Point(551, 196);
			this->Line->Name = L"Line";
			this->Line->Size = System::Drawing::Size(54, 16);
			this->Line->TabIndex = 5;
			this->Line->Text = L"Линии";
			// 
			// startPoint
			// 
			this->startPoint->AutoSize = true;
			this->startPoint->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->startPoint->Location = System::Drawing::Point(812, 16);
			this->startPoint->Name = L"startPoint";
			this->startPoint->Size = System::Drawing::Size(92, 16);
			this->startPoint->TabIndex = 6;
			this->startPoint->Text = L"Нач. точка:";
			// 
			// endPoint
			// 
			this->endPoint->AutoSize = true;
			this->endPoint->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->endPoint->Location = System::Drawing::Point(814, 64);
			this->endPoint->Name = L"endPoint";
			this->endPoint->Size = System::Drawing::Size(90, 16);
			this->endPoint->TabIndex = 7;
			this->endPoint->Text = L"Кон. точка:";
			// 
			// nameOfPoint
			// 
			this->nameOfPoint->AutoSize = true;
			this->nameOfPoint->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->nameOfPoint->Location = System::Drawing::Point(816, 196);
			this->nameOfPoint->Name = L"nameOfPoint";
			this->nameOfPoint->Size = System::Drawing::Size(88, 16);
			this->nameOfPoint->TabIndex = 8;
			this->nameOfPoint->Text = L"Имя точки:";
			// 
			// moveX
			// 
			this->moveX->AutoSize = true;
			this->moveX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->moveX->Location = System::Drawing::Point(869, 247);
			this->moveX->Name = L"moveX";
			this->moveX->Size = System::Drawing::Size(21, 16);
			this->moveX->TabIndex = 9;
			this->moveX->Text = L"X:";
			// 
			// moveY
			// 
			this->moveY->AutoSize = true;
			this->moveY->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->moveY->Location = System::Drawing::Point(869, 299);
			this->moveY->Name = L"moveY";
			this->moveY->Size = System::Drawing::Size(22, 16);
			this->moveY->TabIndex = 10;
			this->moveY->Text = L"Y:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(919, 15);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 11;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &PlexForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(919, 64);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 12;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(919, 192);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 13;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(919, 247);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 14;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(919, 299);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 15;
			// 
			// createLine
			// 
			this->createLine->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->createLine->Location = System::Drawing::Point(815, 118);
			this->createLine->Name = L"createLine";
			this->createLine->Size = System::Drawing::Size(204, 23);
			this->createLine->TabIndex = 16;
			this->createLine->Text = L"Начертить линию";
			this->createLine->UseVisualStyleBackColor = true;
			this->createLine->Click += gcnew System::EventHandler(this, &PlexForm::createLine_Click);
			// 
			// movePoint
			// 
			this->movePoint->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->movePoint->Location = System::Drawing::Point(819, 353);
			this->movePoint->Name = L"movePoint";
			this->movePoint->Size = System::Drawing::Size(204, 23);
			this->movePoint->TabIndex = 17;
			this->movePoint->Text = L"Переместить точку";
			this->movePoint->UseVisualStyleBackColor = true;
			this->movePoint->Click += gcnew System::EventHandler(this, &PlexForm::movePoint_Click);
			// 
			// save
			// 
			this->save->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->save->Location = System::Drawing::Point(652, 411);
			this->save->Name = L"save";
			this->save->Size = System::Drawing::Size(154, 23);
			this->save->TabIndex = 18;
			this->save->Text = L"Сохранить";
			this->save->UseVisualStyleBackColor = true;
			this->save->Click += gcnew System::EventHandler(this, &PlexForm::save_Click);
			// 
			// loadButton
			// 
			this->loadButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->loadButton->Location = System::Drawing::Point(478, 411);
			this->loadButton->Name = L"loadButton";
			this->loadButton->Size = System::Drawing::Size(137, 23);
			this->loadButton->TabIndex = 19;
			this->loadButton->Text = L"Загрузить";
			this->loadButton->UseVisualStyleBackColor = true;
			this->loadButton->Click += gcnew System::EventHandler(this, &PlexForm::loadButton_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(304, 411);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(136, 23);
			this->button1->TabIndex = 20;
			this->button1->Text = L"Цвет";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &PlexForm::button1_Click);
			// 
			// PlexForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1031, 446);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->loadButton);
			this->Controls->Add(this->save);
			this->Controls->Add(this->movePoint);
			this->Controls->Add(this->createLine);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->moveY);
			this->Controls->Add(this->moveX);
			this->Controls->Add(this->nameOfPoint);
			this->Controls->Add(this->endPoint);
			this->Controls->Add(this->startPoint);
			this->Controls->Add(this->Line);
			this->Controls->Add(this->point);
			this->Controls->Add(this->exite);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"PlexForm";
			this->Text = L"PlexForm";
			this->Load += gcnew System::EventHandler(this, &PlexForm::PlexForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private:
			Graphics^ g;
			Bitmap^ Im;
			SolidBrush^ Brush;
			int DotName = -1;
			int COLOR = -16777216;
			
			void PrintDotsDataGrid() {
				dataGridView1->RowCount = Dots.size();
				dataGridView1->ColumnCount = 3;
				dataGridView1->Columns[0]->HeaderCell->Value = "Name";
				dataGridView1->Columns[1]->HeaderCell->Value = "X";
				dataGridView1->Columns[2]->HeaderCell->Value = "Y";
				for (int i = 0; i < Dots.size(); i++) {
					dataGridView1->Rows[i]->Cells[0]->Value = msclr::interop::marshal_as<String^>(Dots[i]->GetName());
					dataGridView1->Rows[i]->Cells[1]->Value = System::Convert::ToString(Dots[i]->GetX());
					dataGridView1->Rows[i]->Cells[2]->Value = System::Convert::ToString(Dots[i]->GetY());
				}
			}

			std::string TranslateTo26(int x) {
				std::string ans;
				while (x) {
					ans += char(x % 26 + 'A');
					x /= 26;
				}
				std::reverse(ans.begin(), ans.end());
				if (ans.size() == 0) {
					ans += 'A';
				}
				return ans;
			}

			std::string GenerateNewName() {
				return TranslateTo26(++DotName);
			}
			int FindNameInDots(std::string s) {
				for (int i = 0; i < Dots.size(); i++) {
					if (Dots[i]->GetName() == s) return i;
				}
				return -1;
			}

			void ClearPictureBox() {
				Im = gcnew Bitmap(pictureBox1->Width, pictureBox1->Height);
				g->Clear(Color::White);
				pictureBox1->Image = Im;
				pictureBox1->Refresh();
				pictureBox1->Invalidate();
			}
	private: System::Void PlexForm_Load(System::Object^  sender, System::EventArgs^  e) {
		Im = gcnew Bitmap(pictureBox1->Width, pictureBox1->Height);
		g = Graphics::FromImage(Im);
		pictureBox1->Image = Im;
	}
	private: System::Void save_Click(System::Object^  sender, System::EventArgs^  e) {
		if (!Lines.size()) return;
		setik.clear();

		/*String^ kek = msclr::interop::marshal_as<String^>(Lines[0]->GetName());
		MessageBox::Show(kek);*/

		flex = new Plex(Lines[0]);
		setik.insert(*((TPoint*)Lines[0]->GetLeft()));
		setik.insert(*((TPoint*)Lines[0]->GetRight()));
		std::queue<TLine*> q;
		for (int i = 1; i < Lines.size(); i++) {
			if (setik.find(*(TPoint*)(Lines[i]->GetLeft())) != setik.end() ||
				setik.find(*(TPoint*)(Lines[i]->GetRight())) != setik.end()) {
				flex->addLine(Lines[i]);
				setik.insert(*(TPoint*)(Lines[i]->GetLeft()));
				setik.insert(*(TPoint*)(Lines[i]->GetRight()));
			}
			else {
				q.push(Lines[i]);
			}
		}
		int cnt = 0;
		while (!q.empty()) {
			if (cnt == 1e5) break;
			cnt++;
			TLine* cur = q.front();
			q.pop();
			if (setik.find(*(TPoint*)(cur->GetLeft())) != setik.end() ||
				setik.find(*(TPoint*)(cur->GetRight())) != setik.end()) {
				flex->addLine(cur);
				setik.insert(*(TPoint*)(cur->GetLeft()));
				setik.insert(*(TPoint*)(cur->GetRight()));
			}
			else {
				q.push(cur);
			}
		}
		flex->saveFile();
		flex->saveGraph();
		flex->reColor(COLOR);
		PrintLinesDataGrid();
	}
private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
}
private: System::Void loadButton_Click(System::Object^  sender, System::EventArgs^  e) {
	std::string name = "outputFile.txt";
	if (!flex) flex = new Plex();
	flex->readFile(name);
	auto ans = flex->getPointsAndLines();
	Dots.clear();
	Lines.clear();
	Dots = ans.first;
	Lines = ans.second;
	if (Dots.size()) PrintDotsDataGrid();
	if (Lines.size()) PrintLinesDataGrid();
	DotName = Lines.size() - 1;
	flex->reColor(COLOR);

	ClearPictureBox();
	if (flex == nullptr || flex->Empty()) return;
	delete g;
	g = Graphics::FromImage(Im);
	pictureBox1->Image = Im;
	flex->reColor(COLOR);
	flex->Draw(g);
	pictureBox1->Refresh();
	pictureBox1->Invalidate();
}

		 void DrawDots() {
			 for (int i = 0; i < Dots.size(); i++) {
				 delete g;
				 g = Graphics::FromImage(Im);
				 pictureBox1->Image = Im;
				 Dots[i]->SetColor(COLOR);
				 Dots[i]->Draw(g);
				 pictureBox1->Refresh();
				 pictureBox1->Invalidate();
			 }
		 }

		 void DrawLines() {
			 for (int i = 0; i < Lines.size(); i++) {
				 delete g;
				 g = Graphics::FromImage(Im);
				 pictureBox1->Image = Im;
				 Lines[i]->SetColor(COLOR);
				 Lines[i]->Draw(g);
				 pictureBox1->Refresh();
				 pictureBox1->Invalidate();
			 }
		 }

		 void PrintLinesDataGrid() {
			 dataGridView2->RowCount = Lines.size();
			 dataGridView2->ColumnCount = 5;
			 dataGridView2->Columns[0]->HeaderCell->Value = "Name";
			 dataGridView2->Columns[1]->HeaderCell->Value = "X1";
			 dataGridView2->Columns[2]->HeaderCell->Value = "Y1";
			 dataGridView2->Columns[3]->HeaderCell->Value = "X2";
			 dataGridView2->Columns[4]->HeaderCell->Value = "Y2";
			 for (int i = 0; i < Lines.size(); i++) {
				 dataGridView2->Rows[i]->Cells[0]->Value = msclr::interop::marshal_as<String^>(Lines[i]->GetName());
				 dataGridView2->Rows[i]->Cells[1]->Value = System::Convert::ToString(((TPoint*)(Lines[i]->GetLeft()))->GetX());
				 dataGridView2->Rows[i]->Cells[2]->Value = System::Convert::ToString(((TPoint*)(Lines[i]->GetLeft()))->GetY());
				 dataGridView2->Rows[i]->Cells[3]->Value = System::Convert::ToString(((TPoint*)(Lines[i]->GetRight()))->GetX());
				 dataGridView2->Rows[i]->Cells[4]->Value = System::Convert::ToString(((TPoint*)(Lines[i]->GetRight()))->GetY());
			 }
		 }
private: System::Void dataGridView2_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
}
private: System::Void movePoint_Click(System::Object^  sender, System::EventArgs^  e) {
	std::string NamePointToMove = msclr::interop::marshal_as<std::string>(textBox3->Text);
	int dx = System::Convert::ToInt32(textBox4->Text);
	int dy = System::Convert::ToInt32(textBox5->Text);
	int index = FindNameInDots(NamePointToMove);
	if (index == -1) {
		MessageBox::Show("Такого имени точки не существует!");
		return;
	}

	if (flex) {
		TPoint* find = flex->SearchPoint(NamePointToMove);

		if (find) {
			find->MovePoint(dx, dy);
		}
		flex->saveFile();
		flex->saveGraph();
	}
	Dots[index]->MovePoint(dx, dy);
	if (Dots.size()) PrintDotsDataGrid();
	if (Lines.size()) PrintLinesDataGrid();

	ClearPictureBox();

	DrawLines();
	DrawDots();

}
private: System::Void createLine_Click(System::Object^  sender, System::EventArgs^  e) {
	std::string Name1 = msclr::interop::marshal_as<std::string>(textBox1->Text);
	std::string Name2 = msclr::interop::marshal_as<std::string>(textBox2->Text);
	int ind1 = FindNameInDots(Name1);
	int ind2 = FindNameInDots(Name2);
	if (ind1 == -1 || ind2 == -1) {
		MessageBox::Show("Такого имени точки не существует!");
		return;
	}
	std::string NameLine = Name1 + ' ' + Name2;
	Lines.push_back(new TLine(Dots[ind1], Dots[ind2]));
	DrawLines();
	PrintLinesDataGrid();
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void exite_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();
}
private: System::Void pictureBox1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	Im = gcnew Bitmap(pictureBox1->Image);
	int X = e->X;
	int Y = e->Y;
	std::string name = GenerateNewName();

	Dots.push_back(new TPoint(X, Y, name));
	Dots.back()->SetColor(COLOR);
	//MessageBox::Show(System::Convert::ToString(mas.size()));
	PrintDotsDataGrid();
	DrawDots();
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (colorDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		COLOR = colorDialog1->Color.ToArgb();
		//MessageBox::Show(System::Convert::ToString(COLOR));
		for (auto i : Dots) {
			i->SetColor(COLOR);
		}
		for (auto i : Lines) {
			i->SetColor(COLOR);
		}
		/*DrawPlexButton_Click(sender, e);
		DrawPictButton_Click(sender, e);*/
	}
}
};
}
