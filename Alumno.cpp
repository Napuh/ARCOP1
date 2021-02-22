#include <iostream>
#include <string>
#include "Alumno.h"

Alumno::Alumno() {
}

Alumno::Alumno(std::string n, std::string a, std::string d) {
	setNombre(n);
	setApellido(a);
	setDni(d);
}
float Alumno::obtenerNotaMedia() {
	//JAJAJAJAJJA
	float notaMedia = 0;
	for (int i = 0; i < listaNotas.size(); i++) {
		notaMedia += listaNotas[i];
	}
	return notaMedia / listaNotas.size();
}

void Alumno::imprimirNotas() {
	std::cout << "Notas del alumno " << getNombre() << " " << getApellido() << ":";
	for (int i = 0; i < listaNotas.size(); i++) {
		std::cout << listaNotas[i] << " ";
	}
	std::cout << std::endl;
	std::cout << "Nota media: " << obtenerNotaMedia();
	std::cout << std::endl;
	std::cout << "------------------------------------------------" << std::endl;
}
void Alumno::asignarNota(float n) {
	if (listaNotas.size() < 3) {
		listaNotas.push_back(n);
	}
}