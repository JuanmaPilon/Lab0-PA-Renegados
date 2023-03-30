#include <string>
<<<<<<< HEAD
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
=======

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
>>>>>>> 758bf1285afdfcf67b3b63333d69e279d7f8a9dd
    return email; 
  }
  bool getEsFinger() const {
    return esFinger; 
  }

<<<<<<< HEAD
  void setNombre(string nom) {
  nombre = nom;
  }
  void setEmail(string em) {
=======
  void setNombre(std::string nom) {
  nombre = nom;
  }
  void setEmail(std::string em) {
>>>>>>> 758bf1285afdfcf67b3b63333d69e279d7f8a9dd
  email = em;
  }
  void setEsFinger(bool esF) {
  esFinger = esF;
  }
<<<<<<< HEAD
};
=======
};
>>>>>>> 758bf1285afdfcf67b3b63333d69e279d7f8a9dd
