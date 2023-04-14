#include "DTSistema.h"
#include "DTReserva.h"
#include "DTHuesped.h"
#include "DTHabitacion.h"

#include <iostream>

using namespace std;

int main() {
    int opcion = 0;
    string palabra;
    DTSistema sist;

    while (opcion != 7) {
        cout << " "<< endl;
        cout << "MENU" << endl;
        cout << "Ingrese el numero correspondiente a la opcion seleccioanda" << endl;
        cout << "1. Agregar Huesped" << endl;
        cout << "2. Agregar Habitacion" << endl;
        cout << "3. Obtener Huespedes" << endl;
        cout << "4. Obtener Habitaciones" << endl;
        cout << "5. Registrar Reserva"<< endl;
        cout << "6. Obtener Reservas "<< endl;
        cout << "7. Salir"<< endl;
        cout << " "<< endl;
        cin >> opcion;

        switch (opcion) {
            case 1:
                    sist.agregarHuesped("n","email",false);
                    sist.mostrarHuespedes();

                    cout << "Desea segiuir en el programa si/no "<< endl;

                    cin>> palabra;
                    if(palabra == "no"|| palabra != "si")
                    {
                        opcion = 7;
                    }


               break;

             case 2:
                sist.agregarHabitacion(1,2,3);
                sist.mostrarHabiatacion();

                cout << "Desea segiuir en el programa si/no "<< endl;

                    cin>> palabra;
                    if(palabra == "no"|| palabra != "si")
                    {
                        opcion = 7;
                    }

               break;
            case 3:
                int cantHuespedes;
                sist.obtenerHuespedes(cantHuespedes);
               break;
            case 4:

                int cantHabitaciones;
                sist.obtenerHabitaciones(cantHabitaciones);


                break;
            case 5:
                //sist.registrarReserva();
                break;
            case 6:
                //sist.obtenerReserva();
                break;
            case 7:
                cout << "pafuera miloko "<< endl;
                break;
            default:
                cout << "Opcion no valida" << endl;
        }


    }

    return 0;
}
