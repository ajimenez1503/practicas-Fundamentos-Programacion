/* (C) Programmed by:
   Antonio Jimenez Martínez


Practica Fundamentos de programacion: Guion de practicas 5
Version:0.1

EJERCICIO 6
Se desea implementar un programa que cuente la cantidad de datos que son
positivos y negativos en una secuencia de valores enteros. Implemente un programa
que lea datos hasta que se lea el valor cero. Como resultado, indicará en la salida
estándar cuántos han sido positivos y cuántos negativos.
*/
#include <iostream>

using namespace std;

int main()
{
    int dato,positivo=0,negativo=0;
    while(dato!=0) {
        cout<<"Introduce un numero: ";
        cin>>dato;
        if(dato>0)
            positivo++;
        if(dato<0)
            negativo++;
    }
    cout<<"El resultado es: "<<positivo<<" positivos y "<<negativo<<" negativos.";
}
