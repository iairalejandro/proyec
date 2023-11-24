#include <iostream>
#include <string>

#include "Persona.h"
#include "Reservacion.h"
#include "Orden.h"


class Cliente : public Persona
{
    private:
        unsigned int idmiembro;
        std::string direccion;
        unsigned int puntos;
        std::string categoria;
        static unsigned int ultimoIDmiembro;

        std::vector<Reservacion> reservacionesC;
        std::vector<Orden> ordenesC;

        static int ultimoID;

        static unsigned int generarID()
        {
            return ++ultimoIDmiembro;
        }

    public:
        Cliente(unsigned int DNI, const std::string& Nombres, const std::string& Apellidos, unsigned int Telefono, int DiaC, int MesC, int AñoC, std::string EMail, std::string Direccion, unsigned int Puntos, unsigned int IDmiembro)
        : Persona(DNI, Nombres, Apellidos, Telefono, DiaC, MesC, AñoC, EMail), direccion (Direccion), puntos (Puntos)
        {
            
            IDmiembro = generarID();

        }


        // Setters
        void setDireccion (std::string Direccion)
        {
            direccion = Direccion;
        }
    


        // Getters
        
        std::string get_direccion () const
        {
            return direccion;
        }

        unsigned int get_puntos () const
        {
            return puntos;
        }

        unsigned int get_IDmiembro () const
        {
            return idmiembro;
        }

        // Función categoría del cliente

        void setCategoria (int PuntosCliente)
        {
            if (PuntosCliente <= 500)
            {
                categoria = "Miembro Junior.";
            }
            else if ( PuntosCliente > 500 && PuntosCliente <= 1150)
            {
                categoria = "Miembro Silver.";
            }
            else if ( PuntosCliente > 500 && PuntosCliente <= 2000)
            {
                categoria = "Miembro Gold.";
            }
            else
            {
                categoria = "Miembro Platinium.";
            }
        }

        void mostrarInformacion() const override
        {
            std::cout << "Cliente: " << getNombres() << getApellidos << "." <<std::endl;
            std::cout << "----------------------------------------------------------------" << std::endl;
            std::cout << "Documento Nacional de Identidad: " << getDNI() << std::endl;
            std::cout << "Cumpleaños: " << printCumpleaños() << std::endl;
            std::cout << "Teléfono: " << getNumeroTelefono() << std::endl;
            std::cout << "E-Mail: " << getEmail() << std::endl;
            std::cout << "Dirección: " << direccion << std::endl;
            std::cout << "ID de miembro: " << idmiembro << std::endl;
            std::cout << "Puntos Acumulados: " << puntos << std::endl;
            std::cout << "Categoria del miembro: " << categoria << std::endl;
        }


};
