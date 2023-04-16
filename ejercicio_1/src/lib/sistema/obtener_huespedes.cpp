////////////////////////////////////////////////////////////////

#include "../sistema.h"

////////////////////////////////////////////////////////////////

DtHuesped** Sistema::obtenerHuespedes (
	int& cantidad
){
	            cantidad  = huespedes_cantidad;
	DtHuesped** resultado = new DtHuesped* [ cantidad ];

	for( int i = 0; i < cantidad; i += 1 )
		resultado[ i ] = new DtHuesped
		{
			.nombre = huespedes[ i ]->Nombre(),
			.email     = huespedes[ i ]->Email(),
			.esFinger = huespedes[ i ]->EsFinger()
		};

	return resultado;
}

////////////////////////////////////////////////////////////////