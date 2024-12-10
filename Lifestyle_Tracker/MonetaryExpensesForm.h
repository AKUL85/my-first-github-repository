#pragma once

namespace LifestyleTracker {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MonetaryExpensesForm
	/// </summary>
	public ref class MonetaryExpensesForm : public System::Windows::Forms::Form
	{
	public:
		MonetaryExpensesForm(void)
		{
			InitializeComponent();
			this->CenterToScreen();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MonetaryExpensesForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader2;
	private: System::Windows::Forms::ColumnHeader^ columnHeader3;
	private: System::Windows::Forms::Label^ dailyTotalLabel;
	private: System::Windows::Forms::Label^ monthlyTotalLabel;

	private: System::ComponentModel::IContainer^ components;

#pragma region Windows Form Designer generated code
		   void InitializeComponent(void)
		   {
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->listView1 = (gcnew System::Windows::Forms::ListView());
			   this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			   this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			   this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			   this->dailyTotalLabel = (gcnew System::Windows::Forms::Label());
			   this->monthlyTotalLabel = (gcnew System::Windows::Forms::Label());
			   this->SuspendLayout();
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label1->Location = System::Drawing::Point(96, 19);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(111, 29);
			   this->label1->TabIndex = 0;
			   this->label1->Text = L"Amount:";
			   // 
			   // textBox1
			   // 
			   this->textBox1->Location = System::Drawing::Point(225, 23);
			   this->textBox1->Name = L"textBox1";
			   this->textBox1->Size = System::Drawing::Size(200, 26);
			   this->textBox1->TabIndex = 1;
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label2->Location = System::Drawing::Point(96, 56);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(123, 29);
			   this->label2->TabIndex = 2;
			   this->label2->Text = L"Category:";
			   // 
			   // textBox2
			   // 
			   this->textBox2->BackColor = System::Drawing::Color::White;
			   this->textBox2->Location = System::Drawing::Point(225, 60);
			   this->textBox2->Name = L"textBox2";
			   this->textBox2->Size = System::Drawing::Size(200, 26);
			   this->textBox2->TabIndex = 3;
			   // 
			   // label3
			   // 
			   this->label3->AutoSize = true;
			   this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label3->Location = System::Drawing::Point(96, 94);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(71, 29);
			   this->label3->TabIndex = 4;
			   this->label3->Text = L"Date:";
			   // 
			   // dateTimePicker1
			   // 
			   this->dateTimePicker1->Location = System::Drawing::Point(225, 94);
			   this->dateTimePicker1->Name = L"dateTimePicker1";
			   this->dateTimePicker1->Size = System::Drawing::Size(288, 26);
			   this->dateTimePicker1->TabIndex = 5;
			   // 
			   // button1
			   // 
			   this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				   static_cast<System::Int32>(static_cast<System::Byte>(128)));
			   this->button1->Location = System::Drawing::Point(325, 134);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(100, 35);
			   this->button1->TabIndex = 6;
			   this->button1->Text = L"Add";
			   this->button1->UseVisualStyleBackColor = false;
			   this->button1->Click += gcnew System::EventHandler(this, &MonetaryExpensesForm::button1_Click);
			   // 
			   // listView1
			   // 
			   this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {
				   this->columnHeader1, this->columnHeader2,
					   this->columnHeader3
			   });
			   this->listView1->HideSelection = false;
			   this->listView1->Location = System::Drawing::Point(101, 175);
			   this->listView1->Name = L"listView1";
			   this->listView1->Size = System::Drawing::Size(485, 242);
			   this->listView1->TabIndex = 7;
			   this->listView1->UseCompatibleStateImageBehavior = false;
			   this->listView1->View = System::Windows::Forms::View::Details;
			   // 
			   // columnHeader1
			   // 
			   this->columnHeader1->Text = L"Amount";
			   this->columnHeader1->Width = 100;
			   // 
			   // columnHeader2
			   // 
			   this->columnHeader2->Text = L"Category";
			   this->columnHeader2->Width = 150;
			   // 
			   // columnHeader3
			   // 
			   this->columnHeader3->Text = L"Date";
			   this->columnHeader3->Width = 150;
			   // 
			   // dailyTotalLabel
			   // 
			   this->dailyTotalLabel->AutoSize = true;
			   this->dailyTotalLabel->Location = System::Drawing::Point(100, 420);
			   this->dailyTotalLabel->Name = L"dailyTotalLabel";
			   this->dailyTotalLabel->Size = System::Drawing::Size(99, 20);
			   this->dailyTotalLabel->TabIndex = 8;
			   this->dailyTotalLabel->Text = L"Daily Total: 0";
			   // 
			   // monthlyTotalLabel
			   // 
			   this->monthlyTotalLabel->AutoSize = true;
			   this->monthlyTotalLabel->Location = System::Drawing::Point(257, 420);
			   this->monthlyTotalLabel->Name = L"monthlyTotalLabel";
			   this->monthlyTotalLabel->Size = System::Drawing::Size(120, 20);
			   this->monthlyTotalLabel->TabIndex = 9;
			   this->monthlyTotalLabel->Text = L"Monthly Total: 0";
			   // 
			   // MonetaryExpensesForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::Color::Cyan;
			   this->ClientSize = System::Drawing::Size(642, 460);
			   this->Controls->Add(this->monthlyTotalLabel);
			   this->Controls->Add(this->dailyTotalLabel);
			   this->Controls->Add(this->listView1);
			   this->Controls->Add(this->button1);
			   this->Controls->Add(this->dateTimePicker1);
			   this->Controls->Add(this->label3);
			   this->Controls->Add(this->textBox2);
			   this->Controls->Add(this->label2);
			   this->Controls->Add(this->textBox1);
			   this->Controls->Add(this->label1);
			   this->Name = L"MonetaryExpensesForm";
			   this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			   this->Text = L"Monetary Expenses Tracker";
			   this->Load += gcnew System::EventHandler(this, &MonetaryExpensesForm::MonetaryExpensesForm_Load);
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion

	private:
		// Function to add a new expense to the list
		System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			String^ amount = textBox1->Text;
			String^ category = textBox2->Text;
			String^ date = dateTimePicker1->Value.ToString("yyyy-MM-dd");

			ListViewItem^ item = gcnew ListViewItem(amount);
			item->SubItems->Add(category);
			item->SubItems->Add(date);
			listView1->Items->Add(item);

			textBox1->Clear();
			textBox2->Clear();

			CalculateTotals();
		}

		// Function to calculate daily and monthly totals
		void CalculateTotals() {
			double dailyTotal = 0;
			double monthlyTotal = 0;
			DateTime today = DateTime::Now;
			int currentMonth = today.Month;
			int currentYear = today.Year;

			for each (ListViewItem ^ item in listView1->Items)
			{
				double amount = Double::Parse(item->SubItems[0]->Text);
				DateTime date = DateTime::Parse(item->SubItems[2]->Text);

				// Calculate daily total
				if (date.Date == today.Date) {
					dailyTotal += amount;
				}

				// Calculate monthly total
				if (date.Month == currentMonth && date.Year == currentYear) {
					monthlyTotal += amount;
				}
			}

			dailyTotalLabel->Text = "Daily Total: " + dailyTotal.ToString();
			monthlyTotalLabel->Text = "Monthly Total: " + monthlyTotal.ToString();
		}

	private:
		System::Void MonetaryExpensesForm_Load(System::Object^ sender, System::EventArgs^ e) {
			// Initial load actions can be added here
		}
	};
}
