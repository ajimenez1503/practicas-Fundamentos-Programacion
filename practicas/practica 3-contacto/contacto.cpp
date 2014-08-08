/* (C) Programmed by:
   Antonio Jimenez Martínez


Practica Fundamentos de programacion: Practica 3
Version:0.1

EJERCICIO Contactos
Se cree que esta secuencia codifica un número cabalístico. Este número está descompuesto en sus factores primos y
cada factor aparece en la secuencia como la longitud de cada secuencia concreta de valores 1.
Termina cuando aparecen cinco 0 seguidos.
Por ejemplo la secuencia:0011100011000110111111100000
 codificara los números primos 3, 2, 2 y 7, lo que nos da el número cabalístico 84=3*2*2*7.
Desarrollar un programa que lea la secuencia de ceros y unos y escriba en la salida estándar el número cabalístico oculto
*/
#include <iostream>

using namespace std;

int main()
{
    int numero,n0=0,n1=0,salida=1,anterior=0;
    while(n0!=5) {
        cout<<"Introduce un valor de la sucesion: ";
        cin>>numero;
        if(numero==1) {
            n1++;
            n0=0;
        }
        else {
            if(anterior!=0)salida=salida*n1;
            n0++;
            n1=0;
        }
        anterior=numero;
    }
    cout<<"la salida es "<<salida<<endl;

}
