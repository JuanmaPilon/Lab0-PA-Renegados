#ifndef FECHA_H
#define FECHA_H

#include <stdexcept>

class Fecha {
public:
  Fecha(int dd, int mm, int aaaa);
  int getDia() const;
  int getMes() const;
  int getAnio() const;
  void setDia(int dd);
  void setMes(int mm);
  void setAnio(int aaaa);

<<<<<<< HEAD
public:
=======
private:
>>>>>>> 758bf1285afdfcf67b3b63333d69e279d7f8a9dd
  int dia;
  int mes;
  int anio;
};

#endif
