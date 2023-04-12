#include "Reserva.h"
#include "Huesped.h"
class ReservaGrupal: public Reserva {  
    public:
        float calcularCosto();
    private:
        Huesped* huesped;
           
};