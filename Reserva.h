
#include "EstadoReserva.h"
#include "DTFecha.h"
#include "Habitacion.h"
#include "Huesped.h"
class Reserva {
    protected:
        int codigo;
        DTFecha checkin;
        DTFecha checkout;
        EstadoReserva estado;
        //pseudoatributos
        Habitacion* habitacion;
        Huesped* huesped;
    public:
        float calcularCosto();
        Reserva();
        Reserva(int codigo, DTFecha checkin, DTFecha checkout, EstadoReserva estado, Habitacion* habitacion, Huesped* huesped);// no se si el constructor por parametros lleva tambien los punteros, supongo que si, ver tambien que pasa con los constructores vacios de DTFecha
        //getters
        int getCodigo();
        DTFecha getCheckIn();
        DTFecha getCheckOut();
        EstadoReserva getEstado();
        Habitacion getHabitacion();
        Huesped getHuesped();

};

