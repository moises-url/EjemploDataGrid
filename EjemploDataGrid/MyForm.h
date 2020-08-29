#pragma once

namespace EjemploDataGrid {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	//Nuevos namespaces utilizados
	using namespace System::IO;
	

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtFilas;
	private: System::Windows::Forms::TextBox^ txtColumnas;
	private: System::Windows::Forms::Button^ btnGenerar;
	private: System::Windows::Forms::DataGridView^ dgvMatriz;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ btnExportar;
	private: System::Windows::Forms::TextBox^ txtPath;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::OpenFileDialog^ ofdImportar;
	private: System::Windows::Forms::SaveFileDialog^ sfdExportar;


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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtFilas = (gcnew System::Windows::Forms::TextBox());
			this->txtColumnas = (gcnew System::Windows::Forms::TextBox());
			this->btnGenerar = (gcnew System::Windows::Forms::Button());
			this->dgvMatriz = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->btnExportar = (gcnew System::Windows::Forms::Button());
			this->txtPath = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->ofdImportar = (gcnew System::Windows::Forms::OpenFileDialog());
			this->sfdExportar = (gcnew System::Windows::Forms::SaveFileDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMatriz))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(41, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(91, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Cantidad de Filas:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(41, 58);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(116, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Cantidad de Columnas:";
			// 
			// txtFilas
			// 
			this->txtFilas->Location = System::Drawing::Point(169, 27);
			this->txtFilas->Name = L"txtFilas";
			this->txtFilas->Size = System::Drawing::Size(100, 20);
			this->txtFilas->TabIndex = 2;
			// 
			// txtColumnas
			// 
			this->txtColumnas->Location = System::Drawing::Point(169, 55);
			this->txtColumnas->Name = L"txtColumnas";
			this->txtColumnas->Size = System::Drawing::Size(100, 20);
			this->txtColumnas->TabIndex = 3;
			// 
			// btnGenerar
			// 
			this->btnGenerar->Location = System::Drawing::Point(44, 86);
			this->btnGenerar->Name = L"btnGenerar";
			this->btnGenerar->Size = System::Drawing::Size(225, 23);
			this->btnGenerar->TabIndex = 4;
			this->btnGenerar->Text = L"Generar";
			this->btnGenerar->UseVisualStyleBackColor = true;
			this->btnGenerar->Click += gcnew System::EventHandler(this, &MyForm::btnGenerar_Click);
			// 
			// dgvMatriz
			// 
			this->dgvMatriz->AllowUserToAddRows = false;
			this->dgvMatriz->AllowUserToDeleteRows = false;
			this->dgvMatriz->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvMatriz->Location = System::Drawing::Point(48, 144);
			this->dgvMatriz->Name = L"dgvMatriz";
			this->dgvMatriz->Size = System::Drawing::Size(670, 368);
			this->dgvMatriz->TabIndex = 5;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->btnExportar);
			this->groupBox1->Controls->Add(this->txtPath);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Location = System::Drawing::Point(318, 27);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(400, 100);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Importar Archivo de Texto";
			// 
			// btnExportar
			// 
			this->btnExportar->Location = System::Drawing::Point(21, 59);
			this->btnExportar->Name = L"btnExportar";
			this->btnExportar->Size = System::Drawing::Size(75, 23);
			this->btnExportar->TabIndex = 2;
			this->btnExportar->Text = L"Exportar";
			this->btnExportar->UseVisualStyleBackColor = true;
			this->btnExportar->Click += gcnew System::EventHandler(this, &MyForm::btnExportar_Click);
			// 
			// txtPath
			// 
			this->txtPath->Location = System::Drawing::Point(113, 26);
			this->txtPath->Name = L"txtPath";
			this->txtPath->ReadOnly = true;
			this->txtPath->Size = System::Drawing::Size(263, 20);
			this->txtPath->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(21, 26);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Importar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// ofdImportar
			// 
			this->ofdImportar->FileName = L"openFileDialog1";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(750, 542);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->dgvMatriz);
			this->Controls->Add(this->btnGenerar);
			this->Controls->Add(this->txtColumnas);
			this->Controls->Add(this->txtFilas);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"Ejemplo DataGridView Dinámico";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMatriz))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private : void ReestablecerMatriz() {
		dgvMatriz->Rows->Clear();
		dgvMatriz->Columns->Clear();
		dgvMatriz->ColumnHeadersVisible = false;
		dgvMatriz->RowHeadersVisible = false;
	};

	private: System::Void btnGenerar_Click(System::Object^ sender, System::EventArgs^ e) {
		int numFilas = 0;
		int numColumnas = 0;
		try {
			numFilas = Convert::ToInt32(txtFilas->Text);
			numColumnas = Convert::ToInt32(txtColumnas->Text);
		}
		catch (Exception^ e) {
			MessageBox::Show("Error detectado: " + e->Message
				, "Valores incorrectos"
				, MessageBoxButtons::OK
				, MessageBoxIcon::Error);
		}

		ReestablecerMatriz();	//Método que borra el contenido de la matriz

		//Se crean las columnas de la matriz
		if (numColumnas > 0) {
			for (int i = 0; i < numColumnas; i++) {
				//Se crea una columna
				DataGridViewColumn^ nuevacolumna = gcnew DataGridViewColumn();
				nuevacolumna->Width = 20;
				
				//Se le agrega el tipo de columna que será
				DataGridViewCell^ cellTemplate = gcnew DataGridViewTextBoxCell();
				nuevacolumna->CellTemplate = cellTemplate;

				//Se agrega la columna al Datagrid
				dgvMatriz->Columns->Add(nuevacolumna);
			}
		}

		//Se agregan las filas a la matriz
		if (numFilas > 0) {
			for (int i = 0; i < numFilas; i++){
				dgvMatriz->Rows->Add();
			}
		}
	}

		   
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	//Se agregan los filtros al OpenFileDialog
	ofdImportar->Filter = "Archivos separados por coma (csv) | *.csv";
	ofdImportar->FileName = "";
	
	//Unicamnte si el reultado de la apertura del archivo es exitosa se carga el archivo
	if (ofdImportar->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		ReestablecerMatriz(); //Se elimina cualquier contenido de la matriz
		txtPath->Text = ofdImportar->FileName;

		//Se utiliza el objeto File para leer el archivo solo cuando el FileName es correcto
		//Importante haber llamado al namespace System::IO antes de usar File
		array<String^>^ archivoLineas = File::ReadAllLines(ofdImportar->FileName); 

		if (archivoLineas->Length > 0) {

			//Obtiene la cantidad de elementos de la primer linea y ese toma como cantidad de columnas
			array<String^>^ archivoColumna = archivoLineas[0]->Split(',');
			if (archivoColumna->Length > 0) {
				int cantidadColumnas = archivoColumna->Length;

				//Agrega las columnas
				for (int i = 0; i < cantidadColumnas; i++) {
					//Crea una columna
					DataGridViewColumn^ nuevacolumna = gcnew DataGridViewColumn();
					nuevacolumna->Width = 20;
					//Le agrega el tipo de columna que será
					DataGridViewCell^ cellTemplate = gcnew DataGridViewTextBoxCell();
					nuevacolumna->CellTemplate = cellTemplate;
					//Inserta la columna
					dgvMatriz->Columns->Add(nuevacolumna);
				}

				//Agrega las filas de manera dinámica
				for (int i = 0; i < archivoLineas->Length; i++) {
					dgvMatriz->Rows->Add();
				}

				//Llena el DatagridView
				for (int i = 0; i < archivoLineas->Length; i++) {
					array<String^>^ fila = archivoLineas[i]->Split(',');
					int j = 0;
					
					//Si alguna fila tiene más o menos objetos no afecta al funcionamiento ya que utiliza la cantidad de elementos de la primer fila
					while ((j < cantidadColumnas) && (j < fila->Length)) {
						dgvMatriz->Rows[i]->Cells[j]->Value = fila[j];
						j++;
					}
				}
			}
		}
		
	}
	else {
		// Si no se selecciona correctamente un elemento entonces falla
		MessageBox::Show("No se seleccionó ningún archivo"
			, "Archivo no seleccionado"
			, MessageBoxButtons::OK
			, MessageBoxIcon::Exclamation);
	}
}
private: System::Void btnExportar_Click(System::Object^ sender, System::EventArgs^ e) {
	if ((dgvMatriz->Columns->Count > 0) && (dgvMatriz->Rows->Count > 0)){
		sfdExportar->Filter = "Archivos separados por coma (csv) | *.csv";
		if (sfdExportar->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			
			//Guardo el contenido del DataGridView en una sola cadena
			String^ linea = "";
			for (int i = 0; i < dgvMatriz->Rows->Count; i++) {
				for (int j = 0; j < dgvMatriz->Columns->Count; j++) {
					if (j == dgvMatriz->Columns->Count - 1)
						linea += "" + dgvMatriz->Rows[i]->Cells[j]->Value + "\r\n";
					else 
						linea += "" + dgvMatriz->Rows[i]->Cells[j]->Value + ",";
				}
			}

			//Utilizo el objeto System::IO::File para guardar el texto
			//Importante haber llamado al namespace System::IO antes de usar File
			File::WriteAllText(sfdExportar->FileName, linea);
			MessageBox::Show("Archivo guardado exitosamente"
				, "Operación exitosa"
				, MessageBoxButtons::OK
				, MessageBoxIcon::Information);
		}
		else {
			MessageBox::Show("No se exportó el archivo"
				, "Archivo no seleccionado"
				, MessageBoxButtons::OK
				, MessageBoxIcon::Exclamation);
		}
	}
}
};
}
