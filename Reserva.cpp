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
int Reserva :: getCodigo(){
    return codigo;
};
DTFecha Reserva :: getCheckIn(){
    return checkin;
};
DTFecha Reserva :: getCheckOut(){
    return checkout;
};
EstadoReserva Reserva :: getEstado(){
    return estado;
};
Habitacion Reserva :: getHabitacion(){
    return *habitacion;
};
Huesped Reserva :: getHuesped(){
    return *huesped;
};
