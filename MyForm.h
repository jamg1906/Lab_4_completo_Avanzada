#pragma once
#include "Pokemon.h"
#include "Ordenamientos.h"

namespace Laboratorio4CompletoJavierMorales1210219 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::IO;
	using namespace System::Drawing;
	using namespace System::Diagnostics;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ comboBox1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::RichTextBox^ ordenados_txt;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->ordenados_txt = (gcnew System::Windows::Forms::RichTextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Bubble Sort", L"Stupid Sort", L"Quick Sort" });
			this->comboBox1->Location = System::Drawing::Point(658, 163);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(241, 21);
			this->comboBox1->TabIndex = 7;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(658, 89);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(241, 51);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Ordenar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(45, 53);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(248, 410);
			this->richTextBox1->TabIndex = 8;
			this->richTextBox1->Text = L"";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(42, 477);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(236, 17);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Pokemones obtenidos (Desordenados)";
			// 
			// ordenados_txt
			// 
			this->ordenados_txt->Location = System::Drawing::Point(349, 53);
			this->ordenados_txt->Name = L"ordenados_txt";
			this->ordenados_txt->Size = System::Drawing::Size(248, 410);
			this->ordenados_txt->TabIndex = 10;
			this->ordenados_txt->Text = L"";
			this->ordenados_txt->TextChanged += gcnew System::EventHandler(this, &MyForm::ordenados_txt_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(409, 477);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(143, 17);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Pokemones ordenados";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(641, 447);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(300, 16);
			this->label8->TabIndex = 17;
			this->label8->Text = L"Javier Andrés Morales González, 1210219.";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(655, 383);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(129, 13);
			this->label7->TabIndex = 16;
			this->label7->Text = L"Pikachu,1,025,Squirtle,....";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(655, 355);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(47, 13);
			this->label6->TabIndex = 15;
			this->label6->Text = L"Ejemplo:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(655, 325);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(251, 13);
			this->label5->TabIndex = 14;
			this->label5->Text = L"----->    ,nombre,generación,númeroúnico,nombre,....\r\n";
			// 
			// label4
			// 
			this->label4->Location = System::Drawing::Point(655, 235);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(250, 90);
			this->label4->TabIndex = 13;
			this->label4->Text = resources->GetString(L"label4.Text");
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(655, 209);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(73, 13);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Instrucciones:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->ClientSize = System::Drawing::Size(973, 534);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->ordenados_txt);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"Ordenamiento de pokémones";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		StreamReader^ lector = gcnew StreamReader("pokemones.txt");
		String^ texto;
		String^ t;
		Stopwatch^ S = gcnew Stopwatch();
		Pokemon* P = new Pokemon();
		int comprobacion = 0;


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (t != "")
		{
			texto = t;
		}
		Ordenamientos* O = new Ordenamientos();
		Pokemon Vector_Pokemones[100];
		int numeros_unicos[100];
		int generaciones[100];
		array<String^>^ nombres_pokemones;
		nombres_pokemones = gcnew array<String^>(100);
		String^ numero;
		String^ nombre;
		String^ generacion;
		int contador_ndex = 0;
		int contador_generacion = 0;
		int contador_nombre = 0;
		int contador_de_tipo = 1;
		int tamaño = 0;
		tamaño = texto->Length;
		for (int i = 0; i < 100; i++)
		{
			numeros_unicos[i] = -1;
			generaciones[i] = -1;
			nombres_pokemones[i] = "";
		}
		//INICIO DE LA SEPARACION DE LOS DATOS DEL TXT
		try
		{
			for (int i = 0; i < tamaño; i++)
			{
				if (System::Convert::ToString(texto[i]) == ",")
				{
					if (contador_de_tipo == 1)
					{
						contador_de_tipo++;
						if (i != 0)
						{
							int cant = nombre->Length;
							while (cant < 15)
							{
								nombre += " ";
								cant = nombre->Length;
							}
							nombres_pokemones[contador_nombre] = System::Convert::ToString(nombre);
							contador_nombre++;
						}
						nombre = "";
					}
					else if (contador_de_tipo == 2)
					{
						contador_de_tipo++;
						if (i != 0 && System::Convert::ToInt32(generacion) < 1)
						{
							MessageBox::Show("La generación de un Pokémon no puede ser menor a 1.");
							System::Convert::ToInt16("d");
						}
						if (i != 0)
						{
							generaciones[contador_generacion] = System::Convert::ToInt32(generacion);
							contador_generacion++;
						}
						generacion = "";

					}
					else if (contador_de_tipo == 3)
					{
						if (i != 0 && System::Convert::ToInt32(numero) < 1)
						{
							MessageBox::Show("El número único de un Pokémon no puede ser menor a 1");
							System::Convert::ToInt16("d");
						}
						if (i != 0)
						{
							numeros_unicos[contador_ndex] = System::Convert::ToInt32(numero);
							contador_ndex++;
						}
						numero = "";
						contador_de_tipo = 1;
					}
				}
				else
				{
					if (contador_de_tipo == 1)
					{
						nombre += Convert::ToString(texto[i]);
					}
					if (contador_de_tipo == 2)
					{
						generacion += Convert::ToString(texto[i]);
					}
					if (contador_de_tipo == 3)
					{
						numero += Convert::ToString(texto[i]);
					}
				}
			}
			if (contador_ndex != contador_nombre || contador_ndex != contador_generacion || contador_nombre != contador_generacion)
			{
				System::Convert::ToInt16("d");
			}
		}
		catch (...)
		{
			MessageBox::Show("Hubo un error, ingresó demasiados números o el formato es incorrecto.");
		}
		//FIN DE LA SEPARACIÓN DE LOS DATOS DEL TXT

		for (int i = 0; i <= contador_ndex; i++)
		{
			String^ cadena = nombres_pokemones[i];
			char* cad2 = (char*)(void*)Marshal::StringToHGlobalAnsi(cadena);
			std::string string_convertido = cad2;
			Vector_Pokemones[i].nombre_pokemon = string_convertido;
			Vector_Pokemones[i].National_number = numeros_unicos[i];
			Vector_Pokemones[i].generacion = generaciones[i];
		}
		int aqui_parar = contador_ndex;
		String^ res = "";
		for (int i = 0; i < aqui_parar; i++)
		{
			res += Vector_Pokemones[i].MostrarPokemon(Vector_Pokemones[i]) + "\n";
		}
		richTextBox1->Text = res;
		//Bubble Sort

		if (comboBox1->Text == "Bubble Sort")
		{
			S->Reset();
			S->Start();
			O->BubbleSort(Vector_Pokemones, aqui_parar);
			S->Stop();
			MessageBox::Show("El método de ordenamiento " + comboBox1->Text + " tardó " + S->Elapsed);
		}
		if (comboBox1->Text == "Stupid Sort")
		{
			S->Reset();
			S->Start();
			O->StupidSort(Vector_Pokemones, aqui_parar);
			S->Stop();
			MessageBox::Show("El método de ordenamiento " + comboBox1->Text + " tardó " + S->Elapsed);
		}
		res = "";
		for (int i = 0; i < aqui_parar; i++)
		{
			res += Vector_Pokemones[i].MostrarPokemon(Vector_Pokemones[i]) + "\n";
		}

		if (comboBox1->Text != "")
		{
			ordenados_txt->Text = res;
		}
		if (comprobacion == 1 && comboBox1->Text == "")
		{
			System::Windows::Forms::MessageBox::Show("Por favor, seleccione un método de ordenamiento.");
		}

		comprobacion = 1;


	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		t = lector->ReadToEnd();
		button1->PerformClick();
	}
private: System::Void ordenados_txt_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
