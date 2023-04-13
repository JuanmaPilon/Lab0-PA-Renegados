#include "DTReservaIndividual.h"

DTReservaIndividual::DTReservaIndividual()
{

}

DTReservaIndividual::~DTReservaIndividual()
{

}

DTReservaIndividual::DTReservaIndividual(int codigo, DTFecha& checkIn, DTFecha& checkOut, const EstadoReserva estado, float costo, int habitacion, bool pagado) : DTReserva( codigo,  checkIn,  checkOut,  estado, costo, habitacion)
{
    this->pagado=pagado;
}

bool DTReservaIndividual::getPagado()const
{
    return this->pagado;
}

void DTReservaIndividual::setPagado(bool pagado)
{
    this->pagado=pagado;
}

float DTReservaIndividual::calcularCosto()
{
    return 0;
}
