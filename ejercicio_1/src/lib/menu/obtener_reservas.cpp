////////////////////////////////////////////////////////////////

#include "./_menu_header.h"
#include "../dt/reserva_individual.h"
#include "../dt/reserva_grupal.h"

////////////////////////////////////////////////////////////////

void Buscar_Reservas (
	DtReserva**& reservas,
	int&         cantidad,
	int       numero
){
	try
	{
		reservas = Sistema::obtenerReserva( numero, cantidad );
	}
	catch( std::invalid_argument exception )
	{
		std::cout << "Error: " << exception.what() << "!\n";
	}
}

////////////////////////////////////////////////////////////////

void Mostrar_Reservas (
	DtReserva** reservas,
	int         cantidad
){
	if( reservas == nullptr )
		return;

	else
	if( cantidad == 0 )
		std::cout << "No hay reservas\n";

	else
	for( int i = 0; i < cantidad; i += 1 )
	{
		DtReserva* reserva = reservas[ i ];

		std::cout << ( * reserva ) << "\n";

		delete reserva;
	}
}

////////////////////////////////////////////////////////////////

bool Menu::Obtener_Reservas ()
{
	Borrar_Pantalla();
	Mostrar_Titulo( "Obtener Reservas" );

	int         cantidad = 0;
	DtReserva** reservas = nullptr;
	int      numero   = Ingresar::Entero( );

	std::cout << "\n";

	Buscar_Reservas  ( reservas, cantidad, numero );
	Mostrar_Reservas ( reservas, cantidad );
	delete[]           reservas;

	std::cout << "\n";
	Ingresar::Enter();

	return true;
}

////////////////////////////////////////////////////////////////