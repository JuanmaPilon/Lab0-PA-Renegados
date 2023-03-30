#ifndef DTHABITACION_h
#define DTHABITACION_h

#include <string>

class DTHabitacion {
    private:
        int numero;
        float precioNoche;
        int capacidad;

    public:
        DTHabitacion(int num,float pre,int cap);


    int getNumero() const;
    float getPrecioNoche() const;
    int getCapacidad() const;

};

#endif