#include "Circulo.h"

Circulo::Circulo()
{
    //le asignamos por defecto 0 a la varible radio en el constructor de la clase
    radio = 0;
}

Circulo::~Circulo()
{
    //dtor
}

//implementación del metodo area del circulo
float Circulo::area()
{
    //la formula para calcular el area de un circulo es muy sencilla, solo hay que
    //multiplicar PI por el radio elevado a la 2 (PI*r^2).
    return 3.1416 * (radio * radio); //se retorna el resultado
}
//implementacion del metodo longitud del circulo
float Circulo::longitud()
{
    //la formula es la siguiente multiplicamos 2 por PI por el radio (2*PI*r).
    return 2 * 3.14 * radio;//retornamos el resultado.
}

//implementacion de los metodos Setters y Getters del atributo radio.
void Circulo::setRadio(float val)
{
    //se asigna a radio val
    radio = val;
}

float Circulo::getRadio()
{
    //se retorna radio
    return radio;
}
