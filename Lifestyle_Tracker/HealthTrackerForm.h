#pragma once

namespace LifestyleTracker {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class HealthTrackerForm : public System::Windows::Forms::Form
    {
    public:
        HealthTrackerForm(void)
        {
            InitializeComponent();
            this->CenterToScreen();
        }

    protected:
        ~HealthTrackerForm()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        System::Windows::Forms::Label^ labelWeight;
        System::Windows::Forms::Label^ labelHeight;
        System::Windows::Forms::Label^ labelDate;
        System::Windows::Forms::TextBox^ textBoxWeight;
        System::Windows::Forms::TextBox^ textBoxHeight;
        System::Windows::Forms::DateTimePicker^ dateTimePicker;
        System::Windows::Forms::Button^ buttonAdd;
    private: System::Windows::Forms::ListView^ Data_List;

        System::Windows::Forms::ColumnHeader^ columnHeaderDate;
        System::Windows::Forms::ColumnHeader^ columnHeaderWeight;
        System::Windows::Forms::ColumnHeader^ columnHeaderBMI;
    private: System::Windows::Forms::Button^ Clear;

        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            this->labelWeight = (gcnew System::Windows::Forms::Label());
            this->labelHeight = (gcnew System::Windows::Forms::Label());
            this->labelDate = (gcnew System::Windows::Forms::Label());
            this->textBoxWeight = (gcnew System::Windows::Forms::TextBox());
            this->textBoxHeight = (gcnew System::Windows::Forms::TextBox());
            this->dateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
            this->buttonAdd = (gcnew System::Windows::Forms::Button());
            this->Data_List = (gcnew System::Windows::Forms::ListView());
            this->columnHeaderDate = (gcnew System::Windows::Forms::ColumnHeader());
            this->columnHeaderWeight = (gcnew System::Windows::Forms::ColumnHeader());
            this->columnHeaderBMI = (gcnew System::Windows::Forms::ColumnHeader());
            this->Clear = (gcnew System::Windows::Forms::Button());
            this->SuspendLayout();
            // 
            // labelWeight
            // 
            this->labelWeight->AutoSize = true;
            this->labelWeight->Location = System::Drawing::Point(30, 31);
            this->labelWeight->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->labelWeight->Name = L"labelWeight";
            this->labelWeight->Size = System::Drawing::Size(94, 20);
            this->labelWeight->TabIndex = 0;
            this->labelWeight->Text = L"Weight (kg):";
            // 
            // labelHeight
            // 
            this->labelHeight->AutoSize = true;
            this->labelHeight->Location = System::Drawing::Point(30, 92);
            this->labelHeight->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->labelHeight->Name = L"labelHeight";
            this->labelHeight->Size = System::Drawing::Size(95, 20);
            this->labelHeight->TabIndex = 1;
            this->labelHeight->Text = L"Height (cm):";
            // 
            // labelDate
            // 
            this->labelDate->AutoSize = true;
            this->labelDate->Location = System::Drawing::Point(30, 154);
            this->labelDate->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->labelDate->Name = L"labelDate";
            this->labelDate->Size = System::Drawing::Size(48, 20);
            this->labelDate->TabIndex = 2;
            this->labelDate->Text = L"Date:";
            // 
            // textBoxWeight
            // 
            this->textBoxWeight->Location = System::Drawing::Point(150, 31);
            this->textBoxWeight->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->textBoxWeight->Name = L"textBoxWeight";
            this->textBoxWeight->Size = System::Drawing::Size(298, 26);
            this->textBoxWeight->TabIndex = 3;
            // 
            // textBoxHeight
            // 
            this->textBoxHeight->Location = System::Drawing::Point(150, 92);
            this->textBoxHeight->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->textBoxHeight->Name = L"textBoxHeight";
            this->textBoxHeight->Size = System::Drawing::Size(298, 26);
            this->textBoxHeight->TabIndex = 4;
            // 
            // dateTimePicker
            // 
            this->dateTimePicker->Location = System::Drawing::Point(150, 154);
            this->dateTimePicker->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->dateTimePicker->Name = L"dateTimePicker";
            this->dateTimePicker->Size = System::Drawing::Size(298, 26);
            this->dateTimePicker->TabIndex = 5;
            // 
            // buttonAdd
            // 
            this->buttonAdd->BackColor = System::Drawing::Color::Lime;
            this->buttonAdd->Location = System::Drawing::Point(480, 31);
            this->buttonAdd->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->buttonAdd->Name = L"buttonAdd";
            this->buttonAdd->Size = System::Drawing::Size(112, 92);
            this->buttonAdd->TabIndex = 6;
            this->buttonAdd->Text = L"Add";
            this->buttonAdd->UseVisualStyleBackColor = false;
            this->buttonAdd->Click += gcnew System::EventHandler(this, &HealthTrackerForm::buttonAdd_Click);
            // 
            // Data_List
            // 
            this->Data_List->BackColor = System::Drawing::SystemColors::InactiveCaption;
            this->Data_List->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {
                this->columnHeaderDate,
                    this->columnHeaderWeight, this->columnHeaderBMI
            });
            this->Data_List->HideSelection = false;
            this->Data_List->Location = System::Drawing::Point(30, 231);
            this->Data_List->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->Data_List->Name = L"Data_List";
            this->Data_List->Size = System::Drawing::Size(560, 306);
            this->Data_List->TabIndex = 7;
            this->Data_List->UseCompatibleStateImageBehavior = false;
            this->Data_List->View = System::Windows::Forms::View::Details;
            this->Data_List->SelectedIndexChanged += gcnew System::EventHandler(this, &HealthTrackerForm::listViewData_SelectedIndexChanged);
            // 
            // columnHeaderDate
            // 
            this->columnHeaderDate->Text = L"Date";
            this->columnHeaderDate->Width = 100;
            // 
            // columnHeaderWeight
            // 
            this->columnHeaderWeight->Text = L"Weight (kg)";
            this->columnHeaderWeight->Width = 100;
            // 
            // columnHeaderBMI
            // 
            this->columnHeaderBMI->Text = L"BMI";
            this->columnHeaderBMI->Width = 100;
            // 
            // Clear
            // 
            this->Clear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->Clear->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->Clear->Location = System::Drawing::Point(480, 545);
            this->Clear->Name = L"Clear";
            this->Clear->Size = System::Drawing::Size(110, 32);
            this->Clear->TabIndex = 8;
            this->Clear->Text = L"Clear Data";
            this->Clear->UseVisualStyleBackColor = true;
            this->Clear->Click += gcnew System::EventHandler(this, &HealthTrackerForm::Clear_Click);
            // 
            // HealthTrackerForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->ClientSize = System::Drawing::Size(630, 615);
            this->Controls->Add(this->Clear);
            this->Controls->Add(this->Data_List);
            this->Controls->Add(this->buttonAdd);
            this->Controls->Add(this->dateTimePicker);
            this->Controls->Add(this->textBoxHeight);
            this->Controls->Add(this->textBoxWeight);
            this->Controls->Add(this->labelDate);
            this->Controls->Add(this->labelHeight);
            this->Controls->Add(this->labelWeight);
            this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->Name = L"HealthTrackerForm";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"Health Tracker";
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

