/* (C) Programmed by:
   Antonio Jimenez Martínez


Practica Fundamentos de programacion: Guion de practicas 5
Version:0.1

EJERCICIO 8
Escriba un programa que lea un número entero que indica el número de datos y a
continuación tantos números reales como indique dicho entero. Como resultado,
escribirá la media y la varianza de dichos datos. Use para ello un bucle “ while”.

*/
#include <iostream>

using namespace std;

int main()
{
    int n;
    double dato,varianza,suma=0,sumacuadrada=0,media;
    cout<<"Indique sobre cuantos numeros se hace la media y la varianza";
    cin>>n;
    int i=0;
    while(i<n) {
        cout<<"Introduce un numero: ";
        cin>>dato;
        suma+=dato;
        sumacuadrada=sumacuadrada+dato*dato;
        i++;
    }
    media=suma/n;
    varianza=(sumacuadrada+media*media)/n;
    cout<<"La media es "<<media<<" y la varianza es "<<varianza<<endl;
}
