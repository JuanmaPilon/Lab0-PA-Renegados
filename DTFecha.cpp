#include "DTFecha.h"

Fecha::Fecha(int dd,int mm,int aaaa) {
    if (dd < 1 || dd > 31 || mm < 1 || mm > 12 || aaaa < 1900) {
        throw std::invalid_argument("Fecha invalida");
    }
    dia = dd;
    mes = mm;
    anio = aaaa;
}

int Fecha::getDia() const {
    return dia;
}

int Fecha::getMes() const{
    return mes;
}

int Fecha::getAnio() const{
    return anio;
}

void Fecha::setDia() const{
    if(dd < 1 || dd > 31){
        throw std::invalid_argument("Dia Invalido");
    }
    dia = dd;
}

void Fecha::setMes(int mm) {
    if(mm <1 || mm > 12) {
        throw std::invalid_argument("Mes Invalido");
    }
    mes = mm;
}

void Fecha::setAnio(int aaaa) {
    if(aaaa < 1900) {
        throw std::invalid_argument("Anio Invalido");
    }
    anio = aaaa;
}

