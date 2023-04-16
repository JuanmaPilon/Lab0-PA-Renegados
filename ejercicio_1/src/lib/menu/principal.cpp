////////////////////////////////////////////////////////////////

#include <vector>

////////////////////////////////////////////////////////////////

#include "./_menu_header.h"

////////////////////////////////////////////////////////////////

void Menu::Principal ()
{
	using Funcion = bool(*)();

	struct Opcion {
		string  nombre;
		Funcion funcion;
	};

	std::vector<Opcion> const opciones =
	{
		{ "Agregar Huesped     \n", Agregar_Huesped     },
		{ "Agregar Habitacion  \n", Agregar_Habitacion  },
		{ "Agregar Reserva     \n", Agregar_Reserva     },
		{ "Obtener Huespedes   \n", Obtener_Huespedes   },
		{ "Obtener Habitaciones \n", Obtener_Habitaciones },
		{ "Obtener Reservas    \n", Obtener_Reservas    },
		{ "Salir               \n", Salir               }
	};

	bool continuar = true;
	while( continuar )
	{
		Borrar_Pantalla();

		for( int i = 0; i < opciones.size(); i += 1 )
			std::cout << i+1 << " - " << opciones[ i ].nombre;
		std::cout << "\n";

		int opcion = Ingresar::Opcion();

		if( opcion >= 1
		and opcion <= opciones.size() )
			continuar = opciones[ opcion - 1 ].funcion();
	}
}

////////////////////////////////////////////////////////////////