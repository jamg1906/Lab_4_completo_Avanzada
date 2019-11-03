#pragma once
#include <stdio.h>
#include <string>
#include <iostream>

using namespace System;
using namespace System::IO;
using namespace System::Runtime::InteropServices;
class Pokemon
{
public:
	int generacion = -1;
	int National_number = -1;
	std::string nombre_pokemon = "";

public:
	System::String^ MostrarPokemon(Pokemon P);

public:
	Pokemon();
	~Pokemon();
};


