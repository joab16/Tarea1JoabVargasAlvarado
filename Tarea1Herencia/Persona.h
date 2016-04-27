#pragma once

#include "stdafx.h"

using namespace std;

class Persona
{

	friend ostream & operator<<(ostream &, Persona &);
	friend ostream & operator<<(ostream &, Persona *);

private:
	virtual void imprimir(ostream &);

protected:
	char * nacionalidad;
	char * nombre;
	char * cedula;
	short int edad;	

public:
	Persona();

	Persona(char *, char *, char *, short int);

	~Persona();
	
	char * getNacionalidad();
	char * getNombre();
	char * getCedula();
	short int getEdad();
	
};

ostream & operator<<(ostream &, Persona &);
ostream & operator<<(ostream &, Persona *);