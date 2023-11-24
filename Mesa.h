#include <string>

class Mesa {
private:
    int numeroMesa;
    int capacidad;
    bool ocupada;
    std::string nombreCliente;

public:
    Mesa(int numero, int capacidad) : numeroMesa(numero), capacidad(capacidad), ocupada(false) {
        // Constructor de la clase
    }

    int getNumeroMesa() const {
        return numeroMesa;
    }

    int getCapacidad() const {
        return capacidad;
    }

    bool estaOcupada() const {
        return ocupada;
    }

    std::string getNombreCliente() const {
        return nombreCliente;
    }

    void ocuparMesa(const std::string& cliente) {
        if (!ocupada) {
            ocupada = true;
            nombreCliente = cliente;
        }
    }

    void desocuparMesa() {
        ocupada = false;
        nombreCliente = "";
    }
};

