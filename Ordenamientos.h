#pragma once
#include "Pokemon.h"
class Ordenamientos
{
public:
	void BubbleSort(Pokemon Vector_Pokemones[], int n);
	int* QuickSort(int Vector_numeros[], int low, int high);
	void StupidSort(Pokemon* Vector_Pokemones, int n);
	void swap(int* a, int* b);
	int partition(int arr[], int low, int high);
};

