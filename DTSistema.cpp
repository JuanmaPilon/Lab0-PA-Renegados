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

DTReserva* Datos_Reserva(string const email) ////si no usan const borren los const
{
///segun el menu usar cout aqui o usar un Ingresar::nombreDeFuncion ej Ingresar::Fecha

    DTReserva* datos = nullptr;

    int const codigo;///codigo random, usar rand

    DTFecha const CheckIn;

    DTFecha const CheckOut;

    EstadoReserva estado;

    float costo;

    int habitacion;

    bool const grupal;

    cout<<"Grupal? Si/No"<<endl;

    if(grupal)
    {
        string* const huespedes;

        datos = new DTReservaGrupal(huespedes, codigo, checkIn, checkOut, estado, costo, habitacion);
    }

    else
    {
        bool const pagado;

        datos = new DTReservaIndividual(codigo, checkIn, checkOut, estado, costo, habitacion, pagado);
    }

    return datos;

}
