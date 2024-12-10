#pragma once

#include "User.h"

namespace LifestyleTracker {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::Data::SqlClient; // Include this for database interactions

    public ref class RegistrationForm : public System::Windows::Forms::Form
    {
    public:
        bool switchToLogin = false; // To track if user wants to switch to login
    private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
    private: System::Windows::Forms::LinkLabel^ Login;
    private: System::Windows::Forms::Label^ label1;
    public:


    public:
        User^ user; // To store the registered user data

        RegistrationForm(void)
        {
            InitializeComponent();
        }

    protected:
        ~RegistrationForm()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        System::Windows::Forms::Label^ labelName;
        System::Windows::Forms::TextBox^ textBoxName;
        System::Windows::Forms::Label^ labelEmail;
        System::Windows::Forms::TextBox^ textBoxEmail;
        System::Windows::Forms::Label^ labelPhone;
        System::Windows::Forms::TextBox^ textBoxPhone;
        System::Windows::Forms::Label^ labelAddress;
        System::Windows::Forms::TextBox^ textBoxAddress;
        System::Windows::Forms::Label^ labelPassword;
        System::Windows::Forms::TextBox^ textBoxPassword;
        System::Windows::Forms::Button^ buttonRegister;
        System::Windows::Forms::Button^ buttonCancel;
    private: System::ComponentModel::IContainer^ components;


        void InitializeComponent(void)
        {
            this->components = (gcnew System::ComponentModel::Container());
            this->labelName = (gcnew System::Windows::Forms::Label());
            this->textBoxName = (gcnew System::Windows::Forms::TextBox());
            this->labelEmail = (gcnew System::Windows::Forms::Label());
            this->textBoxEmail = (gcnew System::Windows::Forms::TextBox());
            this->labelPhone = (gcnew System::Windows::Forms::Label());
            this->textBoxPhone = (gcnew System::Windows::Forms::TextBox());
            this->labelAddress = (gcnew System::Windows::Forms::Label());
            this->textBoxAddress = (gcnew System::Windows::Forms::TextBox());
            this->labelPassword = (gcnew System::Windows::Forms::Label());
            this->textBoxPassword = (gcnew System::Windows::Forms::TextBox());
            this->buttonRegister = (gcnew System::Windows::Forms::Button());
            this->buttonCancel = (gcnew System::Windows::Forms::Button());
            this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
            this->Login = (gcnew System::Windows::Forms::LinkLabel());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->SuspendLayout();
            // 
            // labelName
            // 
            this->labelName->AutoSize = true;
            this->labelName->Location = System::Drawing::Point(45, 151);
            this->labelName->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->labelName->Name = L"labelName";
            this->labelName->Size = System::Drawing::Size(55, 20);
            this->labelName->TabIndex = 0;
            this->labelName->Text = L"Name:";
            // 
            // textBoxName
            // 
            this->textBoxName->Location = System::Drawing::Point(180, 148);
            this->textBoxName->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->textBoxName->Name = L"textBoxName";
            this->textBoxName->Size = System::Drawing::Size(298, 26);
            this->textBoxName->TabIndex = 1;
            // 
            // labelEmail
            // 
            this->labelEmail->AutoSize = true;
            this->labelEmail->Location = System::Drawing::Point(45, 203);
            this->labelEmail->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->labelEmail->Name = L"labelEmail";
            this->labelEmail->Size = System::Drawing::Size(52, 20);
            this->labelEmail->TabIndex = 2;
            this->labelEmail->Text = L"Email:";
            // 
            // textBoxEmail
            // 
            this->textBoxEmail->Location = System::Drawing::Point(180, 200);
            this->textBoxEmail->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->textBoxEmail->Name = L"textBoxEmail";
            this->textBoxEmail->Size = System::Drawing::Size(298, 26);
            this->textBoxEmail->TabIndex = 3;
            // 
            // labelPhone
            // 
            this->labelPhone->AutoSize = true;
            this->labelPhone->Location = System::Drawing::Point(45, 257);
            this->labelPhone->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->labelPhone->Name = L"labelPhone";
            this->labelPhone->Size = System::Drawing::Size(59, 20);
            this->labelPhone->TabIndex = 4;
            this->labelPhone->Text = L"Phone:";
            // 
            // textBoxPhone
            // 
            this->textBoxPhone->Location = System::Drawing::Point(180, 254);
            this->textBoxPhone->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->textBoxPhone->Name = L"textBoxPhone";
            this->textBoxPhone->Size = System::Drawing::Size(298, 26);
            this->textBoxPhone->TabIndex = 5;
            // 
            // labelAddress
            // 
            this->labelAddress->AutoSize = true;
            this->labelAddress->Location = System::Drawing::Point(45, 309);
            this->labelAddress->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->labelAddress->Name = L"labelAddress";
            this->labelAddress->Size = System::Drawing::Size(72, 20);
            this->labelAddress->TabIndex = 6;
            this->labelAddress->Text = L"Address:";
            // 
            // textBoxAddress
            // 
            this->textBoxAddress->Location = System::Drawing::Point(180, 306);
            this->textBoxAddress->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->textBoxAddress->Name = L"textBoxAddress";
            this->textBoxAddress->Size = System::Drawing::Size(298, 26);
            this->textBoxAddress->TabIndex = 7;
            // 
            // labelPassword
            // 
            this->labelPassword->AutoSize = true;
            this->labelPassword->Location = System::Drawing::Point(45, 362);
            this->labelPassword->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->labelPassword->Name = L"labelPassword";
            this->labelPassword->Size = System::Drawing::Size(82, 20);
            this->labelPassword->TabIndex = 8;
            this->labelPassword->Text = L"Password:";
            // 
            // textBoxPassword
            // 
            this->textBoxPassword->Location = System::Drawing::Point(180, 359);
            this->textBoxPassword->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->textBoxPassword->Name = L"textBoxPassword";
            this->textBoxPassword->Size = System::Drawing::Size(298, 26);
            this->textBoxPassword->TabIndex = 9;
            this->textBoxPassword->UseSystemPasswordChar = true;
            // 
            // buttonRegister
            // 
            this->buttonRegister->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->buttonRegister->Location = System::Drawing::Point(180, 416);
            this->buttonRegister->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->buttonRegister->Name = L"buttonRegister";
            this->buttonRegister->Size = System::Drawing::Size(112, 35);
            this->buttonRegister->TabIndex = 10;
            this->buttonRegister->Text = L"Register";
            this->buttonRegister->UseVisualStyleBackColor = false;
            this->buttonRegister->Click += gcnew System::EventHandler(this, &RegistrationForm::buttonRegister_Click);
            // 
            // buttonCancel
            // 
            this->buttonCancel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->buttonCancel->Location = System::Drawing::Point(366, 416);
            this->buttonCancel->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->buttonCancel->Name = L"buttonCancel";
            this->buttonCancel->Size = System::Drawing::Size(112, 35);
            this->buttonCancel->TabIndex = 11;
            this->buttonCancel->Text = L"Cancel";
            this->buttonCancel->UseVisualStyleBackColor = false;
            this->buttonCancel->Click += gcnew System::EventHandler(this, &RegistrationForm::buttonCancel_Click);
            // 
            // contextMenuStrip1
            // 
            this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
            this->contextMenuStrip1->Name = L"contextMenuStrip1";
            this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
            // 
            // Login
            // 
            this->Login->AutoSize = true;
            this->Login->Location = System::Drawing::Point(430, 470);
            this->Login->Name = L"Login";
            this->Login->Size = System::Drawing::Size(48, 20);
            this->Login->TabIndex = 14;
            this->Login->TabStop = true;
            this->Login->Text = L"Login";
            this->Login->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &RegistrationForm::Login_LinkClicked);
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->ForeColor = System::Drawing::Color::Maroon;
            this->label1->Location = System::Drawing::Point(235, 39);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(142, 37);
            this->label1->TabIndex = 15;
            this->label1->Text = L"Register";
            // 
            // RegistrationForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->ClientSize = System::Drawing::Size(606, 499);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->Login);
            this->Controls->Add(this->buttonCancel);
            this->Controls->Add(this->buttonRegister);
            this->Controls->Add(this->textBoxPassword);
            this->Controls->Add(this->labelPassword);
            this->Controls->Add(this->textBoxAddress);
            this->Controls->Add(this->labelAddress);
            this->Controls->Add(this->textBoxPhone);
            this->Controls->Add(this->labelPhone);
            this->Controls->Add(this->textBoxEmail);
            this->Controls->Add(this->labelEmail);
            this->Controls->Add(this->textBoxName);
            this->Controls->Add(this->labelName);
            this->ForeColor = System::Drawing::Color::Black;
            this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->Name = L"RegistrationForm";
            this->Text = L"Register";
            this->ResumeLayout(false);
            this->PerformLayout();

        }

