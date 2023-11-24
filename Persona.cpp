#include <iostream>
#include <string>

#include "Persona.h"

using namespace std;

Persona :: Persona(unsigned int DNI, const std::string& Nombres, const std::string& Apellidos, unsigned int Telefono, int DiaC, int MesC, int AñoC, std::string EMail);
{
    this -> dni = DNI;
    this -> nombres = Nombres;
    this -> apellidos = Apellidos;
    this -> telefono = Telefono;
    this -> cumpleaños = Fecha(DiaC, MesC, AñoC);
    this -> email = EMAil;
    this -> id = ID;
}

// Métodos Set

void Persona::setDNI(unsigned int DNI) 
{
    this -> dni = DNI;
}

void Persona::setNombres(const string& Nombres) 
{
    this -> nombres = Nombres;
}

void Persona::setApellidos(const string& Apellidos) 
{
    this -> apellidos = Apellidos;
}

void Persona::setNumeroTelefono(unsigned int Telefono) 
{
    this -> telefono = Telefono;
}

void Persona::setCumpleaños(int DiaC, int MesC, int AñoC)
{
    this -> cumpleaños = Fecha(DiaC, MesC, AñoC);
}

void Persona::setEmail (std::string EMail)
{
    this -> email = EMail;
}

void Persona::setID (std::string ID)
{
    this -> id = ID;
}


// Métodos Get

unsigned int Persona::getDNI() const 
{
    return dni;
}

string Persona::getNombres() const 
{
    return nombres;
}

string Persona::getApellidos() const 
{
    return apellidos;
}

unsigned int Persona::getNumeroTelefono() const 
{
    return telefono;
}

Fecha Persona::getCumpleaños() const
{
    return cumpleaños;
}

std::string Persona::getEmail() const
{
    return email;
}

unsigned int Persona::getID() const
{
    return id;
}


ostream& operator<<(ostream& salida, const Persona& trabajador) {
    std::cout << "Trabajador: " << trabajador.nombres << trabajador.apellidos << "." << std::endl;
    std::cout << "----------------------------------------------------------------";
    std::cout << "Documento Nacional de Identidad: " << trabajador.dni << std::endl;
    std::cout << "Cumpleaños: " << trabajador.cumpleaños << std::endl;
    std::cout << "Teléfono: " << trabajador.telefono << std::endl;
    std::cout << "E-Mail: " << trabajador.email << std::endl;
    std::cout << "ID: " << trabajador.id << std::endl;
}


// Métodos Delete

void Persona::deletePersona() 
{
    this -> dni = 0;
    this -> nombres = "";
    this -> apellidos = "";
    this -> cumpleaños = Fecha(0, 0, 0);
    this -> telefono = 0;
    this -> email = EMail;
}