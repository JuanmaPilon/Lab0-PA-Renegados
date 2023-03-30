#ifndef DTRESERVA_H
#define DTRESERVA_H

#include "EstadoReserva.h"
#include "DTFecha.h"

<<<<<<< HEAD

class DTReserva {
    private:
        int codigo;
        Fecha checkIn;
        Fecha checkOut;
=======
class DTReserva {
    public:
        int codigo;
        DTFecha checkIn;
        DTFecha checkOut;
        /*Aca no me esta tomando la importacion de DTFecha, no se porque, lo termino de ver el Jueves esto*/
>>>>>>> 758bf1285afdfcf67b3b63333d69e279d7f8a9dd
        EstadoReserva estado;
        float costo;
        int habitacion;
};

#endif
