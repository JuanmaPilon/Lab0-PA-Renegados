#include "Reserva.h"
Reserva::Reserva() {
}

Reserva::Reserva(int codigo, DTFecha checkin, DTFecha checkout, EstadoReserva estado, Habitacion* habitacion, Huesped* huesped) {
    this->codigo = codigo;
    this->checkin = checkin;
    this->checkout = checkout;
    this->estado = estado;
    this->habitacion = habitacion;
    this->huesped = huesped;
}

float calcularCosto{
// 21?
};