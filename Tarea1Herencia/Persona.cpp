#include "stdafx.h"
#include "Persona.h"

void Persona::imprimir(ostream & cadena)
{
	cadena << "Datos personales: " << "\nNombre: " << this->nombre << "\tNacionalidad: " << this->nacionalidad;
	cadena << "\nCedula: " << this->cedula << "\tEdad: " << this->edad << endl;
}

Persona::Persona()
{
}

Persona::Persona(char * nacionalidad, char * nombre, char * cedula, short int edad)
{
	this->nacionalidad = nacionalidad;
	this->nombre = nombre;
	this->cedula = cedula;
	this->edad = edad;
}

Persona::~Persona()
{
}

char * Persona::getNacionalidad()
{
	return this->nacionalidad;
}

char * Persona::getNombre()
{
	return this->nombre;
}

char * Persona::getCedula()
{
	return this->cedula;
}

short int Persona::getEdad()
{
	return this->edad;
}


ostream & operator<<(ostream & cadena, Persona & datos)
{
	datos.imprimir(cadena);
	return cadena;
}

ostream & operator<<(ostream & cadena, Persona * datos)
{
	datos->imprimir(cadena);
	return cadena;
}
