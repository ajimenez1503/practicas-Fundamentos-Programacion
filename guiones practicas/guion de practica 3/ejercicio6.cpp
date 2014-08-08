/* (C) Programmed by:
   Antonio Jimenez Martínez


Practica Fundamentos de programacion: Guion de practicas 3
Version:0.1

EJERCICIO 6
Escriba un programa que lea las coordenadas que definen un rectángulo (esquinas
opuestas) y las coordenadas de un punto en el espacio. A continuación, el programa
escribe en la salida estándar si está en el interior, en el exterior, o en el borde del
rectángulo determinado por los dos puntos introducidos. Además, tenga en cuenta
que no sabemos las esquinas que introduce el usuario, simplemente, que son
esquinas opuestas. No use operadores aritméticos en la solución.


*/
#include <iostream>

using namespace std;

int main()
{
    int xb,yb,xa,ya,xp,yp;
    cout<<"Intoduce el punto de un vertice:\n";
    cin>>xa>>ya;
    cout<<"Intoduce el punto del otro vertice:\n";
    cin>>xb>>yb;
    cout<<"intoduce un punto aleatorio:\n";
    cin>>xp>>yp;

    if(xp>xa && xp<xb && yp<yb && yp>ya)
        cout<<"el punto esta dentro";
    else
    {
        if((xp==xb && yp==yb) || (xp==xa && yp==ya) || (xp==xb && yp==ya) || (xp==xa && yp==yb)) {
            cout<<"el punto esta en un vertice";
        }
        cout<<"el putno esta fuera del cuadrado";
    }


}
