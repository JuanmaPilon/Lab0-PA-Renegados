////////////////////////////////////////////////////////////////

#include "./reserva_grupal.h"



////////////////////////////////////////////////////////////////

DtReservaGrupal::DtReservaGrupal (
	string      const nombre,
	int codigo,
	DtFechaHora const checkIn,
	DtFechaHora const checkOut,
	EstadoReserva       const estado,
	float        const costo,
	int const habitacion,
	string*     const huespedes
){
	this->nombre                = nombre;
	this->codigo = codigo,
	this->checkIn                   = checkIn;
	this->checkOut                   = checkOut;
	this->estado                = estado;
	this->costo       = costo;
	this->habitacion = habitacion;
	this->huespedes = huespedes;
}

////////////////////////////////////////////////////////////////

DtReservaGrupal::~DtReservaGrupal ()
{
	delete [] huespedes;
}

////////////////////////////////////////////////////////////////