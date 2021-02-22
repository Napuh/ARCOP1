#include <iostream>
#include <string>
#include "Profesor.h"

Profesor::Profesor() {
}

Profesor::Profesor(std::string n, std::string a, std::string d) {
	setNombre(n);
	setApellido(a);
	setDni(d);
}

void Profesor::addAlumno(Alumno& a) {
	listaAlumnos.push_back(a);
}

void Profesor::asignarNotaAlumno(Alumno& a, float n) {
	for (int i = 0; i < listaAlumnos.size(); i++) {
		if (listaAlumnos[i].getDni() == a.getDni()) {
			listaAlumnos[i].asignarNota(n);
		}
	}
}

void Profesor::asignarNotaAlumno(Alumno& a, float n1, float n2) {
	for (int i = 0; i < listaAlumnos.size(); i++) {
		if (listaAlumnos[i].getDni() == a.getDni()) {
			listaAlumnos[i].asignarNota(n1);
			listaAlumnos[i].asignarNota(n2);
		}
	}
}

void Profesor::asignarNotaAlumno(Alumno& a, float n1, float n2, float n3) {
	for (int i = 0; i < listaAlumnos.size(); i++) {
		if (listaAlumnos[i].getDni() == a.getDni()) {
			listaAlumnos[i].asignarNota(n1);
			listaAlumnos[i].asignarNota(n2);
			listaAlumnos[i].asignarNota(n3);
		}
	}
}

void Profesor::imprimirAlumnoConMejorNota() {
	Alumno a;
	float mejorNota = 0;
	for (int i = 0; i < listaAlumnos.size(); i++) {
		if (mejorNota < listaAlumnos[i].obtenerNotaMedia() && listaAlumnos[i].listaNotas.size() >= 3) {
			mejorNota = listaAlumnos[i].obtenerNotaMedia();
			a = listaAlumnos[i];
		}
	}
	std::cout << "El alumno con mejor nota media es: " << a.getNombre() << " " << a.getApellido() << " con una nota media de " << mejorNota << std::endl;
}

void Profesor::imprimirListaAlumnos() {
	for (int i = 0; i < listaAlumnos.size(); i++) {
		std::cout << listaAlumnos[i].getNombre() << " " << listaAlumnos[i].getApellido() << ", con DNI: " << listaAlumnos[i].getDni() << std::endl;
		listaAlumnos[i].imprimirNotas();
	}
}

bool Profesor::imprimirInformacion(std::string dni) {
	if (getDni() == dni) {
		std::cout << "Profesor: " << getNombre() << " " << getApellido() << " con DNI: " << getDni() << std::endl;
		std::cout << "------------LISTADO DE ALUMNOS------------" << std::endl;
		imprimirListaAlumnos();
		imprimirAlumnoConMejorNota();
		return true;
	} else {
		for (int i = 0; i < listaAlumnos.size(); i++) {
			if (listaAlumnos[i].getDni() == dni) {
				std::cout << listaAlumnos[i].getNombre() << " " << listaAlumnos[i].getApellido() << " con dni: " << listaAlumnos[i].getDni() << std::endl;
				listaAlumnos[i].imprimirNotas();
				return true;
			}
		}
	}
	return false;
}