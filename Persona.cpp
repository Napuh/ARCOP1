#include <iostream>
#include <string>
#include "Persona.h"

Persona::Persona() {}
Persona::Persona(std::string n, std::string a, std::string d) {
	nombre = n;
	apellido = a;
	dni = d;
}
std::string Persona::getNombre() {
	return nombre;
}
std::string Persona::getApellido() {
	return apellido;
}
std::string Persona::getDni() {
	return dni;
}
void Persona::setNombre(std::string n) {
	nombre = n;
}
void Persona::setApellido(std::string a) {
	apellido = a;
}
void Persona::setDni(std::string d) {
	dni = d;
}