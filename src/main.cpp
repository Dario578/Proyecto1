#include <iostream>
#include <Mascota.hpp>
int main(int argc, char const *argv[])
{
    std::cout << "Juego de Mascotas" << std::endl;
    Mascota m1("LaMamaDeQiyono");
    m1.jugar();
    m1.jugar();
    m1.jugar();
    
    std::cout<<m1.DecirNombre()<< "tiene" << m1.DecirNombre() << "de hambre.";
    


    m1.comer(5);

    return 0;
}
