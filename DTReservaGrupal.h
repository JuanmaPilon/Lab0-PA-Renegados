#ifndef DTRESERVAGRUPAL_H
#define DTRESERVAGRUPAL_H

#include "DTReserva.h"
#include "DTHuesped.h"
class DTReservaGrupal : public DTReserva {
public:
    DTReservaGrupal();
    DTReservaGrupal(DTHuesped*, int , DTFecha , DTFecha , EstadoReserva , float, int);
    ~DTReservaGrupal();
    DTHuesped** getHuespedes();
    float calcularCosto();
private:
    DTHuesped** huespedes;
};

#endif
