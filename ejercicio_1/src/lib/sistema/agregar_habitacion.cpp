////////////////////////////////////////////////////////////////

#include <stdexcept>

////////////////////////////////////////////////////////////////

#include "../sistema.h"

////////////////////////////////////////////////////////////////

void Sistema::agregarHabitacion (
	int    numero,
	float precio,
	int capacidad
){
	if( habitaciones_cantidad >= MAX_HABITACIONES )
		throw std::invalid_argument( "no hay lugar para mas habitaciones" );

	else
	if( Buscar_Habitacion( numero ) )
		throw std::invalid_argument( "Numero habitacion  ya en uso \n" );

	else
	{
		habitaciones[ habitaciones_cantidad ]
			= new Habitacion( numero, precio, capacidad );

		habitaciones_cantidad += 1;
	}
}

////////////////////////////////////////////////////////////////