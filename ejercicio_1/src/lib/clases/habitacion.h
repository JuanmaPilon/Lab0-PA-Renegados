////////////////////////////////////////////////////////////////

#pragma once

////////////////////////////////////////////////////////////////

#include <vector>

////////////////////////////////////////////////////////////////

#include "../dt/string.h"

#include "../dt/reserva.h"
#include "../dt/habitacion.h"
#include "./reserva.h"

////////////////////////////////////////////////////////////////

class Habitacion
{
	private: int                numero;
	private: float              precio;
	private: int                capacidad; 
	private: std::vector<Reserva*>  reservas;

	

	public:               Habitacion      ( int, float, int );
	public: int        	  Numero          ();
	public: float     	  Precio          ();
	public: int     	  Capacidad          ();
	public: DtReserva**   Reservas        ( int& );
	public: DtHabitacion* Crear_Dt        ();
	public: void          Agregar_Reserva ( Reserva* );
};

////////////////////////////////////////////////////////////////