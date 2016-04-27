#pragma once

#include "Persona.h"

class Estudiante : public Persona
{
private:

	virtual void imprimir(ostream &);

protected:
	char * institucion;
	char * carne;


public:
	Estudiante();

	Estudiante(char *, char *, char *, short int, char *, char *);

	~Estudiante();

};