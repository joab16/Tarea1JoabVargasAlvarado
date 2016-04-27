// Tarea1Herencia.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Persona.h"
#include "Estudiante.h"

using namespace std;

void main()
{
	Persona * humano = new Persona("Tico", "Stephanie", "108450728", 20);
	Estudiante * universitario = new Estudiante("Tico", "Joab", "116210797", 20, "UCR", "B57487");

	cout << humano << endl;
	cout << universitario << endl;

	system("pause");
}

