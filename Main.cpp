#include <iostream>
#include <string>
#include "DTSistema.h"

using namespace std;

int main() {
    DTSistema sistema;

    int opcion = 0;
    string palabra = "Y";
    while (opcion != 7) {
        cout << " " << endl;
        cout << "MENU" << endl;
        cout << "Ingrese el numero correspondiente a la opcion seleccioanda" << endl;
        cout << "1. Agregar Huesped" << endl;
        cout << "2. Agregar Habitacion" << endl;
        cout << "3. Obtener Huespedes" << endl;
        cout << "4. Obtener Habitaciones" << endl;
        cout << "5. Registrar Reserva" << endl;
        cout << "6. Obtener Reservas " << endl;
        cout << "7. Salir" << endl;
        cout << " " << endl;
        cin >> opcion;

        switch (opcion) {
            case 1: {
                string nombre;
                cout << "Ingrese nombre: ";
                cin >> nombre;
                string email;
                cout << "Ingrese email: ";
                cin >> email;
                bool finger;
                cout << "Es Finger? (true/false): ";
                cin >> finger;
                sistema.agregarHuesped(nombre, email, finger);
                cout << "Desea seguir en el programa Y/N " << endl;
                cin >> palabra;
                if (palabra == "N" || palabra == "n") {
                    opcion = 7;
                }
                break;
            }
            case 2: {
                int tipoHabitacion;
                cout << "Ingrese la habitacion: ";
                cin >> tipoHabitacion;
                int numeroHabitacion;
                cout << "Ingrese el numero de habitacion: ";
                cin >> numeroHabitacion;
                double precioNoche;
                cout << "Ingrese el precio por noche: ";
                cin >> precioNoche;
                sistema.agregarHabitacion(tipoHabitacion, numeroHabitacion, precioNoche);
                cout << "Desea seguir en el programa Y/N " << endl;
                cin >> palabra;
                if (palabra == "N" || palabra == "n") {
                    opcion = 7;
                }
                break;
            }
            case 3: {
                // sistema.obtenerHuespedes();
                // cout << "Desea seguir en el programa Y/N " << endl;
                // cin >> palabra;
                // if (palabra == "N" || palabra == "n") {
                //     opcion = 7;
                }
                break;
            }
    }

    //usen este comando en VSC para compilar el programa "g++ Main.cpp DTSistema.cpp DTHabitacion.cpp -o programa" 
    // y luego "./programa"