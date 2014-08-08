/* (C) Programmed by:
   Antonio Jimenez Martínez


Practica Fundamentos de programacion: Guion de practicas 5
Version:0.1

EJERCICIO 25
El método RLE (Run Length Encoding) de codificación permite almacenar en poco
espacio largas secuencias de datos. El algoritmo consiste en transformar las
secuencias de valores idénticos consecutivos en parejas compuestas por el valor y el
número de repeticiones. Escriba un programa que lea una secuencia de números
terminada con un número negativo y la codifique mediante el método RLE.
Un ejemplo de ejecución sería el siguiente:
	Introduzca secuencia: 1 1 1 2 2 2 2 2 3 3 3 3 3 3 5 -1
	RLE: 3 1 5 2 6 3 1 5
	donde la salida corresponde a indicar que hay 3 unos, 5 dos, 6 tres y 1 cinco.

*/
#include <iostream>

using namespace std;

int main()
{
    int numero=0,r=0,anterior=-1;

    for(int i=0; numero>=0; i++) {
        cout<<"Introduce un numero de la secuencia: ";
        cin>>numero;
        if(numero!=anterior&&anterior>=0)
        {
            cout<<"El numero "<<anterior<<" se repite "<<i<<" veces.";
            i=0;
        }
        anterior=numero;
    }
}
