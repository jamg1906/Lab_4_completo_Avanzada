#include "Ordenamientos.h"


void Ordenamientos::BubbleSort(Pokemon *Vector_Pokemones, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (Vector_Pokemones[j].National_number > Vector_Pokemones[j + 1].National_number)
			{
				int temp = Vector_Pokemones[j].generacion;
				int temp2 = Vector_Pokemones[j].National_number;
				std::string temp3 = Vector_Pokemones[j].nombre_pokemon;
				Vector_Pokemones[j] = Vector_Pokemones[j + 1];
				Vector_Pokemones[j + 1].generacion = temp;
				Vector_Pokemones[j + 1].National_number = temp2;
				Vector_Pokemones[j + 1].nombre_pokemon = temp3;
			}
		}
	}
}

int* Ordenamientos::QuickSort(int Vector_numeros[], int low, int high)
{
	if (low < high)
	{
		int pi = partition(Vector_numeros, low, high);
		QuickSort(Vector_numeros, low, pi - 1);
		QuickSort(Vector_numeros, pi + 1, high);
	}
	int* r = Vector_numeros;
	return r;
}


int Ordenamientos::partition(int arr[], int low, int high)
{
	int pivot = arr[high];
	int i = (low - 1);
	for (int j = low; j <= high - 1; j++)
	{
		if (arr[j] < pivot)
		{
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}

void Ordenamientos::swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

void Ordenamientos::StupidSort(Pokemon* Vector_Pokemones, int n)
{
	int contador = 0;
	bool estaOrdenado = false;
	System::Random^ elRandom = gcnew System::Random();
	int aleatorio1 = 0;
	int aleatorio2 = 0;
	while (contador < 10000 && estaOrdenado == false)
	{
		contador++;
		for (int i = 0; i < n; i++)
		{
			aleatorio1 = elRandom->Next(0, n);
			aleatorio2 = elRandom->Next(0, n);
			Pokemon temp = Vector_Pokemones[aleatorio1];
			Vector_Pokemones[aleatorio1] = Vector_Pokemones[aleatorio2];
			Vector_Pokemones[aleatorio2] = temp;
		}
		estaOrdenado = true;
		for (int i = 0; i < n - 1; i++)
		{
			if (Vector_Pokemones[i + 1].National_number != -1)
			{
				if (Vector_Pokemones[i].National_number > Vector_Pokemones[i + 1].National_number)
				{
					estaOrdenado = false;
				}
			}
		}
	}
	if (estaOrdenado == false)
	{
		System::Windows::Forms::MessageBox::Show("Se ordenaron los números de manera aleatoria 10,000 veces y no se pudo ordenar.");
	}
	else
	{
		System::Windows::Forms::MessageBox::Show("Stupid Sort realizó " + contador + " iteraciones y se pudo ordenar.");
	}
}
