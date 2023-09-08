#include <string>

class Mascota
{
private:
    int hambre;
    std::string nombre;

public:
    Mascota()
    {
        this->hambre = 0;
        this->nombre = nombre;
    }
    ~Mascota() {}
    void jugar()
    {
        this->hambre + -5;
    }
    void comer(int comida)
    {
        this->hambre -= comida;
    }
    std::string DecirNombre(){
        return this ->nombre
    }
    std::string DecirHambre(){
        return this ->nombre
    }
};