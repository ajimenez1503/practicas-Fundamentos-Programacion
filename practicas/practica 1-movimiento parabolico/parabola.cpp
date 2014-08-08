/* (C) Programmed by:
   Antonio Jimenez Martínez

Practica Fundamentos de Programacion: Práctica 1 – Expresiones
Version:0.1

EJERCICIO Movimiento parabólico
Suponemos un lanzamiento de un proyectil determinado por dos parámetros:
1. Velocidad inicial de lanzamiento. Un número v expresado en metros por segundo.
2. Ángulo de lanzamiento. Un número  expresado en grados.

El problema consiste en determinar el tiempo de vuelo, la altura máxima y la distancia recorrida por el proyectil,
teniendo en cuenta que la única fuerza que consideramos es la de la gravedad (g). Para resolver el problema no hay más
que proyectar el vector de la velocidad en la horizontal (con el coseno del ángulo) y en la vertical (con el seno del
ángulo). Si aplicamos las ecuaciones básicas de física y operamos podemos obtener las siguientes expresiones:

1. Tiempo de vuelo=(2*v*sin())/g
2. Altura maxima=((v*sin())²)/2*g
3. Alcance del proyectil=(v²*sin(2*))/g

*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double velocidad,grados,radianes,tiempo,altura,distancia;
	const double PI=3.141592;
    const double g=9.8;
    cout<<"Este programa describe un movimiento parabolico con dos parametros la velocidad y los grados de esta respecto a la horizontal."<<endl;
    
    cout << "Introduce el valor de la velocidad inicial"<<endl;
    cin >> velocidad;
    cout<<"Introduce el valor de los grados respecto a la horizontal"<<endl;
    cin >> grados;
    cout<<"Has introducido "<<velocidad<< " m/s y "<<grados<<" grados"<<endl;
    radianes=(grados*PI)/180;
    tiempo=(2*velocidad*(sin(radianes)))/g;
    cout<<"El tiempo de vuelo son "<<tiempo<<" segundos"<<endl;
    altura=(pow(velocidad*sin(radianes),2))/(2*g);
    cout<<"La altura maxima son "<<altura<<" metros"<<endl;
    distancia= cos(radianes)*velocidad*tiempo;
    cout<<"La distancia recorrida son "<<distancia<<" metros"<<endl;
}
