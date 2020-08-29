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
	private: System::Windows::Forms::Label^ lblTitulos;
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
			this->lblTitulos = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lblTitulos
			// 
			this->lblTitulos->AutoSize = true;
			this->lblTitulos->Font = (gcnew System::Drawing::Font(L"Segoe Script", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblTitulos->ForeColor = System::Drawing::Color::Navy;
			this->lblTitulos->Location = System::Drawing::Point(159, 40);
			this->lblTitulos->Name = L"lblTitulos";
			this->lblTitulos->Size = System::Drawing::Size(130, 53);
			this->lblTitulos->TabIndex = 0;
			this->lblTitulos->Text = L"label1";
			// 
			// TitleForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(511, 159);
			this->Controls->Add(this->lblTitulos);
			this->Name = L"TitleForm";
			this->Text = L"TitleForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: void AsignarTitulo(String^ nuevoTitulo) {
		lblTitulos->Text = nuevoTitulo;
	}

	};
}
