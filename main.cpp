#include <iostream>
#include "inventario.h"
#include "ingredientes.h"
#include "persona.h"
#include "cliente.h"
#include "trabajador.h"
using namespace std;

int main() {
    // Crear una instancia de Transaccion
    transaccion.set_numero_factura("F12345");
    transaccion.set_fecha_hora("2023-11-04 10:30:00");
    transaccion.set_subtotal(250.75);
    transaccion.set_metodo_pago("Tarjeta de crédito");
    transaccion.set_id_producto_servicio(101);
    transaccion.set_id_empleado(1001);
    transaccion.set_tipo_de_impuesto("IGV");
    transaccion.set_impuesto(18);
    transaccion.set_tipo_de_descuento("10% de descuento");
    transaccion.set_descuento(10);
    
    // Imprimir información de la transacción
    cout << "Información de la Transacción:" << endl;
    transaccion.print_transaccion_info();
    cout << endl;

    // Crear una instancia de Inventario
    Inventario inventario;
    inventario.set_id_producto(101);
    inventario.set_nombre("Producto A");
    inventario.set_cantidad_en_stock(50);
    inventario.set_precio_unitario(9.99);
    inventario.set_proveedor("Proveedor X");
    inventario.set_fecha_adquisicion("2023-11-01");
    inventario.set_categoria("Categoría A");

    // Imprimir información del producto en el inventario
    cout << "Información del Producto en el Inventario:" << endl;
    inventario.print_producto_info();
    cout << endl;

    // Crear una instancia de Ingredientes 
    Ingredientes ingrediente;
    ingrediente.set_id_producto(201);
    ingrediente.set_nombre("Ingrediente B");
    ingrediente.set_cantidad_en_stock(100);
    ingrediente.set_precio_unitario(2.50);
    ingrediente.set_proveedor("Proveedor Y");
    ingrediente.set_fecha_adquisicion("2023-10-15");
    ingrediente.set_categoria("Categoría B");
    ingrediente.set_fecha_caducidad("2024-03-01");

    // Imprimir información del ingrediente
    cout << "Información del Ingrediente en el Inventario:" << endl;
    ingrediente.print_ingrediente_info();

    Persona persona(01340024, "Juan", "Pérez", 963456789);
    Cliente cliente(72477337, "María", "Gómez", 987654321, 5);
    Trabajador trabajador(02404040, "Alberto", "Fernandez", 987654321, "cocinero",2000);

    cout << "\nInformación de la persona:" << endl;
    persona.mostrarInformacion();

    cout << "\nInformación del cliente:" << endl;
    cliente.mostrarInformacion();

    cout << "\nInformación del trabajador:" << endl;
    trabajador.mostrarInformacion();

    // Aplicar bonificación por rendimiento 
    trabajador.aplicarBonificacionPorRendimiento(10);

    // Aplicar bonificación por antigüedad 
    trabajador.aplicarBonificacionPorAntiguedad(7);

    // Mostrar información después de aplicar bonificaciones
    cout << "\nInformacion despues de aplicar bonificaciones:" << endl;
    trabajador.mostrarInformacion();

    return 0;
}