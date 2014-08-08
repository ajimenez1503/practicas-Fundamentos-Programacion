/* (C) Programmed by:
   Antonio Jimenez Martínez

Practica Fundamentos de programacion: Guion de practicas 10
Version:0.1

EJERCICIO 1
Escriba un programa que defina la clase “Punto” que se ha comenta a continuación.
El tipo “Punto” para almacenar las coordenadas de un punto en el plano.
Este nuevo tipo se definirá como una nueva clase en la que:

1. Se encapsule la representación del punto como un par de valores reales que indican
las coordenadas cartesianas del punto.

2. Debe tener un constructor sin parámetros. Este constructor garantiza que podemos
declarar un nuevo punto sin ningún parámetro y que su valor será el punto (0,0).

3. Debe contener un constructor con dos parámetros de manera que sea posible declarar
o crear un punto con un valor concreto.

4. Debe contener funciones para consultar el valor de sus coordenadas.

Este programa leerá el valor de dos puntos usando la entrada estándar, y
escribirá como resultado el valor de los puntos introducidos y la distancia entre
ellos.
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

int main() {
    punto p1,p2;
    p1.crear();
    p1.Leepunto();
    p2.crear();
    p2.Leepunto();
    cout << "La distancia entre los dos puntos es: " <<distancia(p1,p2)<<endl;

}
