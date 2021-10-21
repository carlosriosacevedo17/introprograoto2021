#include <iostream>
using namespace std;
#include "Persona.hpp"
int main()
{
    Persona p1;//declaramos un objeto de la clase Persona
    p1.setNombre("JASSIEL");
    p1.setPaterno("FLORES");
    p1.imprimeDatos();
    Persona p2;//declaramos un objeto de la clase Persona
    p2.setNombre("BERENICE");
    p2.setPaterno("AVILA");
    p2.imprimeDatos();
    return 0;
}
