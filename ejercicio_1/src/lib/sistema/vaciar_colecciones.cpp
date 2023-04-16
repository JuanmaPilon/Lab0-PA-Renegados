////////////////////////////////////////////////////////////////

#include "../sistema.h"

////////////////////////////////////////////////////////////////

void Sistema::Vaciar_Colecciones ()
{
	for( int i = 0; i < huespedes_cantidad; i += 1 )
		delete huespedes[ i ];

	for( int i = 0; i < habitaciones_cantidad; i += 1 )
		delete habitaciones[ i ];

	for( int i = 0; i < reservas_cantidad; i += 1 )
		delete reservas[ i ];
}

////////////////////////////////////////////////////////////////