#include "stdafx.h"
#include "Estudiante.h"

void Estudiante::imprimir(ostream & cadena)
{
	cadena << "Datos personales: " << "\nNombre: " << this->nombre << "\tNacionalidad: " << this->nacionalidad;
	cadena << "\nCedula: " << this->cedula << "\tEdad: " << this->edad;
	cadena << "\nInstitucion: " << this->institucion << "\tCarne: " << this->carne <<endl;
}

Estudiante::Estudiante()
{
}

Estudiante::Estudiante(char * nacionalidad, char * nombre, char * cedula, short int edad, char * institucion, char * carne) : Persona (nacionalidad, nombre, cedula, edad)
{
	this->institucion = institucion;
	this->carne = carne;
}

Estudiante::~Estudiante()
{
}