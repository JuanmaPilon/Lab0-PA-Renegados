#ifndef DTSISTEMA_H
#define DTSISTEMA_H

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


    public:
        void agregarHuesped(string nombre,string email,bool esFinger);

};

#endif //DTHOTEL_H