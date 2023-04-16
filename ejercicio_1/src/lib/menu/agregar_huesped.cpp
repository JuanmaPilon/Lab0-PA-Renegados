////////////////////////////////////////////////////////////////

#include "./_menu_header.h"

////////////////////////////////////////////////////////////////

bool Menu::Agregar_Huesped ()
{
	Borrar_Pantalla();
	Mostrar_Titulo( "Agregar Huesped" );

	string nombre   = Ingresar::Nombre();
	string email = Ingresar::Email();
	bool    esFinger       = Ingresar::Bool("Es finger (Si/No): ");

	std::cout << "\n";

	try
	{
		Sistema::agregarHuesped( nombre, email, esFinger );

		std::cout << "Huesped agregado!\n";
		std::cout << "\tNombre: " << nombre   << "\n";
		std::cout << "\tEmail: " << email << "\n";
		std::cout << "\tEs Finger: " << esFinger      << "\n";

	}
	catch( const std::invalid_argument exception )
	{
		std::cout << "Error: " << exception.what() << "\n";
	}

	std::cout << "\n";

	Ingresar::Enter();

	return true;
}

////////////////////////////////////////////////////////////////