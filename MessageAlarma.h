#pragma once
#include <windows.h>
#include <Servprov.h>
#include "ListaEventos.h"
#include <msclr\marshal_cppstd.h>

namespace Proyecto2PrograAvanzada {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	extern ListaEventos* lEventos;

	/// <summary>
	/// Resumen de MessageAlarma
	/// </summary>
	public ref class MessageAlarma : public System::Windows::Forms::Form
	{
		NodoEvento* nodo = new NodoEvento();
	private: System::Windows::Forms::Label^ lblEvento;
		   bool alarma = false;
	public:
		MessageAlarma(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

		MessageAlarma(NodoEvento* Nodo, bool alarma)
		{
			nodo = Nodo;
			InitializeComponent();
			this->alarma = alarma;
			Cambiarlbl();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MessageAlarma()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnDescartar;
	protected:
	private: System::Windows::Forms::Button^ btnPostponer;
	private: System::Windows::Forms::ComboBox^ cbMinutos;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnDescartar = (gcnew System::Windows::Forms::Button());
			this->btnPostponer = (gcnew System::Windows::Forms::Button());
			this->cbMinutos = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lblEvento = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnDescartar
			// 
			this->btnDescartar->BackColor = System::Drawing::Color::Gainsboro;
			this->btnDescartar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDescartar->Location = System::Drawing::Point(22, 164);
			this->btnDescartar->Name = L"btnDescartar";
			this->btnDescartar->Size = System::Drawing::Size(147, 56);
			this->btnDescartar->TabIndex = 5;
			this->btnDescartar->Text = L"Descartar";
			this->btnDescartar->UseVisualStyleBackColor = false;
			this->btnDescartar->Click += gcnew System::EventHandler(this, &MessageAlarma::btnDescartar_Click);
			this->btnDescartar->MouseEnter += gcnew System::EventHandler(this, &MessageAlarma::btnDescartar_MouseEnter);
			this->btnDescartar->MouseLeave += gcnew System::EventHandler(this, &MessageAlarma::btnDescartar_MouseLeave);
			// 
			// btnPostponer
			// 
			this->btnPostponer->BackColor = System::Drawing::Color::Gainsboro;
			this->btnPostponer->Enabled = false;
			this->btnPostponer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPostponer->Location = System::Drawing::Point(274, 164);
			this->btnPostponer->Name = L"btnPostponer";
			this->btnPostponer->Size = System::Drawing::Size(147, 56);
			this->btnPostponer->TabIndex = 6;
			this->btnPostponer->Text = L"Postponer";
			this->btnPostponer->UseVisualStyleBackColor = false;
			this->btnPostponer->Click += gcnew System::EventHandler(this, &MessageAlarma::btnPostponer_Click);
			this->btnPostponer->MouseEnter += gcnew System::EventHandler(this, &MessageAlarma::btnPostponer_MouseEnter);
			this->btnPostponer->MouseLeave += gcnew System::EventHandler(this, &MessageAlarma::btnPostponer_MouseLeave);
			// 
			// cbMinutos
			// 
			this->cbMinutos->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbMinutos->FormattingEnabled = true;
			this->cbMinutos->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"5 minutos", L"10 minutos", L"15 minutos" });
			this->cbMinutos->Location = System::Drawing::Point(274, 127);
			this->cbMinutos->Name = L"cbMinutos";
			this->cbMinutos->Size = System::Drawing::Size(147, 21);
			this->cbMinutos->TabIndex = 7;
			this->cbMinutos->SelectedIndexChanged += gcnew System::EventHandler(this, &MessageAlarma::cbMinutos_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(215, 102);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(252, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Escoja la cantidad de minutos a postponer:";
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 13);
			this->label2->TabIndex = 8;
			this->label2->Text = L"EVENTO:";
			// 
			// lblEvento
			// 
			this->lblEvento->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lblEvento->AutoSize = true;
			this->lblEvento->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblEvento->Location = System::Drawing::Point(19, 34);
			this->lblEvento->Name = L"lblEvento";
			this->lblEvento->Size = System::Drawing::Size(10, 13);
			this->lblEvento->TabIndex = 9;
			this->lblEvento->Text = L"-";
			// 
			// MessageAlarma
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(479, 237);
			this->Controls->Add(this->lblEvento);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->cbMinutos);
			this->Controls->Add(this->btnPostponer);
			this->Controls->Add(this->btnDescartar);
			this->Name = L"MessageAlarma";
			this->Text = L"MessageAlarma";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnDescartar_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		btnDescartar->BackColor = BackColor.White;
	}
	private: System::Void btnDescartar_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		btnDescartar->BackColor = BackColor.Gainsboro;
	}
	private: System::Void btnPostponer_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		btnPostponer->BackColor = BackColor.White;
	}
	private: System::Void btnPostponer_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		btnPostponer->BackColor = BackColor.Gainsboro;
	}
	private: System::Void cbMinutos_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (cbMinutos->SelectedIndex != -1)
		{
			btnPostponer->Enabled = true;
		}
		else
		{
			btnPostponer->Enabled = false;
		}
	}
	private: System::Void btnPostponer_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ hora = "";
		array<String^>^ horaymin;
		int hora_min[2] = { 0,0 };
		msclr::interop::marshal_context context;
		std::string horafinal = "";
		if (alarma)
		{
			hora = context.marshal_as<String^>(nodo->alarma->startHour);
		}
		else
		{
			hora = context.marshal_as<String^>(nodo->recordatorio->startHour);
		}
		horaymin = hora->Split(':');
		for (int i = 0; i < horaymin->Length; i++)
		{
			hora_min[i] = System::Convert::ToInt16(horaymin[i]);
		}
		switch (cbMinutos->SelectedIndex)
		{
		case 0:
			if (hora_min[1] + 5 >= 60)
			{
				if (hora_min[0] + 1 >= 24)
				{
					hora_min[0] += 1 - 24;
				}
				hora_min[1] += 5 - 60;
			}
			else
			{
				hora_min[1] += 5;
			}
			break;
		case 1:
			if (hora_min[1] + 10 >= 60)
			{
				if (hora_min[0] + 1 >= 24)
				{
					hora_min[0] += 1 - 24;
				}
				hora_min[1] += 10 - 60;
			}
			else
			{
				hora_min[1] += 10;
			}
			break;
		case 2:
			if (hora_min[1] + 15 >= 60)
			{
				if (hora_min[0] + 1 >= 24)
				{
					hora_min[0] += 1 - 24;
				}
				hora_min[1] += 15 - 60;
			}
			else
			{
				hora_min[1] += 15;
			}
			break;
		}
		horafinal = context.marshal_as<std::string>(hora_min[0].ToString() + ":" + hora_min[1].ToString());
		CambiarHora(horafinal);
		this->Close();
	}
	private: System::Void CambiarHora(std::string hora) {
		if (alarma)
		{
			nodo->alarma->startHour = hora;
		}
		else
		{
			nodo->recordatorio->startHour = hora;
		}
	}
	private: System::Void btnDescartar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void Cambiarlbl() {
		msclr::interop::marshal_context context;
		String^ texto = "";
		if (nodo->actividad->pnum != -1)
		{
			texto = "Actividad: " + context.marshal_as<String^>(nodo->actividad->startHour) + context.marshal_as<String^>(nodo->actividad->endHour) + " - " +
				context.marshal_as<String^>(nodo->actividad->meetingPlace) + "\n" + context.marshal_as<String^>(nodo->actividad->neededMaterials) + " - " +
				context.marshal_as<String^>(nodo->actividad->description) +  " - " + context.marshal_as<String^>(nodo->actividad->identifier);
		}
		else if (nodo->recordatorio->pnum != -1)
		{
			texto = "Recordatorio: " + context.marshal_as<String^>(nodo->recordatorio->startHour) + " - " + context.marshal_as<String^>(nodo->recordatorio->description) + " - " +
				context.marshal_as<String^>(nodo->recordatorio->identifier);
		}
		else if (nodo->alarma->pnum != -1)
		{
			texto = "Alarma: " + context.marshal_as<String^>(nodo->alarma->startHour) + " - " + context.marshal_as<String^>(nodo->alarma->description) + " - " +
				context.marshal_as<String^>(nodo->alarma->identifier);
		}
		lblEvento->Text = texto;
	}
	};
}
