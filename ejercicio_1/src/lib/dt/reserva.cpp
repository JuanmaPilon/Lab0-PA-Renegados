////////////////////////////////////////////////////////////////

#include <iostream>

////////////////////////////////////////////////////////////////

#include "./reserva.h"
#include "./reserva_individual.h"
#include "./reserva_grupal.h"

////////////////////////////////////////////////////////////////

std::ostream& operator<< (
	std::ostream& stream,
	DtReserva&    reserva
){
	reserva.Mostrar( stream );

	return stream;
}

////////////////////////////////////////////////////////////////

void DtReservaIndividual::Mostrar (
	std::ostream& stream
){
	stream << "Huesped: " << this->nombre << "\n";

	stream
		<< "Tipo Reserva:     "
			<< "Individual"
			<< "\n"
		<< "Fecha Ingreso:    "
			<< this->checkIn.dia << "/"
			<< this->checkIn.mes << "/"
			<< this->checkIn.anio
			<< "\n"
		<< "Fecha Ingreso:    "
			<< this->checkOut.dia << "/"
			<< this->checkOut.mes << "/"
			<< this->checkOut.anio
			<< "\n"
		<< "Estado Reserva: "
			<< this->estado
			<< "\n\n" ;
	stream << "Costo: "<<this->costo << "\n";
	stream << "Habitacion: " <<this->habitacion;

	stream
		<< "Pagado?: "
		<< ( this->pagado ? "Si" : "No" )
		<< "\n" ;
}

////////////////////////////////////////////////////////////////

void DtReservaGrupal::Mostrar (
	std::ostream& stream
){
	stream << "Huesped: " << this->nombre << "\n";

	stream
		<< "Tipo Reserva:     "
			<< "Grupal"
			<< "\n"
		<< "Fecha Ingreso:    "
			<< this->checkIn.dia << "/"
			<< this->checkIn.mes << "/"
			<< this->checkIn.anio
			<< "\n"
		<< "Fecha Ingreso:    "
			<< this->checkOut.dia << "/"
			<< this->checkOut.mes << "/"
			<< this->checkOut.anio
			<< "\n"
		<< "Estado Reserva: "
			<< (this->estado)
			<< "\n\n" ;
	stream << "Costo: "<<this->costo << "\n";
	stream << "Habitacion: " <<this->habitacion;

	/*stream
		<< "Cantidad : "
			<< this->cantidadHuespedes
			<< "\n" ;


	int const cantidad = this->cantidadHuespedes;

	if( cantidad > 0 )
	{
		stream << "Huespedes: ";

		for( int i = 0; i < cantidad-1; i += 1 )
			stream
				<< this->huespedes[ i ]
				<< ", " ;

		stream
			<< this->huespedes[ cantidad - 1 ]
			<< "\n";
	}
	*/
}

////////////////////////////////////////////////////////////////