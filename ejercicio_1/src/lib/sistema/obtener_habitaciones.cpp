////////////////////////////////////////////////////////////////

#include "../sistema.h"

////////////////////////////////////////////////////////////////

DtHabitacion** Sistema::obtenerHabitaciones (
	int& cantidad
){
	               cantidad  = habitaciones_cantidad;
	DtHabitacion** resultado = new DtHabitacion* [ cantidad ];

	for( int i = 0; i < cantidad; i += 1 )
		resultado[ i ] = habitaciones[ i ]->Crear_Dt();

	return resultado;
}

////////////////////////////////////////////////////////////////