#include "DTHuesped.h"

<<<<<<< HEAD
DTHuesped::DTHuesped(string nombre, string mail, bool esFinger) {
=======
DTHuesped::DTHuesped(string nombre,string mail, bool esFinger) {
>>>>>>> 758bf1285afdfcf67b3b63333d69e279d7f8a9dd
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

<<<<<<< HEAD
bool DTHuesped::getEsFinger() const {
=======
bool DTHuesped::getesFinger() const {
>>>>>>> 758bf1285afdfcf67b3b63333d69e279d7f8a9dd
    return esFinger;
}

void DTHuesped::setNombre(string nombre) {
    this->nombre = nombre;
}

void DTHuesped::setEmail(string email) {
    this->email = email;
}

<<<<<<< HEAD
void DTHuesped::setEsFinger(bool esFinger) {
=======
void DTHuesped::setesFinger(bool esFinger) {
>>>>>>> 758bf1285afdfcf67b3b63333d69e279d7f8a9dd
    this->esFinger = esFinger;
}