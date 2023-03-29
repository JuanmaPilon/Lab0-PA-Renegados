#include <string>

class DTHuesped {
private:
  std::string nombre;
  std::string email;
  bool esFinger;
public:
  DTHuesped(std::string nom,std::string ema,bool esF) : nombre(nom) , email(ema), esFinger(esF) {}
  std::string getNombre() const {
    return nombre; 
  }
  std::string getEmail() const {
    return email; 
  }
  bool getEsFinger() const {
    return esFinger; 
  }

  void setNombre(std::string nom) {
  nombre = nom;
  }
  void setEmail(std::string em) {
  email = em;
  }
  void setEsFinger(bool esF) {
  esFinger = esF;
  }
};