////////////////////////////////////////////////////////////////

#include "./_menu_header.h"

////////////////////////////////////////////////////////////////

bool Menu::Obtener_Huespedes ()
{
	Borrar_Pantalla();
	Mostrar_Titulo( "Obtener Huesped" );

	{
		int               cantidad  = 0;
		DtHuesped** const huespedes = Sistema::obtenerHuespedes( cantidad );

		if( cantidad == 0 )
		{
			std:: cout << "No hay huespedes\n";
		}
		else
		{

			std::cout
				<< std::setw(  2 ) << std::right << "#" << "   "
				<< std::setw( 20 ) << std::left  << "nombre" << " "
				<< std::setw(  3 ) << std::right << "email"
				<< "\n\n";

			for( int i = 0; i < cantidad; i += 1 )
			{
				DtHuesped* const huesped = huespedes[ i ];

				std::cout
					<< std::setw(  2 ) << std::right << i+1 << " - "
					<< std::setw( 20 ) << std::left  << huesped->nombre << " "
					<< std::setw(  3 ) << std::right << huesped->email
					<< "\n";

				delete huesped;
			}
		}

		delete[] huespedes;
	}

	std::cout << "\n";
	Ingresar::Enter();

	return true;
}

////////////////////////////////////////////////////////////////