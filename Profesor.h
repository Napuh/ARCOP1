#ifndef PROFESOR_H
#define PROFESOR_H

#include "Persona.h"
#include "Alumno.h"
#include <vector>

class Profesor : public Persona
{
public:
	Profesor();
	Profesor(std::string n, std::string a, std::string d);
	void addAlumno(Alumno& a);
	void asignarNotaAlumno(Alumno& a, float n);
	void asignarNotaAlumno(Alumno& a, float n1, float n2);
	void asignarNotaAlumno(Alumno& a, float n1, float n2, float n3);
	void imprimirAlumnoConMejorNota();
	void imprimirListaAlumnos();
	bool imprimirInformacion(std::string dni);
	std::vector<Alumno> listaAlumnos;
};

#endif
