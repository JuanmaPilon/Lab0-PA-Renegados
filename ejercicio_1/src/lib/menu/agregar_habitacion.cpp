////////////////////////////////////////////////////////////////

#include "./_menu_header.h"

////////////////////////////////////////////////////////////////

bool Menu::Agregar_Habitacion ()
{
	Borrar_Pantalla();
	Mostrar_Titulo( "Agregar Habitacion" );

	int    numero = Ingresar::Natural("Ingrese numero habitacion: ");
	float precio = Ingresar::Precio("Ingrese Precio: ");
	int capacidad = Ingresar::Natural("Ingrese capacidad: ");

	std::cout << "\n";

	try
	{
		Sistema::agregarHabitacion( numero, precio, capacidad );

		std::cout << "Habitacion agregada!\n";
		std::cout << "\tNumero: " << numero          << "\n";
		std::cout << "\tPrecio: " << precio << "\n";
		std::cout << "\tCapacidad: " << capacidad << "\n";
	}
	catch( std::invalid_argument exception )
	{
		std::cout << "Error: " << exception.what() << "\n";
	}

	std::cout << "\n";

	Ingresar::Enter();

	return true;
}

////////////////////////////////////////////////////////////////