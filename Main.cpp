// Codigo desarrollado por Naaman Huerga Perez (nhuerp00@estudiantes.unileon.es)
// Desarrollado bajo la licencia GNU GPLv3 (libre de modificar y compartir)

#include <iostream>
#include <string>
#include "Persona.h"
#include "Profesor.h"
#include "Alumno.h"

void calificar() {
	std::cout << "COMENZAMOS EL PROGRAMA Y CREAMOS NUESTRO PROFESOR Y ALUMNOS" << std::endl;
	Profesor pr("Miguel", "Rincon", "45672390F");
	Alumno al1("Jorge Javier", "Vazquez", "39078639J");
	Alumno al2("Kiko", "Matamoros", "46908421H");
	Alumno al3("Paz", "Padilla", "47902543R");

	pr.addAlumno(al1);
	pr.addAlumno(al2);
	pr.addAlumno(al3);

	pr.asignarNotaAlumno(al1, 8.9, 9.1);
	pr.asignarNotaAlumno(al2, 7.8, 5.5, 3.0);
	pr.asignarNotaAlumno(al3, 7.1, 2.0, 4.0);

	std::cout << "------------ALUMNO CON MEJOR NOTA------------" << std::endl;
	pr.imprimirAlumnoConMejorNota();

	bool dontExit = true;
	std::string dni;
	do {
		std::cout << "Introduce el DNI una persona para saber su informacion" << std::endl;
		std::cin >> dni;
		if (!pr.imprimirInformacion(dni)) {
			std::cout << "No hay nadie con este DNI, introduce otro." << std::endl;
		} else {
			dontExit = false;
		}
	} while (dontExit);

}


int main() {
	calificar();
	return 0;
}