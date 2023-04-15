#ifndef DTRESERVA_H
#define DTRESERVA_H

#include "EstadoReserva.h"
#include "DTFecha.h"

class DTReserva {
    public:
        DTReserva();
        ~DTReserva();
        DTReserva(int, DTFecha&, DTFecha&, const EstadoReserva, float, int);

        int getCodigo()const;
        EstadoReserva getEstado()const;
        DTFecha getCheckIn()const;
        DTFecha getCheckOut()const;
        float getCosto()const;
        int getHabitacion()const;

        virtual float calcularCosto() = 0;

        void setCodigo(int);
        void setEstado(EstadoReserva);
        void setCheckIn(DTFecha);
        void setCheckOut(DTFecha);
        void setCosto(float);
        void setHabitacion(int);
    private:
        int codigo;
        DTFecha checkIn;
        DTFecha checkOut;
        EstadoReserva estado;
        float costo;
        int habitacion;
};

#endif // DTRESERVA_H
