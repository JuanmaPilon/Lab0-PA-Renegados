#include "DTHabitacion.h"


DTHabitacion::DTHabitacion(int num,float pre,int cap) {
    numero = num;
    precioNoche = pre;
    capacidad = cap;
}

int DTHabitacion::getNumero() const {
    return numero;
}

float DTHabitacion::getPrecioNoche() const {
    return precioNoche;
}

int DTHabitacion::getCapacidad() const {
    return capacidad;
}

