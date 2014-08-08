/* (C) Programmed by:
   Antonio Jimenez Martínez


Practica Fundamentos de programacion: Guion de practicas 3
Version:0.1

EJERCICIO 8
Escriba un programa que lea dos números enteros y escriba en la salida estándar si
el segundo divide al primero. Para ello, use una instrucción if/else con una condición
simple que hace uso del operador módulo (%) para saber si la condición se cumple.

*/
#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout<<"Introduce dos numeros:\n";
    cin>>a;
    cin>>b;
    if(a!=0 && 0==b%a)
        cout<<b<<" es divisible entre "<<a<<endl;
    else
    {
        if(a!=0)
            cout<<b<<"  no divide a "<<a<<endl;
        else
            cout<<"No se puede dividir entre 0"<<endl;
    }


}
