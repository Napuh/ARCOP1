#ifndef ALUMNO_H
#define ALUMNO_H

#include "Persona.h"
#include <vector>

class Alumno : public Persona
{
public:
	Alumno();
	Alumno(std::string n, std::string a, std::string d);
	float obtenerNotaMedia();
	void imprimirNotas();
	void asignarNota(float n);
	std::vector<float> listaNotas;
};

#endif
