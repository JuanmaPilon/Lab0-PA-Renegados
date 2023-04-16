#include "DTSistema.h"
#include "DTHabitacion.h"
#include "Huesped.h"
#include "ReservaGrupal.h"
#include "ReservaIndividual.h"
#include "Habitacion.h"
#include "Reserva.h"


#include <map>

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

 void DTSistema::mostrarHuespedes() {
    for (DTHuesped* huesped : listaHuespedes) {
        cout << "Nombre: " << huesped->getNombre() << endl;
        cout << "Email: " << huesped->getEmail() << endl;
        if (huesped->getEsFinger()) {
           cout << "Es Finger: Si" << endl;
         } else {
             cout << "Es Finger: No" << endl;
         }
    }
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


// void DTSistema::mostrarHabiatacion() {
//     for (DTHabitacion* Habitacion : listaHabitaciones) {
//         cout << "Numero: " << Habitacion->getNumero() << endl;
//         cout << "precio: " << Habitacion->getPrecioNoche() << endl;
//         cout << "capacidad: " << Habitacion->getCapacidad() << endl;

//     }
// }

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

// Function auxiliar para buscar habitacion por numero
// Devuelve un puntero a la habitacion si se encuentra
Habitacion* buscarHabitacion(int numHabitacion, map<int, Habitacion*>& habitaciones) {
    auto it = habitaciones.find(numHabitacion);
    if (it == habitaciones.end()) {
        return nullptr;
    }
    return it->second;
}

// Funcition auxiliar para buscar un huesped por su email
// Devuelve un puntero al huesped si se encuentra
Huesped* buscarHuesped(string email, map<string, Huesped*>& huespedes) {
    auto it = huespedes.find(email);
    if (it == huespedes.end()) {
        return nullptr;
    }
    return it->second;
}



//Esta la saque de GPT pero tiene cosas que no tenemos y habria que armarla
//Pueden comentarla para compilar

// void DTSistema::registrarReserva(string email, DTReserva* reserva) {
//     // Verificar si el huésped existe
//     if (!existeHuesped(email)) {
//         throw std::invalid_argument("No existe un huésped registrado con el email indicado.");
//     }

//     // Obtener la habitación
//     Habitacion* habitacion = getHabitacion(reserva->getNumeroHabitacion());

//     // Verificar si la habitación existe
//     if (habitacion == nullptr) {
//         throw std::invalid_argument("No existe una habitación registrada con el número indicado.");
//     }

//     // Crear la reserva
//     Reserva* nuevaReserva = nullptr;
//     if (dynamic_cast<DtReservaIndividual*>(reserva)) {
//         // Es una reserva individual
//         nuevaReserva = new ReservaIndividual(generarCodigoReserva(), reserva->getCheckIn(), reserva->getCheckOut(), reserva->getPagada(), habitacion, getHuesped(email));
//     } else if (dynamic_cast<DTReservaGrupal*>(reserva)) {
//         // Es una reserva grupal
//         nuevaReserva = new ReservaGrupal(generarCodigoReserva(), reserva->getCheckIn(), reserva->getCheckOut(), dynamic_cast<DTReservaGrupal*>(reserva)->getHuespedes(), habitacion, getHuesped(email));
//     }

//     // Agregar la reserva a la lista de reservas
//     reservas.push_back(nuevaReserva);
// }
