#ifndef FECHA_H
#define FECHA_H

#include <stdexcept>

class DTFecha {
public:
  DTFecha(int dd, int mm, int aaaa);
  int getDia() const;
  int getMes() const;
  int getAnio() const;
  void setDia(int dd);
  void setMes(int mm);
  void setAnio(int aaaa);
  DTFecha();

private:

  int dia;
  int mes;
  int anio;
};

#endif
