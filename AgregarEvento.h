#pragma once
#include <windows.h>
#include <Servprov.h>
#include "NodoEvento.h"
#include "Actividad.h"
#include "Recordatorio.h"
#include "Alarma.h"

namespace Proyecto2PrograAvanzada {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de AgregarEvento
	/// </summary>
	public ref class AgregarEvento : public System::Windows::Forms::Form
	{

	public:
		delegate void EventoAgregadoHandler(Object^ sender, NodoEvento* nodo);
		event EventoAgregadoHandler^ EventoAgregado;
	public:
		AgregarEvento(void)
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
		~AgregarEvento()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ cbEvents;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtstartHour;
	private: System::Windows::Forms::TextBox^ txtstartHourWatermark;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::RichTextBox^ rtbDescription;
	private: System::Windows::Forms::RichTextBox^ rtbDescriptionWatermark;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtIdentifier;
	private: System::Windows::Forms::TextBox^ txtIdentifierWatermark;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ComboBox^ cbPriority;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtendHour;
	private: System::Windows::Forms::TextBox^ txtendHourWatermark;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txtmeetingPlace;
	private: System::Windows::Forms::TextBox^ txtmeetingPlaceWatermark;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txtInvolvedPeople;
	private: System::Windows::Forms::TextBox^ txtInvolvedPeopleWatermark;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::RichTextBox^ rtbMaterials;
	private: System::Windows::Forms::RichTextBox^ rtbMaterialsWatermark;
	private: System::Windows::Forms::Button^ btnAgregarEvento;



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
			this->cbEvents = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtstartHour = (gcnew System::Windows::Forms::TextBox());
			this->txtstartHourWatermark = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->rtbDescription = (gcnew System::Windows::Forms::RichTextBox());
			this->rtbDescriptionWatermark = (gcnew System::Windows::Forms::RichTextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtIdentifier = (gcnew System::Windows::Forms::TextBox());
			this->txtIdentifierWatermark = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->cbPriority = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtendHour = (gcnew System::Windows::Forms::TextBox());
			this->txtendHourWatermark = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtmeetingPlace = (gcnew System::Windows::Forms::TextBox());
			this->txtmeetingPlaceWatermark = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtInvolvedPeople = (gcnew System::Windows::Forms::TextBox());
			this->txtInvolvedPeopleWatermark = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->rtbMaterials = (gcnew System::Windows::Forms::RichTextBox());
			this->rtbMaterialsWatermark = (gcnew System::Windows::Forms::RichTextBox());
			this->btnAgregarEvento = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// cbEvents
			// 
			this->cbEvents->Cursor = System::Windows::Forms::Cursors::Default;
			this->cbEvents->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbEvents->FormattingEnabled = true;
			this->cbEvents->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Actividad", L"Recordatorio", L"Alarma" });
			this->cbEvents->Location = System::Drawing::Point(312, 16);
			this->cbEvents->Name = L"cbEvents";
			this->cbEvents->Size = System::Drawing::Size(143, 21);
			this->cbEvents->TabIndex = 0;
			this->cbEvents->SelectedIndexChanged += gcnew System::EventHandler(this, &AgregarEvento::cbEvents_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(294, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Selecciona el tipo de evento que quieres registrar:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(11, 66);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(73, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Hora Inicio:";
			// 
			// txtstartHour
			// 
			this->txtstartHour->Location = System::Drawing::Point(14, 82);
			this->txtstartHour->Name = L"txtstartHour";
			this->txtstartHour->Size = System::Drawing::Size(177, 20);
			this->txtstartHour->TabIndex = 3;
			this->txtstartHour->TextChanged += gcnew System::EventHandler(this, &AgregarEvento::txtstartHour_TextChanged);
			// 
			// txtstartHourWatermark
			// 
			this->txtstartHourWatermark->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->txtstartHourWatermark->Location = System::Drawing::Point(12, 82);
			this->txtstartHourWatermark->Name = L"txtstartHourWatermark";
			this->txtstartHourWatermark->Size = System::Drawing::Size(177, 20);
			this->txtstartHourWatermark->TabIndex = 4;
			this->txtstartHourWatermark->Text = L"Hora:Minutos";
			this->txtstartHourWatermark->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &AgregarEvento::txtstartHourWatermark_MouseClick);
			this->txtstartHourWatermark->TextChanged += gcnew System::EventHandler(this, &AgregarEvento::txtstartHourWatermark_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(11, 113);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(142, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Descripción del evento:";
			// 
			// rtbDescription
			// 
			this->rtbDescription->Location = System::Drawing::Point(14, 129);
			this->rtbDescription->Name = L"rtbDescription";
			this->rtbDescription->Size = System::Drawing::Size(177, 84);
			this->rtbDescription->TabIndex = 6;
			this->rtbDescription->Text = L"";
			this->rtbDescription->TextChanged += gcnew System::EventHandler(this, &AgregarEvento::rtbDescription_TextChanged);
			// 
			// rtbDescriptionWatermark
			// 
			this->rtbDescriptionWatermark->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->rtbDescriptionWatermark->Location = System::Drawing::Point(14, 129);
			this->rtbDescriptionWatermark->Name = L"rtbDescriptionWatermark";
			this->rtbDescriptionWatermark->Size = System::Drawing::Size(177, 84);
			this->rtbDescriptionWatermark->TabIndex = 7;
			this->rtbDescriptionWatermark->Text = L"Ingrese la descripción aquí";
			this->rtbDescriptionWatermark->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &AgregarEvento::rtbDescriptionWatermark_MouseClick);
			this->rtbDescriptionWatermark->TextChanged += gcnew System::EventHandler(this, &AgregarEvento::rtbDescriptionWatermark_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(11, 228);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(24, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"ID:";
			// 
			// txtIdentifier
			// 
			this->txtIdentifier->Location = System::Drawing::Point(14, 244);
			this->txtIdentifier->Name = L"txtIdentifier";
			this->txtIdentifier->Size = System::Drawing::Size(177, 20);
			this->txtIdentifier->TabIndex = 9;
			this->txtIdentifier->TextChanged += gcnew System::EventHandler(this, &AgregarEvento::txtIdentifier_TextChanged);
			// 
			// txtIdentifierWatermark
			// 
			this->txtIdentifierWatermark->BackColor = System::Drawing::SystemColors::Window;
			this->txtIdentifierWatermark->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->txtIdentifierWatermark->Location = System::Drawing::Point(14, 244);
			this->txtIdentifierWatermark->Name = L"txtIdentifierWatermark";
			this->txtIdentifierWatermark->Size = System::Drawing::Size(177, 20);
			this->txtIdentifierWatermark->TabIndex = 10;
			this->txtIdentifierWatermark->Text = L"Ingrese el identificador aquí";
			this->txtIdentifierWatermark->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &AgregarEvento::txtIdentifierWatermark_MouseClick);
			this->txtIdentifierWatermark->TextChanged += gcnew System::EventHandler(this, &AgregarEvento::txtIdentifierWatermark_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(11, 280);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(61, 13);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Prioridad:";
			// 
			// cbPriority
			// 
			this->cbPriority->Cursor = System::Windows::Forms::Cursors::Default;
			this->cbPriority->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbPriority->FormattingEnabled = true;
			this->cbPriority->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Muy alta", L"Alta", L"Media", L"Baja" });
			this->cbPriority->Location = System::Drawing::Point(14, 296);
			this->cbPriority->Name = L"cbPriority";
			this->cbPriority->Size = System::Drawing::Size(177, 21);
			this->cbPriority->TabIndex = 12;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(256, 66);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(59, 13);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Hora Fin:";
			// 
			// txtendHour
			// 
			this->txtendHour->Enabled = false;
			this->txtendHour->Location = System::Drawing::Point(259, 82);
			this->txtendHour->Name = L"txtendHour";
			this->txtendHour->Size = System::Drawing::Size(177, 20);
			this->txtendHour->TabIndex = 14;
			this->txtendHour->TextChanged += gcnew System::EventHandler(this, &AgregarEvento::txtendHour_TextChanged);
			// 
			// txtendHourWatermark
			// 
			this->txtendHourWatermark->Enabled = false;
			this->txtendHourWatermark->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->txtendHourWatermark->Location = System::Drawing::Point(259, 82);
			this->txtendHourWatermark->Name = L"txtendHourWatermark";
			this->txtendHourWatermark->Size = System::Drawing::Size(177, 20);
			this->txtendHourWatermark->TabIndex = 15;
			this->txtendHourWatermark->Text = L"Hora:Minutos";
			this->txtendHourWatermark->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &AgregarEvento::txtendHourWatermark_MouseClick);
			this->txtendHourWatermark->TextChanged += gcnew System::EventHandler(this, &AgregarEvento::txtendHourWatermark_TextChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(256, 113);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(121, 13);
			this->label7->TabIndex = 16;
			this->label7->Text = L"Lugar de la reunión:";
			// 
			// txtmeetingPlace
			// 
			this->txtmeetingPlace->Enabled = false;
			this->txtmeetingPlace->Location = System::Drawing::Point(259, 132);
			this->txtmeetingPlace->Name = L"txtmeetingPlace";
			this->txtmeetingPlace->Size = System::Drawing::Size(177, 20);
			this->txtmeetingPlace->TabIndex = 17;
			this->txtmeetingPlace->TextChanged += gcnew System::EventHandler(this, &AgregarEvento::txtmeetingPlace_TextChanged);
			// 
			// txtmeetingPlaceWatermark
			// 
			this->txtmeetingPlaceWatermark->Enabled = false;
			this->txtmeetingPlaceWatermark->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->txtmeetingPlaceWatermark->Location = System::Drawing::Point(259, 132);
			this->txtmeetingPlaceWatermark->Name = L"txtmeetingPlaceWatermark";
			this->txtmeetingPlaceWatermark->Size = System::Drawing::Size(177, 20);
			this->txtmeetingPlaceWatermark->TabIndex = 18;
			this->txtmeetingPlaceWatermark->Text = L"Ingrese el lugar aquí";
			this->txtmeetingPlaceWatermark->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &AgregarEvento::txtmeetingPlaceWatermark_MouseClick);
			this->txtmeetingPlaceWatermark->TextChanged += gcnew System::EventHandler(this, &AgregarEvento::txtmeetingPlaceWatermark_TextChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(256, 166);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(139, 13);
			this->label8->TabIndex = 19;
			this->label8->Text = L"Personas involucradas:";
			// 
			// txtInvolvedPeople
			// 
			this->txtInvolvedPeople->Enabled = false;
			this->txtInvolvedPeople->Location = System::Drawing::Point(259, 182);
			this->txtInvolvedPeople->Name = L"txtInvolvedPeople";
			this->txtInvolvedPeople->Size = System::Drawing::Size(177, 20);
			this->txtInvolvedPeople->TabIndex = 20;
			this->txtInvolvedPeople->TextChanged += gcnew System::EventHandler(this, &AgregarEvento::txtInvolvedPeople_TextChanged);
			// 
			// txtInvolvedPeopleWatermark
			// 
			this->txtInvolvedPeopleWatermark->Enabled = false;
			this->txtInvolvedPeopleWatermark->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->txtInvolvedPeopleWatermark->Location = System::Drawing::Point(259, 182);
			this->txtInvolvedPeopleWatermark->Name = L"txtInvolvedPeopleWatermark";
			this->txtInvolvedPeopleWatermark->Size = System::Drawing::Size(177, 20);
			this->txtInvolvedPeopleWatermark->TabIndex = 21;
			this->txtInvolvedPeopleWatermark->Text = L"<persona1>,<persona2>...";
			this->txtInvolvedPeopleWatermark->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &AgregarEvento::txtInvolvedPeopleWatermark_MouseClick);
			this->txtInvolvedPeopleWatermark->TextChanged += gcnew System::EventHandler(this, &AgregarEvento::txtInvolvedPeopleWatermark_TextChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(256, 218);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(136, 13);
			this->label9->TabIndex = 22;
			this->label9->Text = L"Materiales a necesitar:";
			// 
			// rtbMaterials
			// 
			this->rtbMaterials->Enabled = false;
			this->rtbMaterials->Location = System::Drawing::Point(259, 233);
			this->rtbMaterials->Name = L"rtbMaterials";
			this->rtbMaterials->Size = System::Drawing::Size(177, 84);
			this->rtbMaterials->TabIndex = 23;
			this->rtbMaterials->Text = L"";
			this->rtbMaterials->TextChanged += gcnew System::EventHandler(this, &AgregarEvento::rtbMaterials_TextChanged);
			// 
			// rtbMaterialsWatermark
			// 
			this->rtbMaterialsWatermark->Enabled = false;
			this->rtbMaterialsWatermark->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->rtbMaterialsWatermark->Location = System::Drawing::Point(259, 233);
			this->rtbMaterialsWatermark->Name = L"rtbMaterialsWatermark";
			this->rtbMaterialsWatermark->Size = System::Drawing::Size(177, 84);
			this->rtbMaterialsWatermark->TabIndex = 24;
			this->rtbMaterialsWatermark->Text = L"Ingrese los materiales aquí";
			this->rtbMaterialsWatermark->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &AgregarEvento::rtbMaterialsWatermark_MouseClick);
			this->rtbMaterialsWatermark->TextChanged += gcnew System::EventHandler(this, &AgregarEvento::rtbMaterialsWatermark_TextChanged);
			// 
			// btnAgregarEvento
			// 
			this->btnAgregarEvento->BackColor = System::Drawing::Color::Gainsboro;
			this->btnAgregarEvento->Location = System::Drawing::Point(12, 343);
			this->btnAgregarEvento->Name = L"btnAgregarEvento";
			this->btnAgregarEvento->Size = System::Drawing::Size(177, 35);
			this->btnAgregarEvento->TabIndex = 25;
			this->btnAgregarEvento->Text = L"Agregar Evento";
			this->btnAgregarEvento->UseVisualStyleBackColor = false;
			this->btnAgregarEvento->Click += gcnew System::EventHandler(this, &AgregarEvento::btnAgregarEvento_Click);
			this->btnAgregarEvento->MouseEnter += gcnew System::EventHandler(this, &AgregarEvento::btnAgregarEvento_MouseEnter);
			this->btnAgregarEvento->MouseLeave += gcnew System::EventHandler(this, &AgregarEvento::btnAgregarEvento_MouseLeave);
			// 
			// AgregarEvento
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(469, 401);
			this->Controls->Add(this->btnAgregarEvento);
			this->Controls->Add(this->rtbMaterialsWatermark);
			this->Controls->Add(this->rtbMaterials);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->txtInvolvedPeopleWatermark);
			this->Controls->Add(this->txtInvolvedPeople);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->txtmeetingPlaceWatermark);
			this->Controls->Add(this->txtmeetingPlace);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txtendHourWatermark);
			this->Controls->Add(this->txtendHour);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->cbPriority);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txtIdentifierWatermark);
			this->Controls->Add(this->txtIdentifier);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->rtbDescriptionWatermark);
			this->Controls->Add(this->rtbDescription);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtstartHourWatermark);
			this->Controls->Add(this->txtstartHour);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->cbEvents);
			this->Name = L"AgregarEvento";
			this->Text = L"AgregarEvento";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//Procedimientos que hacen cambiar textbox normales por textbox con watermark (funcionamiento visual)
