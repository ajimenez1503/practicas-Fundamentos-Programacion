/* (C) Programmed by:
   Antonio Jimenez Martínez


Practica Fundamentos de programacion: Guion de practicas 5
Version:0.1

EJERCICIO 23
Un número perfecto es aquel que es igual a la suma de todos sus divisores positivos
excepto él mismo. El primer número perfecto es el 6, ya que sus divisores son 1, 2 y
3 y 6=1+2+3. Escriba un programa que permita reconocer si un numero es perfecto
*/
#include <iostream>

using namespace std;

int main()
{
    int numero,suma=0,divisor,i;
    cout<<"Introduce un numero: ";
    cin>>numero;
    for(int i=1; suma!=numero && i<numero; i++) {
        if(numero%i==0) {
            divisor=i;
            suma=suma+divisor;
        }
    }
    if(suma==numero)
        cout<<numero<<" es un numero perfecto\n";
    else
        cout<<numero<<" no es un numero perfecto\n";

}
