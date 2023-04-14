#ifndef DTRESERVAINDIVIDUAL_H
#define DTRESERVAINDIVIDUAL_H
#include "DTReserva.h"

class DTReservaIndividual : public DTReserva {
    private:
        bool pagado;
    public:
        DTReservaIndividual();
        DTReservaIndividual(int , DTFecha& , DTFecha& , const EstadoReserva , float, int, bool);
        ~DTReservaIndividual();
        bool getPagado()const;
        void setPagado(bool);
        float calcularCosto();
};

#endif // DTRESERVAINDIVIDUAL_H