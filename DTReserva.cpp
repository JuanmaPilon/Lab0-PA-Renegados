#include "DTReserva.h"
DTReserva::DTReserva()
{

}

DTReserva::~DTReserva()
{

}

DTReserva::DTReserva(int codigo, DTFecha& checkIn, DTFecha& checkOut,const EstadoReserva estado, float costo, int habitacion)
{
    this->codigo=codigo;
    this->estado=estado;
    int dia1=checkIn.getDia();
    int mes1=checkIn.getMes();
    int anio1=checkIn.getAnio();
    int dia2=checkOut.getDia();
    int mes2=checkOut.getMes();
    int anio2=checkOut.getAnio();
    this->checkIn=*new DTFecha(dia1,mes1, anio1);
    this->checkOut=*new DTFecha(dia2,mes2, anio2);
    // this->checkIn=checkIn;
    // this->checkOut=checkOut;
    this->costo=costo;
    this->habitacion=habitacion;


}

int DTReserva::getCodigo()const
{
    return this->codigo;
}

EstadoReserva DTReserva::getEstado()const
{
    return this->estado;
}

float DTReserva::getCosto()const
{
    return this->costo;
}

DTFecha DTReserva::getCheckIn()const
{
    return this->checkIn;
}

DTFecha DTReserva::getCheckOut()const
{
    return this->checkOut;
}

int DTReserva::getHabitacion()const
{
    return this->habitacion;
}

void DTReserva::setCodigo(int codigo)
{
    this->codigo=codigo;
}

void DTReserva::setEstado(EstadoReserva reserva)
{
    this->estado=estado;
}

/*void DtReserva::setCheckIn(DtFecha checkIn)
{
    this->checkIn=checkIn;
}

void DtReserva::setCheckOut(DtFecha checkOut)
{
    this->checkOut=checkOut;
}
*/
void DTReserva::setCosto(float costo)
{
    this->costo=costo;
}

void DTReserva::setHabitacion(int Habitacion)
{
    this->habitacion=Habitacion;
}