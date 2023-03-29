#include "DTHuesped.h"

DTHuesped::DTHuesped(string nombre,string mail, bool esFinger) {
    this->nombre = nombre;
    this->email = email;
    this->esFinger = esFinger;
}

string DTHuesped::getNombre() const {
    return nombre;
}

string DTHuesped::getEmail() const {
    return email;
}

bool DTHuesped::getesFinger() const {
    return esFinger;
}

void DTHuesped::setNombre(string nombre) {
    this->nombre = nombre;
}

void DTHuesped::setEmail(string email) {
    this->email = email;
}

void DTHuesped::setesFinger(bool esFinger) {
    this->esFinger = esFinger;
}