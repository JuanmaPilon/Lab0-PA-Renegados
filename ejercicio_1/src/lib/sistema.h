////////////////////////////////////////////////////////////////

#pragma once

////////////////////////////////////////////////////////////////

#include "./dt/huesped.h"
#include "./dt/habitacion.h"
#include "./dt/reserva.h"

#include "./clases/huesped.h"
#include "./clases/habitacion.h"
#include "./clases/reserva.h"

////////////////////////////////////////////////////////////////

class Sistema
{
	private: static int const MAX_HUESPEDES   = 100;
	private: static int const MAX_HABITACIONES = 100;
	private: static int const MAX_RESERVAS    = 100;

	private: static Huesped*    huespedes   [ MAX_HUESPEDES ];
	private: static int         huespedes_cantidad;

	private: static Habitacion* habitaciones [ MAX_HABITACIONES ];
	private: static int         habitaciones_cantidad;

	private: static Reserva*    reservas    [ MAX_RESERVAS ];
	private: static int         reservas_cantidad;

	public: static Huesped*       Buscar_Huesped     ( string );
	public: static Habitacion*    Buscar_Habitacion  ( int );
	public: static void           Vaciar_Colecciones ();

	public: static void           agregarHuesped     ( string, string , bool );
	public: static void           agregarHabitacion  ( int, float, int );
	public: static void           agregarReservas     ( string, DtReserva* );
	public: static DtHuesped**    obtenerHuespedes   ( int& );
	public: static DtHabitacion** obtenerHabitaciones ( int& );
	public: static DtReserva**    obtenerReserva    ( int, int& );
};

////////////////////////////////////////////////////////////////