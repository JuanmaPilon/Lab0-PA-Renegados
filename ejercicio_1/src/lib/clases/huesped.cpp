////////////////////////////////////////////////////////////////

#include "./huesped.h"

////////////////////////////////////////////////////////////////

Huesped::Huesped (
	string nombre,
	string email,
	bool esFinger
){
	this->nombre   = nombre;
	this->email       = email;
	this->esFinger = esFinger;
}

////////////////////////////////////////////////////////////////

string Huesped::Nombre () { return nombre;}
string Huesped::Email  () { return email;}
bool Huesped::EsFinger () { return esFinger;}

////////////////////////////////////////////////////////////////