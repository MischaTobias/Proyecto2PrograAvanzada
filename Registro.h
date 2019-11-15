#pragma
#include <fstream>
#include <string>
#include <stdlib.h>
#include "msclr\marshal_cppstd.h"

namespace Proyecto2PrograAvanzada {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Resumen de Registro
	/// </summary>
	public ref class Registro : public System::Windows::Forms::Form
	{
	public:
		Registro(void)
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
		~Registro()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtPass;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtUsuario;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtPass2;
	private: System::Windows::Forms::Button^ btnRegistrar;



	protected:

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
			this->txtPass = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtUsuario = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtPass2 = (gcnew System::Windows::Forms::TextBox());
			this->btnRegistrar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txtPass
			// 
			this->txtPass->Location = System::Drawing::Point(65, 108);
			this->txtPass->Name = L"txtPass";
			this->txtPass->PasswordChar = '*';
			this->txtPass->Size = System::Drawing::Size(157, 20);
			this->txtPass->TabIndex = 7;
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(76, 84);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(137, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Ingrese su contraseña:";
			// 
			// txtUsuario
			// 
			this->txtUsuario->Location = System::Drawing::Point(65, 55);
			this->txtUsuario->Name = L"txtUsuario";
			this->txtUsuario->Size = System::Drawing::Size(157, 20);
			this->txtUsuario->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(85, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(115, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Ingrese su usuario:";
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(77, 140);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(132, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Repita su contraseña:";
			// 
			// txtPass2
			// 
			this->txtPass2->Location = System::Drawing::Point(65, 158);
			this->txtPass2->Name = L"txtPass2";
			this->txtPass2->PasswordChar = '*';
			this->txtPass2->Size = System::Drawing::Size(157, 20);
			this->txtPass2->TabIndex = 9;
			// 
			// btnRegistrar
			// 
			this->btnRegistrar->BackColor = System::Drawing::Color::Gainsboro;
			this->btnRegistrar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRegistrar->Location = System::Drawing::Point(84, 200);
			this->btnRegistrar->Name = L"btnRegistrar";
			this->btnRegistrar->Size = System::Drawing::Size(114, 23);
			this->btnRegistrar->TabIndex = 10;
			this->btnRegistrar->Text = L"Registrar";
			this->btnRegistrar->UseVisualStyleBackColor = false;
			this->btnRegistrar->Click += gcnew System::EventHandler(this, &Registro::btnRegistrar_Click);
			this->btnRegistrar->MouseEnter += gcnew System::EventHandler(this, &Registro::btnRegistrar_MouseEnter);
			this->btnRegistrar->MouseLeave += gcnew System::EventHandler(this, &Registro::btnRegistrar_MouseLeave);
			// 
			// Registro
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->btnRegistrar);
			this->Controls->Add(this->txtPass2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtPass);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtUsuario);
			this->Controls->Add(this->label1);
			this->Name = L"Registro";
			this->Text = L"Registro";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnRegistrar_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		btnRegistrar->BackColor = BackColor.White;
	}
	private: System::Void btnRegistrar_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		btnRegistrar->BackColor = BackColor.Gainsboro;
	}
	private: System::Void btnRegistrar_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Valido(txtUsuario->Text, txtPass->Text, txtPass2->Text))
		{
			StreamReader^ streamReader = gcnew StreamReader("Users.csv");
			System::String^ contenido = streamReader->ReadToEnd();
			streamReader->Close();
			if (contenido == "")
			{
				contenido += txtUsuario->Text + "," + txtPass->Text;
			}
			else
			{
				contenido += "\r\n" + txtUsuario->Text + "," + txtPass->Text;
			}
			StreamWriter^ streamWriter = gcnew StreamWriter("Users.csv");
			streamWriter->Write(contenido);
			streamWriter->Close();
			msclr::interop::marshal_context context;
			std::string user = context.marshal_as<std::string>(txtUsuario->Text);
			user += ".txt";
			String^ ruta = txtUsuario->Text + ".csv";
			FileStream^ fs = File::Create(ruta);
			System::Windows::Forms::MessageBox::Show("Su usuario y contraseña se han guardado con éxito");
			this->Close();
		}
	}
	private: System::Boolean Valido(String^ usuario, String^ pass, String^ pass2) {
		StreamReader^ streamReader = gcnew StreamReader("Users.csv");
		String^ contenido = streamReader->ReadToEnd();
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
				System::Windows::Forms::MessageBox::Show("El usuario ya se encuentra registrado");
				return false;
			}
		}
		if (pass != pass2)
		{
			System::Windows::Forms::MessageBox::Show("Las contraseñas son diferentes");
			return false;
		}
		else if (usuario == "" || pass == "")
		{
			System::Windows::Forms::MessageBox::Show("Ingrese datos válidos");
			return false;
		}
		else
		{
			return true;
		}
	}
};
}
