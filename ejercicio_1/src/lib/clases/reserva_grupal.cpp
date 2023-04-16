////////////////////////////////////////////////////////////////

#include "./huesped.h"
#include "./reserva_grupal.h"
#include "../dt/reserva_grupal.h"
#include "../sistema.h"

////////////////////////////////////////////////////////////////

ReservaGrupal::ReservaGrupal (
	Huesped*               const huespedes,
	DtReservaGrupal* const datos
){
	this->huesped                 = huesped;
	this->codigo				  = datos->codigo;
	this->checkIn                 = datos->checkIn;
	this->checkOut                = datos->checkOut;
	this->estado                  = datos->estado;

	float const cost = datos->costo;
	int const habitacion = datos->habitacion; 
	string* const nombres = datos->huespedes;

	/*for( int i = 0; i < cantidadHuesped; i += 1 ) ///usar cantidad de huespedes
	{
		Huesped* const huesped = Sistema::Buscar_Huesped( nombres[ i ] );

		if( huesped != nullptr )
			this->huespedes.push_back( huesped );
	}
	*/
}

////////////////////////////////////////////////////////////////

float ReservaGrupal::calcularCosto ()
{
	///calcular el costo grupal 30% off
}

////////////////////////////////////////////////////////////////

string* ReservaGrupal::Nombre_Huespedes ()
{
	int     const cantidad  = huespedes.size();
	string* const resultado = new string [ cantidad ];

	for( int i = 0; i < cantidad; i += 1 )
	{
		resultado[ i ] = huespedes[ i ]->Nombre();
	}

	return resultado;
}

int ReservaGrupal::darHabitacion()
{
	int habitacion;
	return habitacion;
}

////////////////////////////////////////////////////////////////

DtReserva* ReservaGrupal::Crear_Dt ()
{
	return (DtReserva*) new DtReservaGrupal(
		huesped->Nombre(),
		codigo,
		checkIn,
		checkOut,
		estado,
		calcularCosto(),
		darHabitacion(),
		Nombre_Huespedes()
	);
}

////////////////////////////////////////////////////////////////