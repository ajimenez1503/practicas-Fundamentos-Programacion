/* (C) Programmed by:
   Antonio Jimenez Martínez


Practica Fundamentos de programacion: Guion de practicas 5
Version:0.1

EJERCICIO 3
Escriba un programa para leer un entero positivo. Para ello, use el bucle do-while.
Contar el número de dígitos que componen el número que se ha leído.
*/
#include <iostream>

using namespace std;

int main()
{
    int n,veces=0,digito;
    //tomamos el numero positivo
    do {
        cout << "Introduzca un numero positivo: ";
        cin >> n;
    } while (n<=0);

	//contamos los digitos del numero
    while(n!=0) {
        digito=n%10;
        n=n/10;
        veces++;
    }
    cout << "El numero tiene "<<veces<<" digitos"<<endl;
}
