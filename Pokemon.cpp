#include "Pokemon.h"
#include <string>
#include <iostream>
using namespace System;
using namespace std;

Pokemon::Pokemon()
{
	National_number = -1;
	generacion = -1;
	nombre_pokemon = "";
}

Pokemon::~Pokemon()
{

}

String^ Pokemon::MostrarPokemon(Pokemon P)
{
	System::String^ res;
	res = "";
	String^ c = gcnew String(P.nombre_pokemon.c_str());
	res += c;
	res += "\t" + "Ndex: " + P.National_number + "    \t" + "Gen: " + P.generacion;
	return res;
}
