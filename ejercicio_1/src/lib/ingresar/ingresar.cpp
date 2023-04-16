////////////////////////////////////////////////////////////////

#include <iostream>

////////////////////////////////////////////////////////////////

#include "../ingresar.h"

////////////////////////////////////////////////////////////////

string Ingresar::Texto ()
{
	string texto;
	std::getline( std::cin, texto );
	return texto;
}

////////////////////////////////////////////////////////////////

int Ingresar::Entero ()
{
	try
	{
		size_t       largo;
		string const texto  = Ingresar::Texto();
		int    const numero = std::stoi( texto, &largo );

		if( largo != texto.size() )
			throw std::invalid_argument( "valor invalido" );
		else
			return numero;
	}
	catch( std::exception exception )
	{
		throw std::invalid_argument( "valor invalido" );
	}
}

////////////////////////////////////////////////////////////////

int Ingresar::Entero_Entre (
	string const mensaje,
	int    const min,
	int    const max
){
	while( true )
	{
		try
		{
			std::cout << mensaje ;

			int const numero = Ingresar::Entero();

			if( numero < min
			or  numero > max )
				throw std::invalid_argument( "valor invalido" );
			else
				return numero;
		}
		catch( std::invalid_argument exception )
		{
			std::cout << "Error: " << exception.what() << "!\n";
		}
	}
}

////////////////////////////////////////////////////////////////

int Ingresar::Real ()
{
	try
	{
		size_t       largo;
		string const texto  = Ingresar::Texto();
		int    const numero = std::stof( texto, &largo );

		if( largo != texto.size() )
			throw std::invalid_argument( "valor invalido" );
		else
			return numero;
	}
	catch( std::exception exception )
	{
		throw std::invalid_argument( "valor invalido" );
	}

}

////////////////////////////////////////////////////////////////

int Ingresar::Opcion ()
{
	try
	{
		return Ingresar::Entero();
	}
	catch( std::invalid_argument exception )
	{
		return - 1;
	}
}

////////////////////////////////////////////////////////////////

int Ingresar::Entero_Valido ()
{
	while( true )
		try
		{
			return Ingresar::Entero();
		}
		catch( std::exception exception )
		{
			std::cout << "Error: numero invalido!\n";
		}
}

////////////////////////////////////////////////////////////////

int Ingresar::Positivo(
	string const mensaje = ""
){
	std::cout << mensaje ;

	int const numero = Ingresar::Entero();

	if( numero < 0 )
		throw std::invalid_argument( "" );
	else
		return numero;
}

////////////////////////////////////////////////////////////////

int Ingresar::Natural (
	string const mensaje
){
	while( true )
		try
		{
			std::cout << mensaje ;

			int const numero = Ingresar::Entero();

			if( numero < 1 )
				throw std::invalid_argument( "" );
			else
				return numero;
		}
		catch( std::exception exception )
		{
			std::cout << "Error: numero invalido!\n";
		}
}

////////////////////////////////////////////////////////////////

void Ingresar::Enter ()
{
	do
	{
		std::cout << "Presionar Enter para continuar \n";
	}
	while( std::cin.get() != '\n' );
}

////////////////////////////////////////////////////////////////

string Ingresar::Texto_Minimo (
	unsigned int const minimo
){
	string const texto = Ingresar::Texto();

	string const mensaje_error
		= "minimo "
		+ std::to_string( minimo )
		+ " caracteres";

	if( texto.size() < minimo )
		throw std::invalid_argument( mensaje_error );

	return texto;
}

////////////////////////////////////////////////////////////////

string Ingresar::Email(
	string const mensaje
){
	while( true )
	{
		try
		{
			std::cout << mensaje ;
			return Ingresar::Texto_Minimo( 3 );
		}
		catch( std::invalid_argument exception )
		{
			std::cout << "Error: " << exception.what() << "! \n";
		}
	}
}

////////////////////////////////////////////////////////////////

string Ingresar::Contrasena ()
{
	while( true )
	{
		try
		{
			std::cout << "Contraseña: ";
			return Ingresar::Texto_Minimo( 3 );
		}
		catch( std::invalid_argument exception )
		{
			std::cout << "Error: " << exception.what() << "! \n";
		}
	}
}

