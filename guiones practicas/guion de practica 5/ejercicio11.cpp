/* (C) Programmed by:
   Antonio Jimenez Mart�nez


Practica Fundamentos de programacion: Guion de practicas 5
Version:0.1

EJERCICIO 11
Escriba un programa que lea un entero y dos n�meros reales: n, min y max. Estos
valores indican que hay n n�meros de entrada y que deber�an estar en el intervalo
[min,max]. A continuaci�n, deber� leer los n valores de entrada y confirmar que,
efectivamente, todos est�n en el intervalo indicado. En caso de que uno de los
valores no lo est�, parar� la lectura y terminar� el programa indicando que hay
valores fuera de rango.

*/
#include <iostream>

using namespace std;

int main()
{
	int i;
    double n,min,max,numero;
    cout<<"Introduce el numero de valores de entrada, el valor minimo y el maximo del rango:\n";
    cin>>n>>min>>max;
    bool dentro_rango=true;
    for(i=0; i<n && dentro_rango; i++) {
        cout<<"Introduzca valor "<<i<<" : ";
        cin>>numero;
        if(numero<min || numero>max) {
            dentro_rango=false;
            cout<<"hay valores fuera del intervalo ["<<min<<","<<max<<"].\n";
        }
    }
    if( dentro_rango)cout<<"Los "<<i<<" valores introducidos estan en el intervalo ["<<min<<","<<max<<"].\n";
}
