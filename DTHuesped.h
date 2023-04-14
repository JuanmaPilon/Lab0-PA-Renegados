#ifndef DTHUESPED_H
#define DTHUESPED_H

#include <string>

using namespace std;
class DTHuesped {
private:
  string nombre;
  string email;
  bool esFinger;
public:
  DTHuesped(string nom,string ema,bool esF) : nombre(nom) , email(ema), esFinger(esF) {}
  string getNombre() const {
    return nombre;
  }
  string getEmail() const {
    return email;
  }
  bool getEsFinger() const {
    return esFinger;
  }

  void setNombre(string nom) {
  nombre = nom;
  }
  void setEmail(string em) {
  email = em;
  }
  void setEsFinger(bool esF) {
  esFinger = esF;
  }

};

#endif // DTHUESPED_H
