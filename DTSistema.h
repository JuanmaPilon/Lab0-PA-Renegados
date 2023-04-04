#ifndef DTSISTEMA_H
#define DTSISTEMA_H
#define MAX_HUESPEDES 100


/*Usamos el DTSistema como esturctura para tomarla como la clase que
gestiona todas las funciones relacionadas al hotel*/

#include <iostream>
#include <string>
#include <vector>
#include <DTHuesped.h>

using namespace std;

class DTSistema {
    private:
        vector<DTHuesped*> listaHuespedes;
        vector<DTHabitacion*> listaHabitaciones;


    public:
        void agregarHuesped(string nombre,string email,bool esFinger);
        void agregarHabitacion(int numero,float precio,int capacidad);
        DTHuesped** obtenerHuespedes(int& cantHuespedes);
};

#endif //DTHOTEL_H