/* (C) Programmed by:
   Antonio Jimenez Martínez


Practica Fundamentos de programacion: Guion de practicas 5
Version:0.1

EJERCICIO 12
Escriba un programa que lea una secuencia de enteros positivos terminada en un
valor negativo, y que escriba en la salida estándar la longitud de la subsecuencia de
números ordenada de mayor longitud, así como la posición donde comienza. Tenga
en cuenta que dos números están ordenados si es primero es menor o igual que el
segundo.
Un ejemplo de ejecución es:
	Secuencia de enteros positivos terminada en negativo: 5 9 1 4 8 8 10 5 14 -1
	Máxima longitud: 5 comenzando en 2

Observe que el elemento con índice 2 (el número 1) es el comienzo de una secuencia
de 5 números ordenados.
Para finalizar el problema, vuelva a ejecutarlo para comprobar el resultado de las siguientes secuencias:
	Secuencia de enteros positivos terminada en negativo: -1
	Secuencia de enteros positivos terminada en negativo: 1 2 3 4 5 -1
*/
#include <iostream>

using namespace std;

int main()
{
    int numero,n=0,max=0,inicio=0,anterior=0;
    for(int i=0; numero>=0; i++) {
        cout<<"Introduce un numero de la secuencia: ";
        cin>>numero;
        if(numero>=anterior)n++;
        else {
            if(n>max) {
                max=n;
                inicio=i-max;
            }
            n=1;
        }
        anterior=numero;
    }
    cout<<"Longitud de la subsecuencia ordenada es"<<max<<" con inicio en "<<inicio;

}
