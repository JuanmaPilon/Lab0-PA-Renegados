
#include "EstadoReserva.h"
#include "DTFecha.h"
#include "Habitacion.h"
#include "Huesped.h"
class Reserva {
    private:
        int codigo;
        DTFecha checkin;
        DTFecha checkout;
        EstadoReserva estado;
        //pseudoatributos
        Habitacion* habitacion;
        Huesped* huesped;
    public:
        float calcularCosto();
};

