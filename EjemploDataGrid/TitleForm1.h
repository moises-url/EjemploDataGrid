#pragma once

namespace EjemploDataGrid {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de TitleForm
	/// </summary>
	public ref class TitleForm : public System::Windows::Forms::Form
	{
	public:
		TitleForm(void)
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
		~TitleForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblTitulo;
	private: System::Windows::Forms::Label^ lblSegundos;
	private: System::Windows::Forms::Timer^ tmrEjemplo;

	private: System::ComponentModel::IContainer^ components;

	protected:

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
			this->lblTitulo = (gcnew System::Windows::Forms::Label());
			this->lblSegundos = (gcnew System::Windows::Forms::Label());
			this->tmrEjemplo = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// lblTitulo
			// 
			this->lblTitulo->AutoSize = true;
			this->lblTitulo->Font = (gcnew System::Drawing::Font(L"Segoe Script", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitulo->ForeColor = System::Drawing::Color::Navy;
			this->lblTitulo->Location = System::Drawing::Point(137, 33);
			this->lblTitulo->Name = L"lblTitulo";
			this->lblTitulo->Size = System::Drawing::Size(141, 57);
			this->lblTitulo->TabIndex = 0;
			this->lblTitulo->Text = L"label1";
			// 
			// lblSegundos
			// 
			this->lblSegundos->AutoSize = true;
			this->lblSegundos->Font = (gcnew System::Drawing::Font(L"Segoe Script", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblSegundos->ForeColor = System::Drawing::Color::Navy;
			this->lblSegundos->Location = System::Drawing::Point(181, 130);
			this->lblSegundos->Name = L"lblSegundos";
			this->lblSegundos->Size = System::Drawing::Size(51, 57);
			this->lblSegundos->TabIndex = 1;
			this->lblSegundos->Text = L"0";
			// 
			// tmrEjemplo
			// 
			this->tmrEjemplo->Enabled = true;
			this->tmrEjemplo->Interval = 1000;
			this->tmrEjemplo->Tick += gcnew System::EventHandler(this, &TitleForm::tmrEjemplo_Tick);
			// 
			// TitleForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(463, 241);
			this->Controls->Add(this->lblSegundos);
			this->Controls->Add(this->lblTitulo);
			this->Name = L"TitleForm";
			this->Text = L"TitleForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: void AsignarTitulo(String^ titulo) {
		lblTitulo->Text = titulo;
	}
	private: System::Void tmrEjemplo_Tick(System::Object^ sender, System::EventArgs^ e) {
		lblSegundos->Text = Convert::ToString(Convert::ToInt32(lblSegundos->Text) + 1);
	}
	};
}
