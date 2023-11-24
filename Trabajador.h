#include <string>
#include <iostream>

#include "Persona.h"

class Trabajador : public Persona
{
  private:
    unsigned int idtrabajador;
    std::string puesto;
    double tarifa;
    double horas;
    double salario = tarifa*horas ;

  public:
    Trabajador(unsigned int DNI, const std::string& Nombres, const std::string& Apellidos, unsigned int Telefono, int DiaC, int MesC, int AñoC, std::string EMail, unsigned int IDtrabajador, std::string Puesto, double Tarifa, double Horas)
    : Persona(DNI, Nombres, Apellidos, Telefono, DiaC, MesC, AñoC, EMail), idtrabajador (IDtrabajador), puesto (Puesto), tarifa (Tarifa), horas, (Horas) {}

    void setPuesto(std::string Puesto)
    {
      puesto = Puesto;
    }

    std::string getPuesto() const
    {
      return puesto;
    }

    int getIDtrabajador() const
    {
      return idtrabajador;
    }

    int getSalario() const
    {
      return salario;
    }

    friend ostream& operator<<(ostream& salida, const Persona& trabajador);

};

/*
ostream& operator<<(ostream& salida, const Persona& trabajador) {
    std::cout << "Trabajador: " << trabajador.nombres << apellidos << "." <<std::endl;
    std::cout << "----------------------------------------------------------------";
    std::cout << "Documento Nacional de Identidad: " << dni << std::endl;
    std::cout << "Cumpleaños: " << printCumpleaños() << std::endl;
    std::cout << "Teléfono: " << printNumeroTelefono << std::endl;
    std::cout << "E-Mail: " << printEmail << std::endl;
    std::cout << "ID: " << idtrabajador << std::endl;
    std::cout << "Puesto: " << puesto << std::endl;
    std::cout << "Tarifa por hora: " << tarifa << std::endl;
    std::cout << "Horas trabajadas este mes: " << horas << std::endl;
    std::cout << "Salario: " << salario << std::endl;
}

*/