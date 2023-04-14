#ifndef DTHABITACION_H
#define DTHABITACION_H

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

#endif // DTHABITACION_H