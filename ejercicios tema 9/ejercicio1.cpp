/* (C) Programmed by:
   Antonio Jimenez Martínez


Practica Fundamentos de programacion: ejercicios tema 9
Version:0.1

EJERCICIO  1
Implemente una función recursiva que calcule el máximo
común divisor de dos números (mayores o iguales que cero)
mediante recursividad.
*/

#include <iostream>

using namespace std;

int mcd(int x,int y);

int main()
{
    int x,y;
    cout << "Escribe dos numeros para calcular el maximo comun divisor:" << endl;
    cin>>x>>y;
    cout << "El maximo comun divisor es " << mcd(x,y)<<endl;
}

int mcd(int x,int y)
{
    if(y==0) return x;
    else return mcd(y,x%y);
}
