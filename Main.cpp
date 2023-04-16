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
                cout << "Es Finger? (true = 1/false = 0): ";
                cin >> finger;

                try{
                sistema.agregarHuesped(nombre, email, finger);
                cout << "Datos guardados: ";
                sistema.mostrarHuespedes();
                }
                catch (const std::invalid_argument& e) {
                    // Captura la excepci�n y muestra el mensaje de error
                    std::cerr << "Error: " << e.what() << '\n';
                }


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

                try{
                sistema.agregarHabitacion(tipoHabitacion, numeroHabitacion, precioNoche);
                }
                catch (const std::invalid_argument& e) {
                    // Captura la excepci�n y muestra el mensaje de error
                    std::cerr << "Error: " << e.what() << '\n';
                }
                cout << "Desea seguir en el programa Y/N " << endl;
                cin >> palabra;
                if (palabra == "N" || palabra == "n") {
                    opcion = 7;
                }
                break;
            }
            case 3: {
                int cantHuespedes = 0;
                 sistema.obtenerHuespedes(cantHuespedes);
                cout<< "La cantidad de huespedes es:"<< cantHuespedes<<endl;

                break;
            }
            case 4: {
                int cantHabitaciones = 0;
                 sistema.obtenerHabitaciones(cantHabitaciones);
                cout<< "La cantidad de habitaciones son:"<< cantHabitaciones<<endl;
                break;
            }
            case 5:{

                //sist.registrarReserva();
                break;
            }
            case 6:{

                //sist.obtenerReserva();
                break;
            }
            case 7:{
                cout << "Saliendo del sistema "<< endl;
                break;
            }
            default:{
                cout << "Opcion no valida" << endl;
            }
            }
    }
    }

    //usen este comando en VSC para compilar el programa "g++ Main.cpp DTSistema.cpp DTHabitacion.cpp -o programa"
    // y luego "./programa"
