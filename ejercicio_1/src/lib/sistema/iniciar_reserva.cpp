////////////////////////////////////////////////////////////////

#include <stdexcept>

////////////////////////////////////////////////////////////////

#include "../sistema.h"
#include "../dt/reserva.h"
#include "../dt/reserva_individual.h"
#include "../dt/reserva_grupal.h"
#include "../clases/reserva_individual.h"
#include "../clases/reserva_grupal.h"

////////////////////////////////////////////////////////////////

Reserva* Crear_Reserva (
	Habitacion* const habitacion,
	Huesped*    const huesped,
	DtReserva*  const datos
){
	Reserva* reserva = nullptr;

	if( dynamic_cast<DtReservaIndividual*>( datos ) )
		reserva = (Reserva*) new ReservaIndividual(
			huesped,
			(DtReservaIndividual*) datos
		);

	else
	if( dynamic_cast<DtReservaGrupal*>( datos ) )
		reserva = (Reserva*) new ReservaGrupal(
			huesped,
			(DtReservaGrupal*) datos
		);

	else
		throw std::invalid_argument( "Reserva invalida" );

	return reserva;
}

////////////////////////////////////////////////////////////////

void Sistema::agregarReservas (
	string     const nombre,
	DtReserva* const datos
){
	Huesped*    const huesped    = Buscar_Huesped    ( nombre );
	Habitacion* const habitacion = Buscar_Habitacion ( datos->habitacion );

	if( reservas_cantidad >= MAX_RESERVAS )
		throw std::invalid_argument( "no hay lugar para mas reservas" );

	else
	if( huesped == nullptr )
		throw std::invalid_argument( "Huesped no existe" );

	else
	if( habitacion == nullptr )
		throw std::invalid_argument( "Habitacion no existe" );

	else
	{
		Reserva* const reserva = Crear_Reserva(
			habitacion,
			huesped,
			datos
		);

		reservas[ reservas_cantidad ] = reserva;
		reservas_cantidad += 1;

		habitacion->Agregar_Reserva( reserva );
	}
}

////////////////////////////////////////////////////////////////