#ifndef DTRESERVA_H
#define DTRESERVA_H

#include "EstadoReserva.h"
#include "DTFecha.h"

class DTReserva {
    public:
        int codigo;
        DTFecha checkIn;
        DTFecha checkOut;
        /*Aca no me esta tomando la importacion de DTFecha, no se porque, lo termino de ver el Jueves esto*/
        EstadoReserva estado;
        float costo;
        int habitacion;
};

#endif
