#ifndef DTRESERVAINDIVIDUAL_H
#define DTRESERVAINDIVIDUAL_H

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

#endif // DTRESERVAINDIVIDUAL_H