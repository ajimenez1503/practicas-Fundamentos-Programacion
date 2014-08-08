/* (C) Programmed by:
   Antonio Jimenez Martínez

Practica Fundamentos de programacion: Guion de practicas 10
Version:0.1

EJERCICIO 2
Escriba un programa que defina la clase “Segmento” que se comenta a continuación.
La representación estará compuesta por dos objetos de tipo Punto y se podrán
incluir operaciones como las siguientes:

1. Constructor a partir de dos puntos.
2. Consultas del valor de punto inicial y final.
3. Longitud del segmento.
4. Lectura de un segmento desde la entrada estándar.
5. Consultar si un punto se encuentra a la derecha o a la izquierda del segmento.
6. Consultar si dos segmentos se cruzan.

Este programa leerá el valor de un segmento desde la entrada estándar,
y luego escribirá su longitud en la salida estándar.
*/
#include <iostream>  // Para usar cin y cout
#include <cmath>
using namespace std;

class punto {
private:
    int x, y;//coordenada x e y

public:
    // Constructores
    punto()           {
        x=y=0;
    };
    void crear();


    // Modificar el punto
    void Set(int x, int y);


    // Obtener la posicion
    int abscisas() const     {
        return x;
    };

    int coordenadas() const  {
        return y;
    };

    // Operaciones de salida
    void Leepunto();
};

void punto::crear()
{
    int x, y;
    cout<<"Introduce los valores del punto:"<<endl;
    cin>>x>>y;
    (*this).x=x;
    (*this).y=y;
}


void punto::Set(int x, int y)
{
    (*this).x=x;
    (*this).y=y;
}

void punto::Leepunto()
{
    cout<<"El valor en el eje de abscisas corresponde a "<<x<<endl<<"El valor en el eje de coordenadas corresponde a "<<y<<endl;
}

// ******* Ejemplo de uso de la clase *******

int distancia(const punto &m1,const punto &m2)
{
    int d=pow((m2.abscisas()-m1.abscisas()),2)+pow((m2.coordenadas()-m1.coordenadas()),2);

    return sqrt(d);
}


class segmento
{
private:
    punto p1, p2;//forado por dos puntos

public:
    // Constructores
    segmento()
    {
        p1,p2;
    };
    void segmentoo(punto a,punto b);


    // Obtener la posicion

    int abscisasp1() const
    {
        return p1.abscisas();
    };
    int abscisasp2() const
    {
        return p2.abscisas();
    };
    int coordenadasp1() const
    {
        return p1.coordenadas();
    };
    int coordenadasp2() const
    {
        return p2.coordenadas();
    };

    int longitud() const;

};

void segmento::segmentoo(punto a,punto b)
{
    cout<<"Un segemento esta formado por dos puntos:"<<endl;
    a.crear();
    b.crear();
    p1=a;
    p2=b;

}

int segmento::longitud() const
{
    return distancia(p1,p2);

}

int main()
{
    punto p1,p2;
    segmento s1;
    s1.segmentoo(p1,p2);
    int a=s1.longitud();
    cout << "la longitud del segmento es: " <<a<< endl;

}
