#include "DTSistema.h"
#include "DTReserva.h"
#include "DTHuesped.h"

#include <iostream>

using namespace std;

int main() {
    int opcion = 0;
    while (opcion != 7) {
        cout << "MENU" << endl;
        cout << "Ingrese el numero correspondiente a la opcion seleccioanda" << endl;
        cout << "1. Agregar Huesped" << endl;
        cout << "2. Agregar Habitacion" << endl;
        cout << "3. Obtener Huespedes" << endl;
        cout << "4. Obtener Habitaciones" << endl;
        cout << "5. Registrar Reserva"<< endl;
        cout << "6. Obtener Reservas "<< endl;
        cout << "7. Salir"<< endl;
        cin >> opcion;
        
        switch (opcion) {
            case 1:
            
            case 2:
                
            case 3:
               
            case 4:
                
            case 5:
            
            case 6:

            case 7:
                cout << "pafuera miloko "<< endl;
                break;
            default:
                cout << "Opcion no valida" << endl;
                
        }
    }

    return 0;
}