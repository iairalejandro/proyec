#ifndef PERSONA_H
#define PERSONA_H

#include <string>
#include <iostream>

#include "Fecha.h"

class Persona
{
    private:
        unsigned int dni;
        std::string nombres;
        std::string apellidos;
        int telefono;
        Fecha cumpleaños;
        std::string email;
        unsigned int id;

    public:
        Persona(unsigned int DNI, const std::string& Nombres, const std::string& Apellidos, unsigned int Telefono, int DiaC, int MesC, int AñoC, std::string EMail, int _id)
        : dni(DNI), nombres (Nombres), apellidos(Apellidos), telefono(Telefono), cumpleaños (DiaC, MesC, AñoC), email (EMail), id(_id){}


        friend ostream& operator<<(ostream&, const Persona&);

        // Métodos Set

        void setDNI(unsigned int DNI)
        {
            dni = DNI;
        }

        void setNombres(const string& Nombres)
        {
            nombres = Nombres;
        }

        void setApellidos(const string& Apellidos)
        {
            apellidos = Apellidos;
        }

        void setNumeroTelefono (unsigned int Telefono)
        {
            telefono = Telefono;
        }

        void setCumpleaños(int DiaC, int MesC, int AñoC)
        {
            cumpleaños = Fecha(DiaC, MesC, AñoC);
        }

        void setEmail (std::string EMail)
        {
            email = EMail;
        }

        void setID (int _id)
        {
            id = _id;
        }

        // Métodos Get

        unsigned int Persona::getDNI() const
        {
            return dni;
        }

        std::string Persona::getNombres() const
        {
            return nombres;
        }

        std::string Persona::getApellidos() const
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


        // Métodos Delete

        void delete()
        {
            dni = 0;
            nombres = "";
            apellidos = "";
            cumpleaños = Fecha(0, 0, 0);
            telefono = 0;
            email = "";
        }

        ~ Persona ()
        {
            std::cout << "La persona" << nombre << " se ha eliminado." << std::endl;
        }
    
};

#endif
