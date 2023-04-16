////////////////////////////////////////////////////////////////

#pragma once

////////////////////////////////////////////////////////////////

#include "./dt/string.h"
#include "./dt/tipo_estado.h"

////////////////////////////////////////////////////////////////

class Menu
{
	private: static void Borrar_Pantalla ();
	private: static void Mostrar_Titulo  ( string );

	public: static void Principal           ();
	public: static bool Agregar_Huesped     ();
	public: static bool Agregar_Habitacion  ();
	public: static bool Agregar_Reserva     ();
	public: static bool Obtener_Huespedes   ();
	public: static bool Obtener_Habitaciones ();
	public: static bool Obtener_Reservas    ();
	public: static bool Salir               ();
};

////////////////////////////////////////////////////////////////