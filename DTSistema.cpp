#include "DTSistema.h"
#include "DTHabitacion.h"
#include "Huesped.h"
#include "ReservaGrupal.h"
#include "ReservaIndividual.h"
#include "Habitacion.h"
#include "Reserva.h"
#include "DTHuesped.h"
#include "DTReserva.h"


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



// void DTSistema::registrarReserva() {
//     string email;
//     cout << "Ingrese el email del huesped: ";
//     cin >> email;
//     if (!existeHuesped(email)) {
//         throw invalid_argument("No existe un huesped registrado con el email indicado.");
//     }
//     int numeroHabitacion;
//     cout << "Ingrese el numero de la habitacion: ";
//     cin >> numeroHabitacion;
//     if (!existeHabitacion(numeroHabitacion)) {
//         throw invalid_argument("No existe una habitacion registrada con el numero indicado.");
//     }
//     int cantNoches;
//     cout << "Ingrese la cantidad de noches: ";
//     cin >> cantNoches;
//     bool pagada;
//     cout << "La reserva esta pagada? (1 = Si, 0 = No): ";
//     cin >> pagada;
//     int tipo;
//     cout << "Ingrese el tipo de reserva (1 = Individual, 2 = Grupal): ";
//     cin >> tipo;
//     if (tipo == 1) {
//     ReservaIndividual* nueva;
//       Reserva = new DTReservaIndividual(codigo, checkIn, checkOut, estado, costo, habitacion, pagado);
//     } else if (tipo == 2) {
//         registrarReservaGrupal(email, numeroHabitacion, cantNoches, pagada);
//     } else {
//         throw invalid_argument("El tipo de reserva ingresado no es valido.");
//     }
//     Reserva* nuevaReserva = new Reserva(generarCodigoReserva(),cantNoches,pagada,numeroHabitacion,email);
//     listaReservas.push_back(nuevaReserva);
// }


bool DTSistema::existeHuesped(string email) {
    for (DTHuesped* huesped : listaHuespedes) {
        if (huesped->getEmail() == email) {
            return true;
        } 
    }
    return false;
}

int DTSistema::generarCodigoReserva() {
    int codigo = 0;
    for (DTReserva* reserva : listaReservas) {
        if (reserva->getCodigo() > codigo) {
            codigo = reserva->getCodigo();
        }
    }
    return codigo + 1;
}

bool DTSistema::existeHabitacion(int numeroHabitacion) {
    for (DTHabitacion* habitacion : listaHabitaciones) {
        if (habitacion->getNumero() == numeroHabitacion) {
            return true;
        }
    }
    return false;
}












////////////////////////////////////////////////////////////
// Aca empieza German

Reserva* Crear_Reserva(Huesped* const huesped, DTReserva* const datos)
{
    Reserva* reserva = nullptr;

    if(dynamic_cast<DTReservaIndividual*>(datos))
    {
        reserva = (Reserva*) new ReservaIndividual(huesped,(DTReservaIndividual*) datos);
    }
    else
    {
    if(dynamic_cast<DTReservaGrupal*>(datos))
    {
        reserva = (Reserva*) new ReservaGrupal(huesped,(DTReservaGrupal*) datos);
    }
    else
    {
        throw std::invalid_argument("Reserva invalida");
    }
    }
    return reserva;
}

void buscar_huesped (string const email)
{
    for (int i = 0; i < listaHuespedes.size(); i++)
    {
        if (huespedes[i]->getEmail() == email)
        {
            return huespedes[i];
        }
    }
    return nullptr;
}

void DTSistema::registrarReserva(string email, DTReserva* datos)
{

Huesped* const huesped = buscar_huesped (email);///funcion buscar o existe huesped deberia estar creada

if(cantidad_reservas >= MAX_RESERVAS)
{
    throw std::invalid_argument("Maxima Reserva");
}
else
{
    if(huesped ==nullptr)
    {
        throw std::invalid_argument("Huesped no existe");
    }
    else
    {
        Reserva* const reserva = Crear_Reserva(huesped, datos);
    }

    reservas [cantidad_reservas] = reserva;
    cantidad_reservas +=1;
    habitacion->Agregar_Reserva(reserva);///habitacion o reserva
}
}

///////////////////MOVER AL MENU//////////////////

DTReserva* DTSistema::Datos_Reserva(string const email) ////si no usan const borren los const
{
///segun el menu usar cout aqui o usar un Ingresar::nombreDeFuncion ej Ingresar::Fecha

    DTReserva* datos = nullptr;

    int codigo = generarCodigoReserva();///codigo random, usar rand

    DTFecha const CheckIn;

    DTFecha const CheckOut;

    EstadoReserva estado;

    float costo;

    int habitacion;

    bool grupal;

    cout<<"Grupal? Si/No"<<endl;

    if(grupal)
    {
        string* const huespedes;

        datos = new DTReservaGrupal(codigo, CheckIn, CheckOut, estado, costo, habitacion, huespedes);
    }

    else
    {
        bool pagado;

        datos = new DTReservaIndividual(codigo, CheckIn, CheckOut, estado, costo, habitacion, pagado);
    }

    return datos;

}

