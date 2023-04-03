#include "DTSistema.h"

void DTSistema::agregarHuesped(string nombre,string email,bool esFinger) {
    for (DTHuesped* huesped : listaHuespedes) {
        if (huesped->getEmail() == email) {
            throw invalid_argument("Ya existe un huesped regstrado con el mismo email");
        }
    }
    DTHuesped* nuevoHuesped = new DTHuesped(nombre,email,esFinger);
    listaHuespedes.push_back(nuevoHuesped);

    /*La funcion pushback la sacamos de "vector", que basicamente es lo mismo que el .push de JS si 
    alguno conoce*/
}