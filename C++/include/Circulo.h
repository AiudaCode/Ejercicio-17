#ifndef CIRCULO_H
#define CIRCULO_H


class Circulo
{
    public:
        Circulo();//metodo constructor
        virtual ~Circulo(); //metodo destructor

        //se definen los atributos publicos:
        float area(); //area de tipo float
        float longitud(); //longitud de tipo float

        //se definen los metodos Setters y Getters del atributo radio (Encapsulamiento)
        void setRadio(float val);
        float getRadio();
    protected:

    private:
        //se define el atributo privado "radio" de tipo float
        float radio;
};

#endif // CIRCULO_H
