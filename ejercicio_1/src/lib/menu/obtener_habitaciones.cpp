////////////////////////////////////////////////////////////////

#include <cmath>

////////////////////////////////////////////////////////////////

#include "./_menu_header.h"

////////////////////////////////////////////////////////////////

bool Menu::Obtener_Habitaciones ()
{
	Borrar_Pantalla();
	Mostrar_Titulo( "Obtener Habitaciones" );

	{
		int                  cantidad  = 0;
		DtHabitacion** const habitaciones = Sistema::obtenerHabitaciones( cantidad );

		if( cantidad == 0 )
		{
			std:: cout << "No hay habitaciones\n";
		}
		else
		{
			std::cout
				<< std::setw(  2 ) << std::right << "#" << "   "
				<< std::setw( 20 ) << std::left  << "Numero" << " "
				<< std::setw( 10 ) << std::left  << "Precio" << " "
				<< std::setw( 10 ) << std::right << "Capacidad"
				<< "\n\n";

			for( int i = 0; i < cantidad; i += 1 )
			{
				DtHabitacion* const habitacion = habitaciones[ i ];

				std::cout
					<< std::setw(  2 ) << std::right << i+1  << " - "
					<< std::setw( 20 ) << std::left  << habitacion->numero << " "
					<< std::setw( 10 ) << std::left  << habitacion->precio << " "
					<< std::setw( 10 ) << std::right <<habitacion->capacidad<< "\n";

				delete habitacion;
			}
		}

		delete[] habitaciones;
	}

	std::cout << "\n";
	Ingresar::Enter();

	return true;
}

////////////////////////////////////////////////////////////////