////////////////////////////////////////////////////////////////

int Ingresar::Edad ()
{
	while( true )
	{
		try
		{
			std::cout << "Edad: ";
			int edad = Ingresar::Positivo();
			return edad;
		}
		catch( std::exception exception )
		{
			std::cout << "Error: edad invalida!\n";
		}
	}
}

////////////////////////////////////////////////////////////////

string Ingresar::Nombre (
	string const mensaje
){
	while( true )
	{
		try
		{
			std::cout << mensaje ;
			return Ingresar::Texto_Minimo( 1 );
		}
		catch( std::invalid_argument exception )
		{
			std::cout << "Error: " << exception.what() << "! \n";
		}
	}
}

////////////////////////////////////////////////////////////////

string Ingresar::Minuscula (
	string texto
){
	for( char& each : texto )
	{
		each = tolower( each );
	}
	return texto;
}

////////////////////////////////////////////////////////////////

void Mostrar_EstadoReserva ()
{
	int const cantidad_EstadoReserva = sizeof(estados) / sizeof(char*);

	std::cout << "( ";

	int i = 0;
	while( i < cantidad_EstadoReserva )
		std::cout << estados[ i ] << ", ";

	std::cout << estados[ i ];
	std::cout << " )";
}

////////////////////////////////////////////////////////////////

EstadoReserva Ingresar::Estado ()
{
	while( true )
	{
		//Mostrar_EstadoReserva();

		std::cout << "Reserva: ";

		string const texto     = Ingresar::Texto();
		string const minuscula = Ingresar::Minuscula( texto );
		try
		{
			for( int i = 0; i < sizeof(estados)/sizeof(char*); i += 1 )
				if( estados[ i ] == minuscula )
					return EstadoReserva( i );

			throw std::invalid_argument( "Reserva desconocida" );
		}
		catch( std::invalid_argument exception )
		{
			std::cout << "Error: " << exception.what() << "! \n";
		}
	}
}

////////////////////////////////////////////////////////////////

bool Ingresar::Bool(
	string const mensaje
){
	while( true )
	{
		std::cout << mensaje ;

		string const texto     = Ingresar::Texto();
		string const minuscula = Ingresar::Minuscula( texto );

		if( minuscula == "si" )
			return true;
		else
		if( minuscula == "no" )
			return false;
		else
			std::cout << "Error: valor invalido!\n";
	}
}

////////////////////////////////////////////////////////////////

float Ingresar::Precio (
	string const mensaje = "Precio: "
){
	while( true )
	{
		try
		{
			std::cout << mensaje ;

			float const precio  = Ingresar::Real();

			if( precio < 0 )
				throw std::invalid_argument( "valor invalido" );
			else
				return precio;
		}
		catch( std::invalid_argument exception )
		{
			std::cout << "Error: " << exception.what() << "!\n";
		}
	}
}

////////////////////////////////////////////////////////////////

DtFechaHora Ingresar::Fecha (
	string const mensaje = "Fecha: "
){
	int const anio   = Ingresar::Entero_Entre ( "(Fecha) Año:  ", 1990, 3000 );
	int const mes    = Ingresar::Entero_Entre ( "(Fecha) Mes:  ",    1,   12 );
	int const dia    = Ingresar::Entero_Entre ( "(Fecha) Dia:  ",    1,   31 );

	return DtFechaHora
	{
		.dia    = dia,
		.mes    = mes,
		.anio   = anio
	};
}

////////////////////////////////////////////////////////////////

string* Ingresar::Huespedes (
	int const cantidad
){
	string const mensaje = "Huespedes: ";
	string* huespedes = new string [ cantidad ];

	for( int i = 0; i < cantidad; i += 1 )
		huespedes[ i ] = Ingresar::Nombre( mensaje );

	return huespedes;
}

int Ingresar::Numero(
	int const num
){
	while( true )
	{
		try
		{
			std::cout << num ;
			return num;
		}
		catch( std::invalid_argument exception )
		{
			std::cout << "Error: " << exception.what() << "! \n";
		}
	}
}

////////////////////////////////////////////////////////////////
