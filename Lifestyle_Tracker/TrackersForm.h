#pragma once
#include "HealthTrackerForm.h"
#include "MonetaryExpensesForm.h"

namespace LifestyleTracker {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class TrackersForm : public System::Windows::Forms::Form
    {
    public:
        TrackersForm(void)
        {
            InitializeComponent();
            this->CenterToScreen(); // Center the form on the screen
        }

    protected:
        ~TrackersForm()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        System::Windows::Forms::Button^ buttonHealthTracker;
        System::Windows::Forms::Button^ buttonMonetaryTracker;




        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(TrackersForm::typeid));
            this->buttonHealthTracker = (gcnew System::Windows::Forms::Button());
            this->buttonMonetaryTracker = (gcnew System::Windows::Forms::Button());
            this->SuspendLayout();
            // 
            // buttonHealthTracker
            // 
            this->buttonHealthTracker->BackColor = System::Drawing::Color::Lime;
            resources->ApplyResources(this->buttonHealthTracker, L"buttonHealthTracker");
            this->buttonHealthTracker->Name = L"buttonHealthTracker";
            this->buttonHealthTracker->UseVisualStyleBackColor = false;
            this->buttonHealthTracker->Click += gcnew System::EventHandler(this, &TrackersForm::buttonHealthTracker_Click);
            // 
            // buttonMonetaryTracker
            // 
            this->buttonMonetaryTracker->BackColor = System::Drawing::Color::Lime;
            resources->ApplyResources(this->buttonMonetaryTracker, L"buttonMonetaryTracker");
            this->buttonMonetaryTracker->Name = L"buttonMonetaryTracker";
            this->buttonMonetaryTracker->UseVisualStyleBackColor = false;
            this->buttonMonetaryTracker->Click += gcnew System::EventHandler(this, &TrackersForm::buttonMonetaryTracker_Click);
            // 
            // TrackersForm
            // 
            resources->ApplyResources(this, L"$this");
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->Controls->Add(this->buttonMonetaryTracker);
            this->Controls->Add(this->buttonHealthTracker);
            this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->Name = L"TrackersForm";
            this->ResumeLayout(false);

        }
#pragma endregion

    private:
        // Event handler for HealthTracker button click
        System::Void buttonHealthTracker_Click(System::Object^ sender, System::EventArgs^ e) {
            LifestyleTracker::HealthTrackerForm^ healthTrackerForm = gcnew LifestyleTracker::HealthTrackerForm();
            healthTrackerForm->ShowDialog(); // Open as dialog for better control flow
        }

        // Event handler for MonetaryTracker button click
        System::Void buttonMonetaryTracker_Click(System::Object^ sender, System::EventArgs^ e) {
            LifestyleTracker::MonetaryExpensesForm^ monetaryExpensesForm = gcnew LifestyleTracker::MonetaryExpensesForm();
            monetaryExpensesForm->ShowDialog(); // Open as dialog for better control flow
        }
    };
}
