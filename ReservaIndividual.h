#include "Reserva.h"
class ReservaIndividual : public Reserva {
    private:
        bool pagado;
    public:
        float calcularCosto();
        ReservaIndividual();
        ~ReservaIndividual();
        ReservaIndividual(bool, int, DTFecha, DTFecha, EstadoReserva);
        void setPagado(bool);
        bool getPagado();
        //hacer constructores y archivo cpp
};

