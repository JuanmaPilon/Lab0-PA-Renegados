////////////////////////////////////////////////////////////////

#include "./reserva_individual.h"


////////////////////////////////////////////////////////////////

DtReservaIndividual::DtReservaIndividual (
	string const nombre,
	int      const codigo,
	DtFechaHora const checkIn,
	DtFechaHora const checkOut,
	EstadoReserva       const estado,
	float        const costo,
	int const habitacion,
	bool const pagado
){
	this->nombre                	= nombre;
	this->checkIn                   = checkIn;
	this->checkOut                  = checkOut;
	this->estado                	= estado;
	this->costo 					= costo;
	this->habitacion 				= habitacion;
	this->pagado                    = pagado;
}

////////////////////////////////////////////////////////////////