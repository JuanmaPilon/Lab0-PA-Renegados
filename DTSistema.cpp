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
    alguno conoce la funcion*/
}

void DTSistema::agregarHabitacion(int numero,float precio,int capacidad) {
    for (DTHabitacion* habitacion : listaHabitaciones) {
        if (habitacion->getNumero() == numero) {
            throw invalid_argument("Ya existe una habitacion registrada con el mismo numero");
        }
    }
    DTHabitacion* nuevaHabtiacion = new DTHabitacion(numero,precio,capacidad);
    listaHabitaciones.push_back(nuevaHabtiacion);
}

/*Se usa un ** porque es un arreglo dinamico*/

DTHuesped** DTSistema::obtenerHuespedes(int& cantHuespedes) {
    DTHuesped** arrHuespedes = new DTHuesped*[MAX_HUESPEDES];
    int i = 0;
    for (DTHuesped* huesped : listaHuespedes) {
        arrHuespedes[i] = huesped;
        i++;
    }
    cantHuespedes = i;
    return arrHuespedes;
}


//En esta funcion trate de implementar la misma logica que en la anterior, pero nada seguro que este del todo bien

DTHabitacion** DTSistema::obtenerHabitaciones(int& cantHabitaciones) {
    DTHabitacion** arrHabitaciones = new DTHabitacion*[listaHabitaciones.size()];
    /*el .size va a tomar la cantidad de habitaciones que hay en el vector. Tambien muy parecido
    si alguno trabajo con JS con arr.length, es casi lo mismo*/
    int i = 0;
    for (DTHabitacion* habitacion : listaHabitaciones){
        arrHabitaciones[i] = new DTHabitacion(habitacion->getNumero(),habitacion->getPrecioNoche(),habitacion->getCapacidad());
        i++;
    }
    cantHabitaciones = i;
    return arrHabitaciones;
}

/*DTReserva** obtenerReservas(DTFecha fecha,int& cantReservas)*/

/*void registrarReserva(string emial,DTReserva* reserva){
    DTHabitacion* DTHabitacion = buscarHabitacion(reserva->getNumero());

}*/