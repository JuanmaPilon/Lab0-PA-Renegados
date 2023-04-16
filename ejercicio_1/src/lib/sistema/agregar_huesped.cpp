////////////////////////////////////////////////////////////////

#include <stdexcept>

////////////////////////////////////////////////////////////////

#include "../sistema.h"

////////////////////////////////////////////////////////////////

void Sistema::agregarHuesped (
	string nombre,
	string    email,
	bool esFinger
){
	if( huespedes_cantidad >= MAX_HUESPEDES )
		throw std::invalid_argument( "no hay lugar para mas huespedes" );

	else
	if( Buscar_Huesped( email ) )
		throw std::invalid_argument( "Email ya en uso \n" );

	else
	{
		huespedes[ huespedes_cantidad ]
			= new Huesped( nombre, email, esFinger );

		huespedes_cantidad += 1;
	}
}

////////////////////////////////////////////////////////////////