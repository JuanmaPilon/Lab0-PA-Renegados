#include "DTHabitacion.h"

<<<<<<< HEAD
DTHabitacion::DTHabitacion(int num,float pre,int cap) {
=======
DTHabitacion::DTHabitacion(int num,float precio,int cap) {
>>>>>>> 758bf1285afdfcf67b3b63333d69e279d7f8a9dd
    numero = num;
    precioNoche = pre;
    capacidad = cap;
}

int DTHabitacion::getNumero() const {
    return numero;
}

float DTHabitacion::getPrecioNoche() const {
<<<<<<< HEAD
    return precioNoche;
=======
    return precio;
>>>>>>> 758bf1285afdfcf67b3b63333d69e279d7f8a9dd
}

int DTHabitacion::getCapacidad() const {
    return capacidad;
}

/*No le puse setters ya que los precios y de habitaciones y esas cosas
no las podemos settear nosotros, si se llegara a necesitar si los agrego igual*/