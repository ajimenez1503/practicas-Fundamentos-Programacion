/* (C) Programmed by:
   Antonio Jimenez Martínez


Practica Fundamentos de programacion: Guion de practicas 5
Version:0.1

EJERCICIO 24
Un número entero de n dígitos se dice que es narcisista si se puede obtener como la
suma de las potencias n-ésimas de cada uno de sus dígitos. Por ejemplo 153 y 8208
son números narcisistas porque 153=1³ 5³3³ y 8208=8⁴ 2⁴0⁴ 8⁴.
Escriba un programa que lea un número entero positivo y nos diga si es narcisista o no.

*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int numero,i,n,cuadrado=0;
    cout<<"Introduce un numero para saber si es narcisita: ";
    cin>>numero;
    n=numero;
    int numeroi=numero;
    //comrprobamos cuantos digitos tiene el numero
    for(i=0; numero!=0; i++) {
        int digito=numero%10;
        numero=numero/10;
    }

    cout<<n<<" tiene "<<i<<"valores"<<endl;

    //comprobamso si es narcisista
    while(n!=0) {
        int digito=n%10;
        cuadrado=cuadrado+pow(digito,i);
        n=n/10;
    }
    cout<<"el cuadrado de "<<numeroi<<" es "<<cuadrado<<endl;

    if(cuadrado==numeroi)
        cout<<numeroi<<" es un numero narcsita\n";
    else
        cout<<numeroi<<" no es un numero narcisita\n";
}
