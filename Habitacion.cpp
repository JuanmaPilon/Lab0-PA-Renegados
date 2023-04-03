#include "Habitacion.h"

Habitacion::Habitacion() {
}

Habitacion::Habitacion(int numero, float precio, int capacidad) {
    numero = numero;
    precio = precio;
    capacidad = capacidad;
}

//getters
int Habitacion::getNumero() const {
    return numero;
}
float Habitacion::getPrecio() const {
    return precio;
}
int Habitacion::getCapacidad() const {
    return capacidad;
}
//setters
 void Habitacion::setNumero(int numero) {
    this->numero = numero;
}
void Habitacion::setPrecio(float precio) {
    this->precio = precio;
}
void Habitacion::setCapacidad(int capacidad) {
    this->capacidad = capacidad;
}