using namespace std;
#include <string>

class Huesped {

private:
    string nombre;
    string email;
    bool esFinger;

public:
    //constructores
    Huesped();
    Huesped(string nombre, string email, bool esFinger);

    //getters
    string getNombre() const{
        return nombre; 
    }
    string getEmail() const{
        return email; 
    }
    bool getEsFinger() const{
        return esFinger; 
    }

    //setters
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