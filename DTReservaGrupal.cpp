#include "DTReservaGrupal.h"

DTReservaGrupal::DTReservaGrupal()
{

}

DTReservaGrupal::~DTReservaGrupal()
{

}

DTReservaGrupal::DTReservaGrupal(DTHuesped* huespedes, int codigo, DTFecha checkIn, DTFecha checkOut, EstadoReserva estado, float costo, int habitacion) : DTReserva( codigo,  checkIn,  checkOut,  estado, costo, habitacion)
{

}

float DTReservaGrupal::calcularCosto()
{
    return 0;
}