    private:
        // Event handler for the Add button click
        System::Void buttonAdd_Click(System::Object^ sender, System::EventArgs^ e) {
            String^ weightText = textBoxWeight->Text;
            String^ heightText = textBoxHeight->Text;
            String^ date = dateTimePicker->Value.ToShortDateString();

            if (String::IsNullOrEmpty(weightText) || String::IsNullOrEmpty(heightText)) {
                MessageBox::Show("Please enter both weight and height.", "Input Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
                return;
            }

            try {
                double weight = Convert::ToDouble(weightText);
                double height = Convert::ToDouble(heightText) / 100.0; // Convert height from cm to meters
                double bmi = weight / (height * height); // BMI calculation

                // ListView
                ListViewItem^ item = gcnew ListViewItem(date);
                item->SubItems->Add(weight.ToString("F2"));
                item->SubItems->Add(bmi.ToString("F2")); // Display BMI
                Data_List->Items->Add(item);

                // Clear the inputs after adding
                textBoxWeight->Clear();
                textBoxHeight->Clear();
            }
            catch (FormatException^) {
                MessageBox::Show("Please enter valid numerical values for weight and height.", "Input Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }
    private: System::Void listViewData_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
        
    }
    private: System::Void Clear_Click(System::Object^ sender, System::EventArgs^ e) {
        this->Data_List->Items->Clear();
     }
};
}
