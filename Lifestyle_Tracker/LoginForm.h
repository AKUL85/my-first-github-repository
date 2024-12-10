#pragma once
#include "User.h"

namespace LifestyleTracker {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::Data::SqlClient;

    public ref class LoginForm : public System::Windows::Forms::Form
    {
    public:
        bool switchToRegister; // To indicate whether to switch to the Registration form
        User^ user; // Placeholder for user object

        LoginForm(void)
        {
            InitializeComponent();
            switchToRegister = false; // Default is not to switch
        }

    protected:
        ~LoginForm()
        {
            if (components)
            {
                delete components;
            }
        }
    private:
        System::Windows::Forms::Label^ labelUsername;
        System::Windows::Forms::TextBox^ usernameTextBox;
        System::Windows::Forms::Label^ labelPassword;
        System::Windows::Forms::TextBox^ passwordTextBox;
        System::Windows::Forms::Button^ loginButton;
        System::Windows::Forms::Button^ registerButton;

        System::ComponentModel::Container^ components;

        void InitializeComponent(void)
        {
            this->labelUsername = (gcnew System::Windows::Forms::Label());
            this->usernameTextBox = (gcnew System::Windows::Forms::TextBox());
            this->labelPassword = (gcnew System::Windows::Forms::Label());
            this->passwordTextBox = (gcnew System::Windows::Forms::TextBox());
            this->loginButton = (gcnew System::Windows::Forms::Button());
            this->registerButton = (gcnew System::Windows::Forms::Button());
            this->SuspendLayout();
            // 
            // labelUsername
            // 
            this->labelUsername->AutoSize = true;
            this->labelUsername->ForeColor = System::Drawing::Color::Black;
            this->labelUsername->Location = System::Drawing::Point(45, 46);
            this->labelUsername->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->labelUsername->Name = L"labelUsername";
            this->labelUsername->Size = System::Drawing::Size(83, 20);
            this->labelUsername->TabIndex = 0;
            this->labelUsername->Text = L"Username";
            // 
            // usernameTextBox
            // 
            this->usernameTextBox->Location = System::Drawing::Point(180, 46);
            this->usernameTextBox->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->usernameTextBox->Name = L"usernameTextBox";
            this->usernameTextBox->Size = System::Drawing::Size(223, 26);
            this->usernameTextBox->TabIndex = 1;
            // 
            // labelPassword
            // 
            this->labelPassword->AutoSize = true;
            this->labelPassword->Location = System::Drawing::Point(45, 108);
            this->labelPassword->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->labelPassword->Name = L"labelPassword";
            this->labelPassword->Size = System::Drawing::Size(78, 20);
            this->labelPassword->TabIndex = 2;
            this->labelPassword->Text = L"Password";
            // 
            // passwordTextBox
            // 
            this->passwordTextBox->Location = System::Drawing::Point(180, 108);
            this->passwordTextBox->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->passwordTextBox->Name = L"passwordTextBox";
            this->passwordTextBox->PasswordChar = '*';
            this->passwordTextBox->Size = System::Drawing::Size(223, 26);
            this->passwordTextBox->TabIndex = 3;
            // 
            // loginButton
            // 
            this->loginButton->Location = System::Drawing::Point(45, 185);
            this->loginButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->loginButton->Name = L"loginButton";
            this->loginButton->Size = System::Drawing::Size(150, 46);
            this->loginButton->TabIndex = 4;
            this->loginButton->Text = L"Login";
            this->loginButton->UseVisualStyleBackColor = true;
            this->loginButton->Click += gcnew System::EventHandler(this, &LoginForm::loginButton_Click);
            // 
            // registerButton
            // 
            this->registerButton->Location = System::Drawing::Point(255, 185);
            this->registerButton->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->registerButton->Name = L"registerButton";
            this->registerButton->Size = System::Drawing::Size(150, 46);
            this->registerButton->TabIndex = 5;
            this->registerButton->Text = L"Register";
            this->registerButton->UseVisualStyleBackColor = true;
            this->registerButton->Click += gcnew System::EventHandler(this, &LoginForm::registerButton_Click);
            // 
            // LoginForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::SystemColors::ActiveCaption;
            this->ClientSize = System::Drawing::Size(478, 283);
            this->Controls->Add(this->registerButton);
            this->Controls->Add(this->loginButton);
            this->Controls->Add(this->passwordTextBox);
            this->Controls->Add(this->labelPassword);
            this->Controls->Add(this->usernameTextBox);
            this->Controls->Add(this->labelUsername);
            this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->Name = L"LoginForm";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"Login";
            this->ResumeLayout(false);
            this->PerformLayout();

        }

    private:
        // Login button event handler
        System::Void loginButton_Click(System::Object^ sender, System::EventArgs^ e)
        {
            String^ email = this->usernameTextBox->Text; // Assuming username is used as email
            String^ password = this->passwordTextBox->Text;

            if (email->Length == 0 || password->Length == 0) {
                MessageBox::Show("Please enter both username and password", "Input Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
                return;
            }

            try {
                // SQL connection and authentication
                String^ connString = "Data Source=MASHRAFI\\MYSQLSERVER;Initial Catalog=Mydatabase;Integrated Security=True;Encrypt=True;TrustServerCertificate=True";
                SqlConnection^ sqlConn = gcnew SqlConnection(connString);
                sqlConn->Open();

                String^ sqlQuery = "SELECT * FROM users WHERE email=@Email AND password=@Password";
                SqlCommand^ command = gcnew SqlCommand(sqlQuery, sqlConn);
                command->Parameters->AddWithValue("@Email", email);
                command->Parameters->AddWithValue("@Password", password);

                SqlDataReader^ reader = command->ExecuteReader();

                if (reader->Read()) {
                    user = gcnew User();
                    user->id = reader->GetInt32(0);
                    user->name = reader->GetString(1);
                    user->email = reader->GetString(2);
                    user->phone = reader->GetString(3);
                    user->address = reader->GetString(4);
                    user->password = reader->GetString(5);
                    this->Close(); // Close the form if login is successful
                }
                else {
                    MessageBox::Show("Invalid username or password!", "Login Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);
                }

                sqlConn->Close();
            }
            catch (SqlException^ sqlEx) {
                MessageBox::Show("SQL Error: " + sqlEx->Message, "Database Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
            catch (Exception^ ex) {
                MessageBox::Show("Error: " + ex->Message, "Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }

        // Register button event handler
        System::Void registerButton_Click(System::Object^ sender, System::EventArgs^ e)
        {
            this->switchToRegister = true; // Set flag to switch to registration form
            this->Close(); // Close the form
        }
    };
}
