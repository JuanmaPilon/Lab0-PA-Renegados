#ifndef HABITACION_H
#define HABITACION_H

class Habitacion{
private:
    int numero;
    float precio;
    int capacidad;
public:
    //constructores
    Habitacion();
    Habitacion(int numero, float precio, int capacidad);

    //getters
    
    int getNumero() const{
        return numero;
    }
    float getPrecio() const{
        return precio;
    }
    int getCapacidad() const{
        return capacidad;
    }
    //setters
    void setNumero(int num) {
        numero = num;
    }
    void setPrecio(float pre) {
        precio = pre;
    }
    void setCapacidad(int cap) {
        capacidad = cap;
    }
};

#endif //HABITACION_H