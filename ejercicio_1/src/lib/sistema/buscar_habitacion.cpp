////////////////////////////////////////////////////////////////

#include "../sistema.h"
#include "../ingresar.h"

////////////////////////////////////////////////////////////////

Habitacion* Sistema::Buscar_Habitacion (
	int const numero
){
	int const num = Ingresar::Numero( numero );

	for( Habitacion* const habitacion : habitaciones )
		if( habitacion != nullptr and Ingresar::Numero(habitacion->Numero() ) 
			== num)
			return habitacion;

	return nullptr;
}

////////////////////////////////////////////////////////////////