    private:
        // Event handler for the Register button
        void buttonRegister_Click(System::Object^ sender, System::EventArgs^ e)
        {
            if (String::IsNullOrWhiteSpace(textBoxName->Text) ||
                String::IsNullOrWhiteSpace(textBoxEmail->Text) ||
                String::IsNullOrWhiteSpace(textBoxPhone->Text) ||
                String::IsNullOrWhiteSpace(textBoxAddress->Text) ||
                String::IsNullOrWhiteSpace(textBoxPassword->Text))
            {
                MessageBox::Show("All fields must be filled out", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
                return;
            }

            // Create a new user object
            user = gcnew User();
            user->name = textBoxName->Text;
            user->email = textBoxEmail->Text;
            user->phone = textBoxPhone->Text;
            user->address = textBoxAddress->Text;
            user->password = textBoxPassword->Text;

            try {
                String^ connString = "Data Source=MASHRAFI\\MYSQLSERVER;Initial Catalog=Mydatabase;Integrated Security=True;Encrypt=True;TrustServerCertificate=True";
                SqlConnection sqlConn(connString);
                sqlConn.Open();
                String^ sqlQuery = "INSERT INTO users (name, email, phone, address, password) VALUES (@name, @email, @phone, @address, @password);";
                SqlCommand command(sqlQuery, % sqlConn);
                command.Parameters->AddWithValue("@name", user->name);
                command.Parameters->AddWithValue("@email", user->email);
                command.Parameters->AddWithValue("@phone", user->phone);
                command.Parameters->AddWithValue("@address", user->address);
                command.Parameters->AddWithValue("@password", user->password);

                command.ExecuteNonQuery();
                this->Close();
            }
            catch (SqlException^ sqlEx) {
                MessageBox::Show("SQL Error: " + sqlEx->Message, "Register Failure", MessageBoxButtons::OK);
            }
            catch (Exception^ ex) {
                MessageBox::Show("An error occurred: " + ex->Message, "Register Failure", MessageBoxButtons::OK);
            }

            MessageBox::Show("Registration successful!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
            this->Close();
        }

        // Event handler for the Cancel button
        void buttonCancel_Click(System::Object^ sender, System::EventArgs^ e)
        {
            switchToLogin = true;
            this->Close();
        }

        // Example method for saving the user to the database (implementation needed)
        void SaveUserToDatabase(User^ user)
        {
            // Implement database saving logic here
            // Example: use SqlCommand and SqlConnection to insert data
        }
    private: System::Void Login_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
        this->switchToLogin = true;
        this->Close();
    }
};
}
