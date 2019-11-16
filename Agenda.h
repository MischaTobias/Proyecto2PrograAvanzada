#pragma once
#include <windows.h>
#include <Servprov.h>
#include "AgregarEvento.h"
#include <fstream>
#include "ListaEventos.h"
#include "Actividad.h"
#include "Recordatorio.h"
#include "Alarma.h"
#include <msclr\marshal_cppstd.h>

namespace Proyecto2PrograAvanzada {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	extern ListaEventos* lEventos;
	/// <summary>
	/// Resumen de Agenda
	/// </summary>
	public ref class Agenda : public System::Windows::Forms::Form
	{
		String^ userActual;
	public:
		Agenda(String^ user)
		{
			InitializeComponent();
			userActual = user;
			lEventos = new ListaEventos();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		//Constructor
		Agenda(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Agenda()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtYear;
	private: System::Windows::Forms::TextBox^ txtMonth;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btnAgregarTarea;
	private: System::Windows::Forms::RichTextBox^ rtbEventos;
	private: System::Windows::Forms::Button^ btnCambiarCalendario;
	private: System::Windows::Forms::MonthCalendar^ mCalendar;

	private: System::Windows::Forms::Button^ btnExportarAgenda;
	private: System::Windows::Forms::Button^ btnBuscarTarea;
	private: System::Windows::Forms::ComboBox^ cbCBuscar;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtCBuscar;
	private: System::Windows::Forms::TextBox^ txtCBuscarWatermark;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;
	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtYear = (gcnew System::Windows::Forms::TextBox());
			this->txtMonth = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btnAgregarTarea = (gcnew System::Windows::Forms::Button());
			this->rtbEventos = (gcnew System::Windows::Forms::RichTextBox());
			this->btnCambiarCalendario = (gcnew System::Windows::Forms::Button());
			this->mCalendar = (gcnew System::Windows::Forms::MonthCalendar());
			this->btnExportarAgenda = (gcnew System::Windows::Forms::Button());
			this->btnBuscarTarea = (gcnew System::Windows::Forms::Button());
			this->cbCBuscar = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtCBuscar = (gcnew System::Windows::Forms::TextBox());
			this->txtCBuscarWatermark = (gcnew System::Windows::Forms::TextBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(28, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Año:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(28, 57);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(30, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Mes:";
			// 
			// txtYear
			// 
			this->txtYear->Location = System::Drawing::Point(63, 21);
			this->txtYear->Name = L"txtYear";
			this->txtYear->Size = System::Drawing::Size(100, 20);
			this->txtYear->TabIndex = 2;
			// 
			// txtMonth
			// 
			this->txtMonth->Location = System::Drawing::Point(63, 54);
			this->txtMonth->Name = L"txtMonth";
			this->txtMonth->Size = System::Drawing::Size(100, 20);
			this->txtMonth->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(28, 150);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(166, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Selecciona un día del calendario:";
			// 
			// btnAgregarTarea
			// 
			this->btnAgregarTarea->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAgregarTarea->Location = System::Drawing::Point(188, 24);
			this->btnAgregarTarea->Name = L"btnAgregarTarea";
			this->btnAgregarTarea->Size = System::Drawing::Size(92, 46);
			this->btnAgregarTarea->TabIndex = 5;
			this->btnAgregarTarea->Text = L"Agregar Tarea";
			this->btnAgregarTarea->UseVisualStyleBackColor = true;
			this->btnAgregarTarea->Click += gcnew System::EventHandler(this, &Agenda::btnAgregarTarea_Click);
			// 
			// rtbEventos
			// 
			this->rtbEventos->Location = System::Drawing::Point(302, 21);
			this->rtbEventos->Name = L"rtbEventos";
			this->rtbEventos->ReadOnly = true;
			this->rtbEventos->Size = System::Drawing::Size(285, 159);
			this->rtbEventos->TabIndex = 7;
			this->rtbEventos->Text = L"";
			// 
			// btnCambiarCalendario
			// 
			this->btnCambiarCalendario->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnCambiarCalendario->Location = System::Drawing::Point(30, 126);
			this->btnCambiarCalendario->Name = L"btnCambiarCalendario";
			this->btnCambiarCalendario->Size = System::Drawing::Size(133, 21);
			this->btnCambiarCalendario->TabIndex = 8;
			this->btnCambiarCalendario->Text = L"Cambiar Calendario";
			this->btnCambiarCalendario->UseVisualStyleBackColor = true;
			this->btnCambiarCalendario->Click += gcnew System::EventHandler(this, &Agenda::btnCambiarCalendario_Click);
			// 
			// mCalendar
			// 
			this->mCalendar->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->mCalendar->CausesValidation = false;
			this->mCalendar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mCalendar->Location = System::Drawing::Point(30, 172);
			this->mCalendar->MaxSelectionCount = 1;
			this->mCalendar->Name = L"mCalendar";
			this->mCalendar->ShowToday = false;
			this->mCalendar->ShowTodayCircle = false;
			this->mCalendar->TabIndex = 9;
			this->mCalendar->DateSelected += gcnew System::Windows::Forms::DateRangeEventHandler(this, &Agenda::mCalendar_DateSelected);
			// 
			// btnExportarAgenda
			// 
			this->btnExportarAgenda->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExportarAgenda->Location = System::Drawing::Point(303, 210);
			this->btnExportarAgenda->Name = L"btnExportarAgenda";
			this->btnExportarAgenda->Size = System::Drawing::Size(122, 25);
			this->btnExportarAgenda->TabIndex = 11;
			this->btnExportarAgenda->Text = L"Exportar Agenda";
			this->btnExportarAgenda->UseVisualStyleBackColor = true;
			// 
			// btnBuscarTarea
			// 
			this->btnBuscarTarea->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBuscarTarea->Location = System::Drawing::Point(465, 275);
			this->btnBuscarTarea->Name = L"btnBuscarTarea";
			this->btnBuscarTarea->Size = System::Drawing::Size(122, 25);
			this->btnBuscarTarea->TabIndex = 12;
			this->btnBuscarTarea->Text = L"Buscar Tarea";
			this->btnBuscarTarea->UseVisualStyleBackColor = true;
			// 
			// cbCBuscar
			// 
			this->cbCBuscar->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbCBuscar->FormattingEnabled = true;
			this->cbCBuscar->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"ID", L"Fecha", L"Palabras en la descripción" });
			this->cbCBuscar->Location = System::Drawing::Point(303, 278);
			this->cbCBuscar->Name = L"cbCBuscar";
			this->cbCBuscar->Size = System::Drawing::Size(121, 21);
			this->cbCBuscar->TabIndex = 13;
			this->cbCBuscar->SelectedIndexChanged += gcnew System::EventHandler(this, &Agenda::cbCBuscar_SelectedIndexChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(299, 253);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(198, 13);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Seleccionar criterio de búsqueda:";
			// 
			// txtCBuscar
			// 
			this->txtCBuscar->Enabled = false;
			this->txtCBuscar->Location = System::Drawing::Point(303, 305);
			this->txtCBuscar->Name = L"txtCBuscar";
			this->txtCBuscar->Size = System::Drawing::Size(121, 20);
			this->txtCBuscar->TabIndex = 15;
			this->txtCBuscar->TextChanged += gcnew System::EventHandler(this, &Agenda::txtCBuscar_TextChanged);
			// 
			// txtCBuscarWatermark
			// 
			this->txtCBuscarWatermark->Enabled = false;
			this->txtCBuscarWatermark->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->txtCBuscarWatermark->Location = System::Drawing::Point(303, 305);
			this->txtCBuscarWatermark->Name = L"txtCBuscarWatermark";
			this->txtCBuscarWatermark->Size = System::Drawing::Size(121, 20);
			this->txtCBuscarWatermark->TabIndex = 16;
			this->txtCBuscarWatermark->Text = L"Ingrese el criterio aquí";
			this->txtCBuscarWatermark->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Agenda::txtCBuscarWatermark_MouseClick);
			this->txtCBuscarWatermark->TextChanged += gcnew System::EventHandler(this, &Agenda::txtCBuscarWatermark_TextChanged);
			// 
			// timer1
			// 
			this->timer1->Interval = 60000;
			this->timer1->Tick += gcnew System::EventHandler(this, &Agenda::timer1_Tick);
			// 
			// Agenda
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(599, 384);
			this->Controls->Add(this->txtCBuscarWatermark);
			this->Controls->Add(this->txtCBuscar);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->cbCBuscar);
			this->Controls->Add(this->btnBuscarTarea);
			this->Controls->Add(this->btnExportarAgenda);
			this->Controls->Add(this->mCalendar);
			this->Controls->Add(this->btnCambiarCalendario);
			this->Controls->Add(this->rtbEventos);
			this->Controls->Add(this->btnAgregarTarea);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtMonth);
			this->Controls->Add(this->txtYear);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Agenda";
			this->Text = L"Agenda";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Agenda::Agenda_FormClosed);
			this->Load += gcnew System::EventHandler(this, &Agenda::Agenda_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		bool bisiesto = 0;
		int year, month, days;
		AgregarEvento^ agregarEvento;
		DateTime^ fechahoy = gcnew DateTime();
	private: System::Void Agenda_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		for (int i = Application::OpenForms->Count; i >= 0; i--)
		{
			try
			{
				Application::OpenForms[i]->Close();
			}
			catch (...)
			{

			}
		}
	}
	private: System::Void SobreEscribirArchivo() {
		msclr::interop::marshal_context context;
		int cont = 0;
		StreamWriter^ streamWriter = gcnew StreamWriter(userActual + ".csv");
		String^ textoArchivo = "";
		NodoEvento* newNodo = lEventos->first;
		while (lEventos->nElementos > 0)
		{
			if (newNodo->actividad->pnum != -1)
			{
				if (cont == 0)
				{
					textoArchivo += context.marshal_as<String^>(newNodo->actividad->fecha) + ';' + "AC" + ';' + context.marshal_as<String^>(newNodo->actividad->startHour) +
						';' + context.marshal_as<String^>(newNodo->actividad->endHour) + ';' + context.marshal_as<String^>(newNodo->actividad->meetingPlace) + ';' +
						context.marshal_as<String^>(newNodo->actividad->involvedPeople) + ';' + context.marshal_as<String^>(newNodo->actividad->neededMaterials) + ';' +
						context.marshal_as<String^>(newNodo->actividad->description) + ';' + context.marshal_as<String^>(newNodo->actividad->identifier) + ';' +
						context.marshal_as<String^>(newNodo->actividad->priority);
					cont++;
				}
				else
				{
					textoArchivo += '\r\n' + context.marshal_as<String^>(newNodo->actividad->fecha) + ';' + "AC" + ';' + context.marshal_as<String^>(newNodo->actividad->startHour) +
						';' + context.marshal_as<String^>(newNodo->actividad->endHour) + ';' + context.marshal_as<String^>(newNodo->actividad->meetingPlace) + ';' +
						context.marshal_as<String^>(newNodo->actividad->involvedPeople) + ';' + context.marshal_as<String^>(newNodo->actividad->neededMaterials) + ';' +
						context.marshal_as<String^>(newNodo->actividad->description) + ';' + context.marshal_as<String^>(newNodo->actividad->identifier) + ';' +
						context.marshal_as<String^>(newNodo->actividad->priority);
				}
			}
			else if (newNodo->recordatorio->pnum != -1)
			{
				if (cont == 0)
				{
					textoArchivo += context.marshal_as<String^>(newNodo->recordatorio->fecha) + ';' + "RE" + ';' + context.marshal_as<String^>(newNodo->recordatorio->startHour) +
						';' + context.marshal_as<String^>(newNodo->recordatorio->description) + ';' + context.marshal_as<String^>(newNodo->recordatorio->identifier) + ';' +
						context.marshal_as<String^>(newNodo->recordatorio->priority);
					cont++;
				}
				else
				{
					textoArchivo += '\r\n' + context.marshal_as<String^>(newNodo->recordatorio->fecha) + ';' + "RE" + ';' + context.marshal_as<String^>(newNodo->recordatorio->startHour) +
						';' + context.marshal_as<String^>(newNodo->recordatorio->description) + ';' + context.marshal_as<String^>(newNodo->recordatorio->identifier) + ';' +
						context.marshal_as<String^>(newNodo->recordatorio->priority);
					cont++;
				}
			}
			else
			{
				if (cont == 0)
				{
					textoArchivo += context.marshal_as<String^>(newNodo->recordatorio->fecha) + ';' + "AL" + ';' + context.marshal_as<String^>(newNodo->recordatorio->startHour) +
						';' + context.marshal_as<String^>(newNodo->recordatorio->description) + ';' + context.marshal_as<String^>(newNodo->recordatorio->identifier) + ';' +
						context.marshal_as<String^>(newNodo->recordatorio->priority);
					cont++;
				}
				else
				{
					textoArchivo += '\r\n' + context.marshal_as<String^>(newNodo->recordatorio->fecha) + ';' + "AL" + ';' + context.marshal_as<String^>(newNodo->recordatorio->startHour) +
						';' + context.marshal_as<String^>(newNodo->recordatorio->description) + ';' + context.marshal_as<String^>(newNodo->recordatorio->identifier) + ';' +
						context.marshal_as<String^>(newNodo->recordatorio->priority);
					cont++;
				}
			}
		}
	}
	private: System::Void btnCambiarCalendario_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			year = System::Convert::ToInt16(txtYear->Text);
			month = System::Convert::ToInt16(txtMonth->Text);
			DateTime date = System::Convert::ToDateTime("01/" + txtMonth->Text + "/" + txtYear->Text);
			mCalendar->SetDate(date);
		}
		catch (...)
		{
			System::Windows::Forms::MessageBox::Show("Por favor ingrese datos válidos en el año y el mes");
		}
	}
	private: System::Void btnAgregarTarea_Click(System::Object^ sender, System::EventArgs^ e) {
		agregarEvento = gcnew AgregarEvento(System::Convert::ToString(mCalendar->SelectionRange->Start));
		agregarEvento->Show();
	}
	private: System::Void txtCBuscarWatermark_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		txtCBuscar->Text = txtCBuscarWatermark->Text->Substring(0, 1);
		txtCBuscarWatermark->Visible = false;
		txtCBuscar->Focus();
		txtCBuscar->Select(1, 0);
	}
	private: System::Void txtCBuscarWatermark_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		txtCBuscarWatermark->Select(0, 0);
	}
	private: System::Void txtCBuscar_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ watermark = "Ingrese el criterio aquí";
		if (txtCBuscar->Text == "")
		{
			txtCBuscarWatermark->Text = watermark;
			txtCBuscarWatermark->Visible = true;
			txtCBuscarWatermark->Focus();
			txtCBuscarWatermark->Select(0, 0);
		}
	}
	private: System::Void cbCBuscar_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (cbCBuscar->SelectedIndex == 0 || cbCBuscar->SelectedIndex == 1 || cbCBuscar->SelectedIndex == 2)
		{
			txtCBuscar->Enabled = true;
			txtCBuscarWatermark->Enabled = true;
		}
	}
	private: System::Void mCalendar_DateSelected(System::Object^ sender, System::Windows::Forms::DateRangeEventArgs^ e) {
		String^ fecha = System::Convert::ToString(mCalendar->SelectionRange->Start);
		msclr::interop::marshal_context context;
		int x = lEventos->nElementos;
		String^ texto = "Eventos " + fecha;
		std::string fecha1 = context.marshal_as<std::string>(fecha);
		NodoEvento* nAux = lEventos->first;
		lEventos->Sort();
		for (int i = 0; i < x; i++)
		{
			if (nAux->actividad->pnum != -1)
			{
				if (nAux->actividad->fecha == fecha1)
				{
					texto += "\n" + "Actividad: " + context.marshal_as<String^>(nAux->actividad->startHour) + context.marshal_as<String^>(nAux->actividad->endHour) + " - " +
						context.marshal_as<String^>(nAux->actividad->meetingPlace) + " - " + context.marshal_as<String^>(nAux->actividad->neededMaterials) + " - " +
						context.marshal_as<String^>(nAux->actividad->description) + context.marshal_as<String^>(nAux->actividad->identifier);
				}
			}
			else if (nAux->recordatorio->pnum != -1)
			{
				if (nAux->recordatorio->fecha == fecha1)
				{
					texto += "\n" + "Recordatorio: " + context.marshal_as<String^>(nAux->actividad->startHour) + context.marshal_as<String^>(nAux->recordatorio->description) +
						context.marshal_as<String^>(nAux->recordatorio->identifier);
				}
			}
			else if (nAux->alarma->pnum != -1)
			{
				if (nAux->alarma->fecha == fecha1)
				{
					texto += "\n" + "Alarma: " + context.marshal_as<String^>(nAux->actividad->startHour) + " - " + context.marshal_as<String^>(nAux->alarma->description) +
						context.marshal_as<String^>(nAux->alarma->identifier);
				}
			}
			nAux = nAux->siguienteNodo;
		}
		rtbEventos->Text = texto;
	}
	private: System::Void Agenda_Load(System::Object^ sender, System::EventArgs^ e) {
		fechahoy = fechahoy->Now;
		timer1->Start();
		StreamReader^ streamReader = gcnew StreamReader(userActual + ".csv");
		String^ contenido = streamReader->ReadToEnd();
		streamReader->Close();
		array<String^>^ datos;
		array<String^>^ dindividual;
		if (contenido != "")
		{
			datos = contenido->Split('\r');
			for (int i = 0; i < datos->Length; i++)
			{
				if (datos[i][0] == '\n')
				{
					datos[i] = datos[i]->Remove(0, 1);
				}
			}

			String^ fecha = System::Convert::ToString(mCalendar->SelectionRange->Start);
			msclr::interop::marshal_context context;
			std::string fecha1 = context.marshal_as<std::string>(fecha);
			std::string mplace = "";
			std::string ipeople = "";
			std::string nmaterials = "";
			std::string desc = "";
			std::string id = "";
			std::string hstart = "";
			std::string	hend = "";
			std::string priority = "";
			int pnum = -1;
			NodoEvento* newNodo = new NodoEvento();
			for (int i = 0; i < datos->Length; i++)
			{
				dindividual = datos[i]->Split(';');
				fecha1 = context.marshal_as<std::string>(dindividual[0]);
				hstart = context.marshal_as<std::string>(dindividual[2]);
				if (dindividual[1] == "AC")
				{
					hend = context.marshal_as<std::string>(dindividual[3]);
					mplace = context.marshal_as<std::string>(dindividual[4]);
					ipeople = context.marshal_as<std::string>(dindividual[5]);
					nmaterials = context.marshal_as<std::string>(dindividual[6]);
					desc = context.marshal_as<std::string>(dindividual[7]);
					id = context.marshal_as<std::string>(dindividual[8]);
					pnum = System::Convert::ToInt16(dindividual[9]);
					switch (pnum)
					{
					case 1:
						priority = "Muy alta";
						break;
					case 2:
						priority = "Alta";
						break;
					case 3:
						priority = "Media";
						break;
					case 4:
						priority = "Baja";
						break;
					default:
						MessageBox::Show("Hay datos ingresados que no están en el formato correcto.");
					}
					Actividad* newActividad = new Actividad(fecha1, hstart, hend, mplace, ipeople, nmaterials, desc, id, priority, pnum);
					newNodo = new NodoEvento(newActividad);
				}
				else
				{
					desc = context.marshal_as<std::string>(dindividual[4]);
					id = context.marshal_as<std::string>(dindividual[5]);
					pnum = System::Convert::ToInt16(dindividual[6]);
					switch (pnum)
					{
					case 1:
						priority = "Muy alta";
						break;
					case 2:
						priority = "Alta";
						break;
					case 3:
						priority = "Media";
						break;
					case 4:
						priority = "Baja";
						break;
					default:
						MessageBox::Show("Hay datos ingresados que no están en el formato correcto.");
					}
					if (dindividual[1] == "RE")
					{
						Recordatorio* newRecordatorio = new Recordatorio(fecha1, hstart, desc, id, priority, pnum);
						newNodo = new NodoEvento(newRecordatorio);
					}
					else
					{
						Alarma* newAlarma = new Alarma(fecha1, hstart, desc, id, priority, pnum);
						newNodo = new NodoEvento(newAlarma);
					}
				}
				lEventos->Insertar(newNodo);
			}
		}
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		String^ fecha = System::Convert::ToString(mCalendar->SelectionRange->Start);
		if (fecha->Length == 19)
		{
			fecha = fecha->Remove(10, 9);
		}
		else
		{
			fecha = fecha->Remove(9, 9);
		}
		msclr::interop::marshal_context context;
		std::string fecha1 = context.marshal_as<std::string>(fecha);
		DateTime^ now = gcnew DateTime();
		now = now->Now;
		std::string hora = context.marshal_as<std::string>(now->Hour.ToString());
		std::string minutes = context.marshal_as<std::string>(now->Minute.ToString());
		std::string time = hora + ":" + minutes;
		NodoEvento* nAux = lEventos->first;

		int x = lEventos->nElementos;
		for (int i = 0; i < x; i++)
		{
			if (nAux->actividad->pnum != -1)
			{
				if (nAux->actividad->fecha == fecha1)
				{
					if (time == nAux->actividad->startHour)
					{
						MessageBox::Show("Ha llegado la hora de: " + context.marshal_as<String^>(nAux->actividad->description));
					}
				}
			}
			else if (nAux->recordatorio->pnum != -1)
			{
				if (nAux->recordatorio->fecha == fecha1)
				{
					if (time == nAux->recordatorio->startHour)
					{
						MessageBox::Show("Ha llegado la hora de: " + context.marshal_as<String^>(nAux->recordatorio->description));
					}
				}
			}
			else if (nAux->alarma->pnum != -1)
			{
				if (nAux->alarma->fecha == fecha1)
				{
					if (time == nAux->alarma->startHour)
					{
						MessageBox::Show("Ha llegado la hora de: " + context.marshal_as<String^>(nAux->alarma->description));
					}
				}
			}
			nAux = nAux->siguienteNodo;
		}
	}
};
}