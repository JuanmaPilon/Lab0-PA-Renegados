////////////////////////////////////////////////////////////////

#pragma once

////////////////////////////////////////////////////////////////

#include <vector>

////////////////////////////////////////////////////////////////

#include "./header.h"
#include "./reserva.h"
#include "../dt/reserva_grupal.h"

////////////////////////////////////////////////////////////////

class ReservaGrupal : Reserva
{
	private: std::vector<Huesped*> huespedes;

	//private: Huesped* huespedes ();

	private: string* Nombre_Huespedes();

	public: ReservaGrupal ( Huesped*, DtReservaGrupal* );

	public: DtReserva* Crear_Dt                   () override;
	public: float      calcularCosto () override;
	public: int darHabitacion();
};

////////////////////////////////////////////////////////////////