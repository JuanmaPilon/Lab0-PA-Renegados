#ifndef DTSISTEMA_H
#define DTSISTEMA_H
#define MAX_HUESPEDES 100
#define MAX_HABITACIONES 30
#define MAX_RESERVAS 100


/*Usamos el DTSistema como esturctura para tomarla como la clase que
gestiona todas las funciones relacionadas al hotel*/

#include <iostream>
#include <string>
#include <vector>
#include "DTHuesped.h"
#include "DTReserva.h"
#include "Habitacion.h"
#include "DTHabitacion.h"

using namespace std;

class DTSistema {
    private:
        vector<DTHuesped*> listaHuespedes;
        vector<DTHabitacion*> listaHabitaciones;


    public:
        void agregarHuesped(string nombre,string email,bool esFinger);
        void agregarHabitacion(int numero,float precio,int capacidad);
        DTHuesped** obtenerHuespedes(int& cantHuespedes);
        DTHabitacion** obtenerHabitaciones(int& cantHabitaciones);
        /*Aca iria obtenerReservas*/
        void registrarReserva(std::string email,DTReserva* reserva);
        void mostrarHuespedes();
        void mostrarHabiatacion();
};

#endif //DTSISTEMA_h
