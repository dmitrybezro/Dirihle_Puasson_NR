#pragma once
#define _USE_MATH_DEFINES
#include <math.h>
#include<vector>
#include<string>
#include<sstream>

using namespace std;

namespace Graph {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ZedGraph;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			pictureBox1->Visible = false;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox3;

	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label4;

	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;








	protected:
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::WindowText;
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button1->Location = System::Drawing::Point(1035, 325);
			this->button1->Margin = System::Windows::Forms::Padding(5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(159, 36);
			this->button1->TabIndex = 15;
			this->button1->Text = L"���������";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(807, 45);
			this->label1->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(240, 26);
			this->label1->TabIndex = 3;
			this->label1->Text = L"����� ��������� �� X";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(1055, 45);
			this->textBox1->Margin = System::Windows::Forms::Padding(5);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(99, 28);
			this->textBox1->TabIndex = 4;
			this->textBox1->Text = L"4";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(807, 115);
			this->label2->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(241, 26);
			this->label2->TabIndex = 5;
			this->label2->Text = L"����� ��������� �� Y";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(1055, 115);
			this->textBox2->Margin = System::Windows::Forms::Padding(5);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(99, 28);
			this->textBox2->TabIndex = 6;
			this->textBox2->Text = L"4";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(824, 255);
			this->label3->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(186, 26);
			this->label3->TabIndex = 7;
			this->label3->Text = L"�������� ������";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(1055, 255);
			this->textBox3->Margin = System::Windows::Forms::Padding(5);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(99, 28);
			this->textBox3->TabIndex = 8;
			this->textBox3->Text = L"0,00000001";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(1055, 185);
			this->textBox4->Margin = System::Windows::Forms::Padding(5);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(99, 28);
			this->textBox4->TabIndex = 13;
			this->textBox4->Text = L"100";
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(807, 185);
			this->label4->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(237, 52);
			this->label4->TabIndex = 12;
			this->label4->Text = L"������������ ����� \r\n             �����";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(25, 47);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 62;
			this->dataGridView2->Size = System::Drawing::Size(749, 565);
			this->dataGridView2->TabIndex = 14;
			this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView2_CellContentClick);
			// 
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::SystemColors::WindowText;
			this->button2->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button2->Location = System::Drawing::Point(807, 325);
			this->button2->Margin = System::Windows::Forms::Padding(5);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(159, 36);
			this->button2->TabIndex = 15;
			this->button2->Text = L"�������";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(127, 45);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(514, 567);
			this->pictureBox1->TabIndex = 16;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 22);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1262, 668);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ForeColor = System::Drawing::SystemColors::WindowText;
			this->Margin = System::Windows::Forms::Padding(5);
			this->Name = L"MyForm";
			this->Text = L"������ ������� ��� ��������� ��������. ���������";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: 
		//  ���������� �� U
		double func(double _x, double _y) {
			return 4;
		}

		//  ������� U
		double func2(double _x, double _y) {
			return 1 - pow(_x - 1, 2) - pow(_y - 0.5, 2);
		}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		
			//  ����� ��������� �� X � �� Y
			double number_x = Convert::ToDouble(textBox1->Text);
			double number_y = Convert::ToDouble(textBox2->Text);

			//  ������������ ����� �����
			double Nmax = Convert::ToDouble(textBox4->Text);

			//  �������� ������
			double eps = Convert::ToDouble(textBox3->Text);

			//  ����� �������� ������
			int Step = 0;

			//  ������� ��������������
			double a = 0, b = 2;
			double c = 0, d = 1;

			//  ����
			double h = (b - a) / number_x;
			double k = (d - c) / number_y;

			//  ��������� ������� �����
			double param_x = 1 / pow(h, 2);
			double param_y = 1 / pow(k, 2);
			double A_p = -2 * (param_x + param_y);

			vector<double> x(number_x + 1);
			vector<double> y(number_y + 1);
			for (int i = 0; i < x.size(); i++) {
				x[i] = a + i * h;
			}

			for (int i = 0; i < y.size(); i++) {
				y[i] = c + i * k;
			}

			vector<vector<double>> Main_Grid(number_y + 1);
			for (int i = 0; i < number_y + 1; i++) {
				Main_Grid[i] = vector<double>(number_x + 1, 0);
			}

			//  ���������� ��������� �������
				//  ����� �������
			for (int i = 0; i < number_y + 1; i++) {
				if (func2(a, y[i]) > 0) {
					Main_Grid[i][0] = floor(func2(a, y[i]) * 10000) / 10000;
				}
				else {
					Main_Grid[i][0] = ceil(func2(a, y[i]) * 10000) / 10000;
				}

			}


			//  ������ �������
			for (int i = 0; i < number_y + 1; i++) {
				if (func2(b, y[i]) > 0) {
					Main_Grid[i][number_x] = floor(func2(b, y[i]) * 10000) / 10000;
				}
				else {
					Main_Grid[i][number_x] = ceil(func2(b, y[i]) * 10000) / 10000;
				}
			}

			//  ������ �������
			for (int i = 1; i < number_x; i++) {
				if (func2(x[i], c) > 0) {
					Main_Grid[0][i] = floor(func2(x[i], c) * 10000) / 10000;
				}
				else {
					Main_Grid[0][i] = ceil(func2(x[i], c) * 10000) / 10000;
				}
			}

			//  ������� �������
			for (int i = 1; i < number_x; i++) {
				if (func2(x[i], d) > 0) {
					Main_Grid[number_y][i] = floor(func2(x[i], d) * 10000) / 10000;
				}
				else {
					Main_Grid[number_y][i] = ceil(func2(x[i], d) * 10000) / 10000;
				}
			}


			//  ������� ������������� ��� ����������� 
			vector<vector<double>> A((number_x - 1) * (number_y - 1));

			for (int i = 0; i < A.size(); i++) {
				A[i] = vector<double>((number_x - 1) * (number_y - 1), 0);
			}

			//  ������ ���������� ������
			vector<double> F((number_y - 1) * (number_x - 1), 0);

			for (int i = 1, row = 0; i < number_y; i++) {
				for (int j = 1; j < number_x; j++, row++) {

					bool flag = true;

					if (j == 1) {  //  ����� ����� ����� �������

						//  ������ ����� �������
						A[row][(i - 1) * (number_x - 1) + j - 1] = A_p;
						F[row] = -func(x[j], y[i]);
						F[row] -= param_x * Main_Grid[i][j - 1];
						A[row][(i - 1) * (number_x - 1) + j + 1 - 1] = param_x;

						//  ������ ����� �����
						if (i == 1) {
							A[row][(i + 1 - 1) * (number_x - 1) + j - 1] = param_y;
							F[row] -= param_y * Main_Grid[i - 1][j];

						}
						else {
							//  ������� ����� �����
							if (i == number_y - 1) {
								A[row][(i - 1 - 1) * (number_x - 1) + j - 1] = param_y;
								F[row] -= param_y * Main_Grid[i + 1][j];
							}
							else {
								A[row][(i + 1 - 1) * (number_x - 1) + j - 1] = param_y;
								A[row][(i - 1 - 1) * (number_x - 1) + j - 1] = param_y;
							}
						}



						flag = false;
					}

					if (j == (number_x - 1)) {  //  ����� ����� ������ ��������
						//  ������ ����� �������
						A[row][(i - 1) * (number_x - 1) + j - 1] = A_p;
						F[row] = -func(x[j], y[i]);
						F[row] -= param_x * Main_Grid[i][j + 1];
						A[row][(i - 1) * (number_x - 1) + j - 1 - 1] = param_x;

						//  ������ ����� �����
						if (i == 1) {
							A[row][(i + 1 - 1) * (number_x - 1) + j - 1] = param_y;
							F[row] -= param_y * Main_Grid[i - 1][j];
						}
						else {
							//  ������� ����� �����
							if (i == number_y - 1) {
								A[row][(i - 1 - 1) * (number_x - 1) + j - 1] = param_y;
								F[row] -= param_y * Main_Grid[i + 1][j];
							}
							else {
								A[row][(i + 1 - 1) * (number_x - 1) + j - 1] = param_y;
								A[row][(i - 1 - 1) * (number_x - 1) + j - 1] = param_y;
							}
						}


						flag = false;
					}

					if ((i == 1) && ((j > 1) && (j < number_x - 1))) {
						A[row][(i - 1) * (number_x - 1) + j - 1] = A_p;
						F[row] = -func(x[j], y[i]);
						F[row] -= param_y * Main_Grid[i - 1][j];
						A[row][(i + 1 - 1) * (number_x - 1) + j - 1] = param_y;
						A[row][(i - 1) * (number_x - 1) + j - 1 - 1] = param_x;
						A[row][(i - 1) * (number_x - 1) + j + 1 - 1] = param_x;
						flag = false;
					}

					if ((i == (number_y - 1)) && ((j > 1) && (j < number_x - 1))) {
						A[row][(i - 1) * (number_x - 1) + j - 1] = A_p;
						F[row] = -func(x[j], y[i]);
						F[row] -= param_y * Main_Grid[i + 1][j];
						A[row][(i - 1 - 1) * (number_x - 1) + j - 1] = param_y;
						A[row][(i - 1) * (number_x - 1) + j - 1 - 1] = param_x;
						A[row][(i - 1) * (number_x - 1) + j + 1 - 1] = param_x;
						flag = false;

					}

					if (flag) {
						A[row][(i - 1) * (number_x - 1) + j - 1] = A_p;
						A[row][(i + 1 - 1) * (number_x - 1) + j - 1] = param_y;
						A[row][(i - 1 - 1) * (number_x - 1) + j - 1] = param_y;
						A[row][(i - 1) * (number_x - 1) + j + 1 - 1] = param_x;
						A[row][(i - 1) * (number_x - 1) + j - 1 - 1] = param_x;
						F[row] = -func(x[j], y[i]);
					}
				}
			}

			//  �������� �������������� ������
			for (int i = 0; i < (number_y - 1) * (number_x - 1); i++) {
				for (int j = 0; j < (number_y - 1) * (number_x - 1); j++) {
					A[i][j] = -A[i][j];
				}
			}

			for (int i = 0; i < F.size(); i++) {
				F[i] = -F[i];
			}


			double max = 0.0;  //  ����� �����������
			double sum = 0.0;  //  ����� �����
			double eps_max = 0.0; // ������� �������� ��������
			double eps_cur = 0.0; // ��� �������� �������� �������� ��������
			int n = (number_x - 1) * (number_y - 1); //����������� ������� �������� ���������
			vector<double> V(n, 0); // ������� ������ x
			vector<double> U(n, 0);
			double v_old; // ������ �������� ������������� ���������� ������� x
			double v_new; // ����� �������� ������������� ���������� ������� x
			bool f = false; // ������� ���������
			while (!f) {
				eps_max = 0.0;
				for (int i = 0; i < n; i++) {
					v_old = V[i];
					v_new = F[i];
					for (int j = 0; j < n; j++)
						if (j != i) {
							v_new -= A[i][j] * V[j];
						}
					v_new /= A[i][i];
					eps_cur = fabs(v_old - v_new);
					if (eps_cur > eps_max) {
						eps_max = eps_cur;
					}
					V[i] = v_new;				
				}
				Step++;
				if ((eps_max < eps) || (Step >= Nmax)) {
					f = true;
				}


			}
			for (int i = 1, m=0; i < number_y; i++) {
				for (int j = 1; j < number_x; j++, m++) {
					U[m] = func2(x[j], y[i]);
				}
			}

			for (int i = 0; i < V.size(); i++) {
				double tmp = fabs(V[i] - U[i]);
				sum += tmp;
				if (tmp > max) {
					max = tmp;
				}
			}
			for (int i = 1, m = 0; i < number_y; i++) {
				for (int j = 1; j < number_x; j++, m++) {
					Main_Grid[i][j] = V[m];
				}
			}

			//  ������ �������
			vector<double> R_vec(V.size(), 0);
			for (int i = 0; i < (number_y - 1) * (number_x - 1); i++) {
				for (int j = 0; j < (number_y - 1) * (number_x - 1); j++) {
					R_vec[i] += A[i][j] * V[j];
				}
				R_vec[i] -= F[i];
			}

			// ����� �������
			double R = 0;
			for (int i = 0; i < R_vec.size(); i++) {
				R += pow(R_vec[i],2);
			}
			R = sqrt(R);

		//  ������� �������
		dataGridView2->RowCount = number_y + 2;
		dataGridView2->ColumnCount = number_x + 3;

		//  ������ ��������� �����
		dataGridView2->RowHeadersVisible = false;

		//  ������ ���� ������ � �������, ��� ����� �������� x � �
		 dataGridView2->Rows[0]->DefaultCellStyle->BackColor = Color::CornflowerBlue;
		 for (int i = 1; i < number_y + 2; i++) {
				 dataGridView2->Rows[i]->Cells[1]->Style->BackColor = Color::CornflowerBlue;
		 }
		 dataGridView2->Rows[0]->Cells[0]->Style->BackColor = Color::White;

		//  ��������� ��������� �������
		for (int i = number_x, col = 2; i >= 0; i--, col++) {
			dataGridView2->Columns[col]->HeaderText = Convert::ToString(number_x - i);
			dataGridView2->Rows[0]->Cells[i + 2]->Value = floor(x[i] * 1000) / 1000;
		}

		for (int i = number_y, row =1; i >=0; i--, row++) {
			dataGridView2->Rows[row]->Cells[0]->Value = i;
			dataGridView2->Rows[row]->Cells[1]->Value = floor(y[i] * 1000)/ 1000;
		}

		dataGridView2->Rows[0]->Cells[0]->Value = Convert::ToString("j");
		dataGridView2->Columns[1]->HeaderText = Convert::ToString("i");
		dataGridView2->Rows[0]->Cells[1]->Value = Convert::ToString("Y / X");

		//  �������� ���������� �������
		for (int i = number_y + 1, k = 0; i > 0; i--, k++) {
			for (int j = 2, p = 0; j < number_x + 3; j++, p++) {
				dataGridView2->Rows[i]->Cells[j]->Value = floor(Main_Grid[k][p] * 1000)/1000;
			}
		}
		
		System::Windows::Forms::MessageBox::Show(
			"�������� ������ �������� ������� ������� \n�� ����� �������� (" + Convert::ToString(number_x) + ", " + Convert::ToString(number_y)+ ").\n"
			+ "\n����� ����������� �������� ������ = " + Convert::ToString(Step) + "\n\n�������� �� ������ = " + Convert::ToString(eps_max)
			+"\n��� �������� �������� ������ " + Convert::ToString(eps)
			 + "\n\n������� �� ������ = " + Convert::ToString(R) +
			// �������� ������ �������� ������� � ���������� �������
			"\n\n������ ������ � ������������ " + Convert::ToString(max),
			"�������� ������",
			MessageBoxButtons::OK,
			MessageBoxIcon::Information,
			MessageBoxDefaultButton::Button1);



	};
	private: System::Void zedGraphControl1_Load(System::Object^ sender, System::EventArgs^ e) {
	};
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (pictureBox1->Visible == false) {
			pictureBox1->Visible = true;
		}
		else {
			pictureBox1->Visible = false;
		}
		pictureBox1->Image = System::Drawing::Image::FromFile("1.jpg");
		pictureBox1->SizeMode = PictureBoxSizeMode::Zoom;
		pictureBox1->BorderStyle = BorderStyle::Fixed3D;

	}

private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
