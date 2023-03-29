#include "DTHabitacion.h"

DTHabitacion::DTHabitacion(int num,float precio,int cap) {
    numero = num;
    precioNoche = pre;
    capacidad = cap;
}

int DTHabitacion::getNumero() const {
    return numero;
}

float DTHabitacion::getPrecioNoche() const {
    return precio;
}

int DTHabitacion::getCapacidad() const {
    return capacidad;
}

/*No le puse setters ya que los precios y de habitaciones y esas cosas
no las podemos settear nosotros, si se llegara a necesitar si los agrego igual*/