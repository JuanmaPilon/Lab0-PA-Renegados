////////////////////////////////////////////////////////////////

#include "../sistema.h"
#include "../ingresar.h"

////////////////////////////////////////////////////////////////

Huesped* Sistema::Buscar_Huesped (
	string const email
){
	string const minuscula = Ingresar::Minuscula( email );

	for( Huesped* const huesped : huespedes )
		if( huesped != nullptr
		and Ingresar::Minuscula( huesped->Email() )
			== minuscula
		)
			return huesped;

	return nullptr;
}

////////////////////////////////////////////////////////////////