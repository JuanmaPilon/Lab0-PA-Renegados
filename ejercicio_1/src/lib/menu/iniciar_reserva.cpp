////////////////////////////////////////////////////////////////

#include "./_menu_header.h"
#include "../dt/reserva_individual.h"
#include "../dt/reserva_grupal.h"

////////////////////////////////////////////////////////////////

DtReserva* Datos_Reserva (
	string const nombre
){
	DtReserva* datos = nullptr;

	int const codigo     			 = Ingresar::Positivo ( "Codigo: " );
	std::cout << "\n";
	DtFechaHora const checkIn        = Ingresar::Fecha    ( "Fecha Ingreso: " );
	std::cout << "\n";
	DtFechaHora const checkOut       = Ingresar::Fecha    ( "Fecha Salida: " );
	std::cout << "\n";
	std::cout << "Abierta - Cerrada - Cancelada";
	EstadoReserva estado 	 = Ingresar::Estado();
	std::cout << "\n";
	float const costo 				 = Ingresar::Precio ("Costo: ");
	std::cout << "\n";
	bool const grupal 				 = Ingresar::Bool ( "Grupal? (Si/No): " );
	std::cout << "\n";

	int const habitacion = Ingresar::Natural ("Habitacion: ");

	std::cout << "\n";

	if( grupal )
	{
		int const cantidad = Ingresar::Natural("Cantidad Huespedes: ");
		
		string* const huespedes   = Ingresar::Huespedes ( cantidad );

		datos = new DtReservaGrupal(
			nombre,
			codigo,
			checkIn,
			checkOut,
			estado,
			costo,
			habitacion,
			huespedes
		);
	}

	else
	{
		bool const pagado = Ingresar::Bool( "Es Pagado (Si/No): " );
		
		std::cout << "\n";

		datos = new DtReservaIndividual(
			nombre,
			codigo,
			checkIn,
			checkOut,
			estado,
			costo,
			habitacion,
			pagado
		);
	}

	return datos;
}

////////////////////////////////////////////////////////////////

bool Menu::Agregar_Reserva ()
{
	Borrar_Pantalla();
	Mostrar_Titulo( "Agregar Reserva" );

	string     const nombre = Ingresar::Email ( "Email: " );
	//int     const numero   = Ingresar::Natural   ( "Habitacion:           " );
	DtReserva* const datos    = Datos_Reserva( nombre );


	std::cout << "\n";

	try
	{
		Sistema::agregarReservas( nombre, datos );
	}
	catch( std::invalid_argument exception )
	{
		std::cout << exception.what() << "!\n";
	}

	delete datos;

	std::cout << "\n";
	Ingresar::Enter();

	return true;
}

////////////////////////////////////////////////////////////////
