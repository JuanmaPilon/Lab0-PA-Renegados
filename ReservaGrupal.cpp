#include "Reserva.h"
#include "ReservaGrupal.h"

float calcularCosto(){
//23 ?
};

ReservaGrupal::ReservaGrupal()
{

}

ReservaGrupal::~ReservaGrupal()
{

}

ReservaGrupal::ReservaGrupal(int codigo, DTFecha checkIn, DTFecha checkOut, EstadoReserva estado) : Reserva( codigo,  checkIn,  checkOut,  estado,  habitacion, huesped)
{

}

float ReservaGrupal::calcularCosto()
{
    return 0;
};

