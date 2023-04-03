#include "DTFecha.h"

DTFecha::DTFecha(int dd,int mm,int aaaa) {
    if (dd < 1 || dd > 31 || mm < 1 || mm > 12 || aaaa < 1900) {
        throw std::invalid_argument("Fecha invalida");
    }
    dia = dd;
    mes = mm;
    anio = aaaa;
}

int DTFecha::getDia() const {
    return dia;
}

int DTFecha::getMes() const{
    return mes;
}

int DTFecha::getAnio() const{
    return anio;
}

void DTFecha::setDia(int dd) {
    if(dd < 1 || dd > 31){
        throw std::invalid_argument("Dia Invalido");
    }
    dia = dd;
}

void DTFecha::setMes(int mm) {
    if(mm <1 || mm > 12) {
        throw std::invalid_argument("Mes Invalido");
    }
    mes = mm;
}

void DTFecha::setAnio(int aaaa) {
    if(aaaa < 1900) {
        throw std::invalid_argument("Anio Invalido");
    }
    anio = aaaa;
}
DTFecha::DTFecha() {
}
