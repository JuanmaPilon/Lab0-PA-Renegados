////////////////////////////////////////////////////////////////

#include "./habitacion.h"

////////////////////////////////////////////////////////////////

Habitacion::Habitacion (
	int    numero,
	float precio,
	int capacidad
){
	this->numero = numero;
	this->precio = precio;
	this->capacidad = capacidad;

}

////////////////////////////////////////////////////////////////

int    Habitacion::Numero () { return numero; }
float Habitacion::Precio () { return precio; }
int Habitacion::Capacidad () { return capacidad; }

////////////////////////////////////////////////////////////////

DtReserva** Habitacion::Reservas (
	int& cantidad
){
				cantidad  = reservas.size();
	DtReserva** resultado = new DtReserva* [ cantidad ];

	for( int i = 0; i < cantidad; i += 1 )
		resultado[ i ] = reservas[ i ]->Crear_Dt();

	return resultado;
}

////////////////////////////////////////////////////////////////

DtHabitacion* Habitacion::Crear_Dt ()
{
	return new DtHabitacion
	{
		.numero            = numero,
		.precio            = precio,
		.capacidad = capacidad
	};
}

////////////////////////////////////////////////////////////////

//float Habitacion::Precio ()
//{
//	float total = 0;
//
//	for( Reserva* const reserva : reservas )
//		reserva->calcularCosto();
//
//	return total;
//}

////////////////////////////////////////////////////////////////

void Habitacion::Agregar_Reserva (
	Reserva* const reserva
){
	this->reservas.push_back( reserva );
}

////////////////////////////////////////////////////////////////