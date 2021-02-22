#ifndef PERSONA_H
#define PERSONA_H
#include <string>

class Persona
{
public:
    Persona();
    Persona(std::string n, std::string a, std::string d);
    std::string getNombre();
    std::string getApellido();
    std::string getDni();
    void setNombre(std::string n);
    void setApellido(std::string a);
    void setDni(std::string d);
private:
    std::string nombre;
    std::string apellido;
    std::string dni;
};

#endif