private: System::Void txtstartHourWatermark_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	txtstartHour->Text = txtstartHourWatermark->Text->Substring(0,1);
	txtstartHourWatermark->Visible = false;
	txtstartHour->Focus();
	txtstartHour->Select(1, 0);
}
private: System::Void txtstartHour_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ watermark = "Hora:Minutos";
	if (txtstartHour->Text == "")
	{
		txtstartHourWatermark->Text = watermark;
		txtstartHourWatermark->Visible = true;
		txtstartHourWatermark->Focus();
		txtstartHourWatermark->Select(0, 0);
	}
}
private: System::Void txtstartHourWatermark_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	txtstartHourWatermark->Select(0, 0);
}
private: System::Void rtbDescriptionWatermark_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	rtbDescription->Text = rtbDescriptionWatermark->Text->Substring(0, 1);
	rtbDescriptionWatermark->Visible = false;
	rtbDescription->Focus();
	rtbDescription->Select(1, 0);
}
private: System::Void rtbDescription_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ watermark = "Ingrese la descripción aquí";
	if (rtbDescription->Text == "")
	{
		rtbDescriptionWatermark->Text = watermark;
		rtbDescriptionWatermark->Visible = true;
		rtbDescriptionWatermark->Focus();
		rtbDescriptionWatermark->Select(0, 0);
	}
}
private: System::Void rtbDescriptionWatermark_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	rtbDescriptionWatermark->Select(0, 0);
}
private: System::Void txtIdentifier_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ watermark = "Ingrese el identificador aquí";
	if (txtIdentifier->Text == "")
	{
		txtIdentifierWatermark->Text = watermark;
		txtIdentifierWatermark->Visible = true;
		txtIdentifierWatermark->Focus();
		txtIdentifierWatermark->Select(0, 0);
	}
}
private: System::Void txtIdentifierWatermark_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	txtIdentifier->Text = txtIdentifierWatermark->Text->Substring(0, 1);
	txtIdentifierWatermark->Visible = false;
	txtIdentifier->Focus();
	txtIdentifier->Select(1, 0);
}
private: System::Void txtIdentifierWatermark_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	txtIdentifierWatermark->Select(0, 0);
}
private: System::Void txtendHourWatermark_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	txtendHour->Text = txtendHourWatermark->Text->Substring(0, 1);
	txtendHourWatermark->Visible = false;
	txtendHour->Focus();
	txtendHour->Select(1, 0);
}
private: System::Void txtendHourWatermark_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	txtendHourWatermark->Select(0, 0);
}
private: System::Void txtendHour_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ watermark = "Hora:Minutos";
	if (txtendHour->Text == "")
	{
		txtendHourWatermark->Text = watermark;
		txtendHourWatermark->Visible = true;
		txtendHourWatermark->Focus();
		txtendHourWatermark->Select(0, 0);
	}
}
private: System::Void txtmeetingPlaceWatermark_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	txtmeetingPlace->Text = txtmeetingPlaceWatermark->Text->Substring(0, 1);
	txtmeetingPlaceWatermark->Visible = false;
	txtmeetingPlace->Focus();
	txtmeetingPlace->Select(1, 0);
}
private: System::Void txtmeetingPlaceWatermark_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	txtmeetingPlaceWatermark->Select(0, 0);
}
private: System::Void txtmeetingPlace_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ watermark = "Ingrese el lugar aquí";
	if (txtmeetingPlace->Text == "")
	{
		txtmeetingPlaceWatermark->Text = watermark;
		txtmeetingPlaceWatermark->Visible = true;
		txtmeetingPlaceWatermark->Focus();
		txtmeetingPlaceWatermark->Select(0, 0);
	}
}
private: System::Void txtInvolvedPeople_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ watermark = "<persona1>,<persona2>...";
	if (txtInvolvedPeople->Text == "")
	{
		txtInvolvedPeopleWatermark->Text = watermark;
		txtInvolvedPeopleWatermark->Visible = true;
		txtInvolvedPeopleWatermark->Focus();
		txtInvolvedPeopleWatermark->Select(0, 0);
	}
}
private: System::Void txtInvolvedPeopleWatermark_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	txtInvolvedPeople->Text = txtInvolvedPeopleWatermark->Text->Substring(0, 1);
	txtInvolvedPeopleWatermark->Visible = false;
	txtInvolvedPeople->Focus();
	txtInvolvedPeople->Select(1, 0);
}
private: System::Void txtInvolvedPeopleWatermark_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	txtInvolvedPeopleWatermark->Select(0, 0);
}
private: System::Void rtbMaterialsWatermark_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	rtbMaterials->Text = rtbMaterialsWatermark->Text->Substring(0, 1);
	rtbMaterialsWatermark->Visible = false;
	rtbMaterials->Focus();
	rtbMaterials->Select(1, 0);
}
private: System::Void rtbMaterialsWatermark_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	rtbMaterialsWatermark->Select(0, 0);
}
private: System::Void rtbMaterials_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ watermark = "Ingrese los materiales aquí";
	if (rtbMaterials->Text == "")
	{
		rtbMaterialsWatermark->Text = watermark;
		rtbMaterialsWatermark->Visible = true;
		rtbMaterialsWatermark->Focus();
		rtbMaterialsWatermark->Select(0, 0);
	}
}
private: System::Void cbEvents_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (cbEvents->SelectedIndex == 0)
	{
		txtendHour->Enabled = true;
		txtmeetingPlace->Enabled = true;
		txtInvolvedPeople->Enabled = true;
		rtbMaterials->Enabled = true;
		txtendHourWatermark->Enabled = true;
		txtmeetingPlaceWatermark->Enabled = true;
		txtInvolvedPeopleWatermark->Enabled = true;
		rtbMaterialsWatermark->Enabled = true;
	}
	else
	{
		txtendHour->Enabled = false;
		txtmeetingPlace->Enabled = false;
		txtInvolvedPeople->Enabled = false;
		rtbMaterials->Enabled = false;
		txtendHourWatermark->Enabled = false;
		txtmeetingPlaceWatermark->Enabled = false;
		txtInvolvedPeopleWatermark->Enabled = false;
		rtbMaterialsWatermark->Enabled = false;
	}
}
private: System::Void btnAgregarEvento_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	btnAgregarEvento->BackColor = BackColor.White;
}
private: System::Void btnAgregarEvento_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	btnAgregarEvento->BackColor = BackColor.Gainsboro;
}

//Agregar un evento
private: System::Void btnAgregarEvento_Click(System::Object^ sender, System::EventArgs^ e) {
	//switch ()
	//{

	//}
}
};
}
