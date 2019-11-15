#pragma once
#include <windows.h>
#include <Servprov.h>
#include "Registro.h"
#include "Agenda.h"

namespace Proyecto2PrograAvanzada {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Resumen de Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ txtUsuario;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtPass;
	private: System::Windows::Forms::Button^ btnLogin;
	private: System::Windows::Forms::Label^ lblRegistrar;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtUsuario = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtPass = (gcnew System::Windows::Forms::TextBox());
			this->btnLogin = (gcnew System::Windows::Forms::Button());
			this->lblRegistrar = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(67, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(115, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ingrese su usuario:";
			// 
			// txtUsuario
			// 
			this->txtUsuario->Location = System::Drawing::Point(47, 82);
			this->txtUsuario->Name = L"txtUsuario";
			this->txtUsuario->Size = System::Drawing::Size(157, 20);
			this->txtUsuario->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((
				System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(58, 123);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(137, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Ingrese su contraseña:";
			// 
			// txtPass
			// 
			this->txtPass->Location = System::Drawing::Point(47, 159);
			this->txtPass->Name = L"txtPass";
			this->txtPass->PasswordChar = '*';
			this->txtPass->Size = System::Drawing::Size(157, 20);
			this->txtPass->TabIndex = 3;
			// 
			// btnLogin
			// 
			this->btnLogin->BackColor = System::Drawing::Color::Gainsboro;
			this->btnLogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLogin->Location = System::Drawing::Point(245, 80);
			this->btnLogin->Name = L"btnLogin";
			this->btnLogin->Size = System::Drawing::Size(114, 23);
			this->btnLogin->TabIndex = 4;
			this->btnLogin->Text = L"Login";
			this->btnLogin->UseVisualStyleBackColor = false;
			this->btnLogin->Click += gcnew System::EventHandler(this, &Login::btnLogin_Click);
			this->btnLogin->MouseEnter += gcnew System::EventHandler(this, &Login::btnLogin_MouseEnter);
			this->btnLogin->MouseLeave += gcnew System::EventHandler(this, &Login::btnLogin_MouseLeave);
			// 
			// lblRegistrar
			// 
			this->lblRegistrar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lblRegistrar->AutoSize = true;
			this->lblRegistrar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblRegistrar->ForeColor = System::Drawing::Color::MediumBlue;
			this->lblRegistrar->Location = System::Drawing::Point(270, 123);
			this->lblRegistrar->Name = L"lblRegistrar";
			this->lblRegistrar->Size = System::Drawing::Size(60, 13);
			this->lblRegistrar->TabIndex = 5;
			this->lblRegistrar->Text = L"Registrarse";
			this->lblRegistrar->Click += gcnew System::EventHandler(this, &Login::lblRegistrar_Click);
			this->lblRegistrar->MouseEnter += gcnew System::EventHandler(this, &Login::lblRegistrar_MouseEnter);
			this->lblRegistrar->MouseLeave += gcnew System::EventHandler(this, &Login::lblRegistrar_MouseLeave);
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(410, 248);
			this->Controls->Add(this->lblRegistrar);
			this->Controls->Add(this->btnLogin);
			this->Controls->Add(this->txtPass);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtUsuario);
			this->Controls->Add(this->label1);
			this->Name = L"Login";
			this->Text = L"Login";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void btnLogin_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	btnLogin->BackColor = BackColor.White;
}
private: System::Void btnLogin_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	btnLogin->BackColor = BackColor.Gainsboro;
}
private: System::Void lblRegistrar_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	lblRegistrar->ForeColor = ForeColor.RoyalBlue;
}
private: System::Void lblRegistrar_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	lblRegistrar->ForeColor = ForeColor.MediumBlue;
}
private: System::Void btnLogin_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Existe(txtUsuario->Text, txtPass->Text))
	{
		Agenda^ agenda = gcnew Agenda(txtUsuario->Text);
		agenda->Show();
		this->Hide();
	}
	else
	{
		System::Windows::Forms::MessageBox::Show("Ingrese un usuario y contraseña válidos");
	}
}
private: System::Boolean Existe(String^ usuario, String^ pass) {
	StreamReader^ streamReader = gcnew StreamReader("Users.csv");
	System::String^ contenido = streamReader->ReadToEnd();
	streamReader->Close();
	array<String^>^ usuarios = contenido->Split('\r');
	array<String^>^ usuarioypass;
	for (int i = 0; i < usuarios->Length; i++)
	{
		usuarioypass = usuarios[i]->Split(',');
		if (usuarioypass[0][0] == '\n')
		{
			usuarioypass[0] = usuarioypass[0]->Remove(0, 1);
		}
		if (usuario == usuarioypass[0])
		{
			if (pass == usuarioypass[1])
			{
				return true;
			}
		}
	}
	return false;

}
private: System::Void lblRegistrar_Click(System::Object^ sender, System::EventArgs^ e) {
		Registro^ registro = gcnew Registro();
		registro->Show();
}
};
}
