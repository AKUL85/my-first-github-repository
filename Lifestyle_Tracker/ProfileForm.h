#pragma once
#include "TrackersForm.h"
#include "LoginForm.h"
#include "User.h" 


namespace LifestyleTracker {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::Data::SqlClient;

    public ref class ProfileForm : public System::Windows::Forms::Form
    {
    public:
        User^ currentUser; 

        ProfileForm(User^ user)
        {
            InitializeComponent();
            currentUser = user;
            LoadUserData(); 
        }

    protected:
        ~ProfileForm()
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
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::Label^ Id;











           System::ComponentModel::Container^ components;

        void InitializeComponent(void)
        {
            this->labelName = (gcnew System::Windows::Forms::Label());
            this->textBoxName = (gcnew System::Windows::Forms::TextBox());
            this->labelEmail = (gcnew System::Windows::Forms::Label());
            this->textBoxEmail = (gcnew System::Windows::Forms::TextBox());
            this->labelPhone = (gcnew System::Windows::Forms::Label());
            this->textBoxPhone = (gcnew System::Windows::Forms::TextBox());
            this->labelAddress = (gcnew System::Windows::Forms::Label());
            this->textBoxAddress = (gcnew System::Windows::Forms::TextBox());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->Id = (gcnew System::Windows::Forms::Label());
            this->SuspendLayout();
            // 
            // labelName
            // 
            this->labelName->AutoSize = true;
            this->labelName->Location = System::Drawing::Point(45, 131);
            this->labelName->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->labelName->Name = L"labelName";
            this->labelName->Size = System::Drawing::Size(55, 20);
            this->labelName->TabIndex = 0;
            this->labelName->Text = L"Name:";
            // 
            // textBoxName
            // 
            this->textBoxName->Location = System::Drawing::Point(180, 128);
            this->textBoxName->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->textBoxName->Name = L"textBoxName";
            this->textBoxName->ReadOnly = true;
            this->textBoxName->Size = System::Drawing::Size(298, 26);
            this->textBoxName->TabIndex = 1;
            // 
            // labelEmail
            // 
            this->labelEmail->AutoSize = true;
            this->labelEmail->Location = System::Drawing::Point(45, 181);
            this->labelEmail->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->labelEmail->Name = L"labelEmail";
            this->labelEmail->Size = System::Drawing::Size(52, 20);
            this->labelEmail->TabIndex = 2;
            this->labelEmail->Text = L"Email:";
            // 
            // textBoxEmail
            // 
            this->textBoxEmail->Location = System::Drawing::Point(180, 178);
            this->textBoxEmail->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->textBoxEmail->Name = L"textBoxEmail";
            this->textBoxEmail->ReadOnly = true;
            this->textBoxEmail->Size = System::Drawing::Size(298, 26);
            this->textBoxEmail->TabIndex = 3;
            // 
            // labelPhone
            // 
            this->labelPhone->AutoSize = true;
            this->labelPhone->Location = System::Drawing::Point(45, 233);
            this->labelPhone->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->labelPhone->Name = L"labelPhone";
            this->labelPhone->Size = System::Drawing::Size(59, 20);
            this->labelPhone->TabIndex = 4;
            this->labelPhone->Text = L"Phone:";
            // 
            // textBoxPhone
            // 
            this->textBoxPhone->Location = System::Drawing::Point(180, 230);
            this->textBoxPhone->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->textBoxPhone->Name = L"textBoxPhone";
            this->textBoxPhone->ReadOnly = true;
            this->textBoxPhone->Size = System::Drawing::Size(298, 26);
            this->textBoxPhone->TabIndex = 5;
            // 
            // labelAddress
            // 
            this->labelAddress->AutoSize = true;
            this->labelAddress->Location = System::Drawing::Point(45, 282);
            this->labelAddress->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->labelAddress->Name = L"labelAddress";
            this->labelAddress->Size = System::Drawing::Size(72, 20);
            this->labelAddress->TabIndex = 6;
            this->labelAddress->Text = L"Address:";
            // 
            // textBoxAddress
            // 
            this->textBoxAddress->Location = System::Drawing::Point(180, 279);
            this->textBoxAddress->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->textBoxAddress->Name = L"textBoxAddress";
            this->textBoxAddress->ReadOnly = true;
            this->textBoxAddress->Size = System::Drawing::Size(298, 26);
            this->textBoxAddress->TabIndex = 7;
            // 
            // button1
            // 
            this->button1->BackColor = System::Drawing::Color::Silver;
            this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button1->ForeColor = System::Drawing::Color::Lime;
            this->button1->Location = System::Drawing::Point(216, 345);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(227, 46);
            this->button1->TabIndex = 8;
            this->button1->Text = L"Explore Trackers";
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &ProfileForm::button1_Click);
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(255, 37);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(126, 40);
            this->label1->TabIndex = 9;
            this->label1->Text = L"Profile";
            // 
            // button2
            // 
            this->button2->BackColor = System::Drawing::Color::Transparent;
            this->button2->Location = System::Drawing::Point(516, 12);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(75, 29);
            this->button2->TabIndex = 10;
            this->button2->Text = L"Logout";
            this->button2->UseVisualStyleBackColor = false;
            this->button2->Click += gcnew System::EventHandler(this, &ProfileForm::button2_Click);
            // 
            // Id
            // 
            this->Id->AutoSize = true;
            this->Id->Location = System::Drawing::Point(45, 21);
            this->Id->Name = L"Id";
            this->Id->Size = System::Drawing::Size(26, 20);
            this->Id->TabIndex = 11;
            this->Id->Text = L"ID";
            this->Id->Click += gcnew System::EventHandler(this, &ProfileForm::Id_Click);
            // 
            // ProfileForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->ClientSize = System::Drawing::Size(614, 414);
            this->Controls->Add(this->Id);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->textBoxAddress);
            this->Controls->Add(this->labelAddress);
            this->Controls->Add(this->textBoxPhone);
            this->Controls->Add(this->labelPhone);
            this->Controls->Add(this->textBoxEmail);
            this->Controls->Add(this->labelEmail);
            this->Controls->Add(this->textBoxName);
            this->Controls->Add(this->labelName);
            this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
            this->Name = L"ProfileForm";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"User Profile";
            this->ResumeLayout(false);
            this->PerformLayout();

        }

    private:
        // Function to load user data into the form
        void LoadUserData()
        {
            if (currentUser != nullptr)
            {
                this->Id-> Text = "User ID  :" + currentUser->id.ToString();
                this->textBoxName->Text = currentUser->name;
                this->textBoxEmail->Text = currentUser->email;
                this->textBoxPhone->Text = currentUser->phone;
                this->textBoxAddress->Text = currentUser->address;
            }
            else
            {
                MessageBox::Show("No user data available!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }
       
    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
        LifestyleTracker::TrackersForm^ trackers = gcnew LifestyleTracker::TrackersForm();
        trackers -> ShowDialog();
    }
    
    private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
        LifestyleTracker::LoginForm^ login = gcnew LifestyleTracker::LoginForm();
        this->Hide();
        login->ShowDialog(); 
        this->Close(); 
    }
private: System::Void Id_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
    

}
