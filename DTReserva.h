#ifndef DTRESERVA_H
#define DTRESERVA_H

#include "EstadoReserva.h"
#include "DTFecha.h"

class DTReserva {
    private:
        int codigo;
        DTFecha checkIn;
        DTFecha checkOut;
        EstadoReserva estado;
        float costo;
        int habitacion;
};

#endif
