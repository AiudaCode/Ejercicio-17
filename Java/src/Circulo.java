public class Circulo
{
    //se define el atributo privado "radio" de tipo double
    private double radio;
    
    //implementación del metodo area del circulo
    public double area()
    {
        //la formula para calcular el area de un circulo es muy sencilla, solo hay que
        //multiplicar PI por el radio elevado a la 2 (PI*r^2).
        return 3.14 * (radio * radio); //se retorna el resultado
    }
    
    //implementacion del metodo longitud del circulo
    public double longitud()
    {
        //la formula es la siguiente multiplicamos 2 por PI por el radio (2*PI*r).
        return 2 * 3.14 * radio;//retornamos el resultado.
    }
    
    //implementacion de los metodos Setters y Getters del atributo radio.
    public void setRadio(double val)
    {
        //se asigna a radio val
        radio = val;
    }

    public double getRadio()
    {
        //se retorna radio
        return radio;
    }
}
