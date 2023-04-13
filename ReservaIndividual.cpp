#include "Reserva.h"
#include "ReservaIndividual.h"

float calcularCosto(){
//22 ?
};

ReservaIndividual::ReservaIndividual()
{

}

ReservaIndividual::~ReservaIndividual()
{

}

ReservaIndividual::ReservaIndividual(bool pagado, int codigo, DTFecha checkIn, DTFecha checkOut, EstadoReserva estado) : Reserva( codigo,  checkIn,  checkOut,  estado , habitacion, huesped)
{
    this->pagado=pagado;
}

bool ReservaIndividual::getPagado()
{
    return this->pagado;
}

void ReservaIndividual::setPagado(bool pagado)
{
    this->pagado=pagado;
}

float ReservaIndividual::calcularCosto()
{
    return 0;
}

