////////////////////////////////////////////////////////////////

#include "./huesped.h"
#include "./reserva_individual.h"
#include "../dt/reserva_individual.h"

////////////////////////////////////////////////////////////////

ReservaIndividual::ReservaIndividual (
	Huesped*             const huesped,
	DtReservaIndividual* const datos
){
	this->huesped                 = huesped;
	this->codigo				  = datos->codigo;
	this->checkIn                 = datos->checkIn;
	this->checkOut                = datos->checkOut;
	this->estado                  = datos->estado;
	this->pagado				  = datos->pagado;
	

}

////////////////////////////////////////////////////////////////

int ReservaIndividual::darHabitacion()
{
	int habitacion;
	return habitacion;
}

float ReservaIndividual::calcularCosto ()
{
	int costo;
	return costo;
}

////////////////////////////////////////////////////////////////

DtReserva* ReservaIndividual::Crear_Dt ()
{
	return (DtReserva*) new DtReservaIndividual(
		huesped->Nombre(),
		codigo,
		checkIn,
		checkOut,
		estado,
		calcularCosto(),
		darHabitacion(),
		pagado
	);
}

////////////////////////////////////////////////////////////////