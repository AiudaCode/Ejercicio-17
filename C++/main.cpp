#include <iostream>
//Se incluye la clase Circulo para despues llamar a sus metodos
#include "Circulo.h"

using namespace std;

int main()
{
    //Se crea un objeto de la clase Circulo (Instanciaciación)
    Circulo* obj = new Circulo();
    float r;//Se define una variable llamada "r" de tipo entero
    cout << "Digite radio del circulo:" << endl; //Se pide el radio
    cin >> r; //se guarda el radio en la variable r
    obj->setRadio(r);//se encapsula la variable r

    //se muestra el area y  luego la longitud del circulo
    cout << "El area es: " << obj->area() << endl;
    cout << "La longitud es: " << obj->longitud() << endl;
    return 0;
}
