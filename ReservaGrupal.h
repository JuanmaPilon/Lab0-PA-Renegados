#ifndef RESERVAGRUPAL_H
#define RESERVAGRUPAL_H
#include "Reserva.h"
#include "Huesped.h"
class ReservaGrupal: public Reserva {
    public:
        float calcularCosto();
        ReservaGrupal();
        ~ReservaGrupal();
        ReservaGrupal(int,DTFecha, DTFecha, EstadoReserva);
    private:
        Huesped* huesped;

};

#endif
