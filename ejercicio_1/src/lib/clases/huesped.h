////////////////////////////////////////////////////////////////

#pragma once

////////////////////////////////////////////////////////////////

#include <vector>

////////////////////////////////////////////////////////////////

#include "../dt/string.h"
#include "./header.h"

////////////////////////////////////////////////////////////////

class Huesped
{
	private: string                nombre;
	private: string                   email;
	private: bool                esFinger;
	private: std::vector<Reserva*> reservas_iniciadas;
	private: std::vector<Reserva*> reservas_unidas;

	public:        Huesped  ( string, string, bool );
	public: string Nombre ();
	public: string Email  ();
	public: bool   EsFinger();
};

////////////////////////////////////////////////////////////////