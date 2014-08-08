/* (C) Programmed by:
   Antonio Jimenez Martínez


Practica Fundamentos de programacion: Guion de practicas 8
Version:0.1

EJERCICIO 4
Escriba un programa que calcule todos los números primos menores que un número
n dado. Para ello, use la criba de Eratóstenes. La idea consiste en
escribir todos los números hasta el n, y recorrerlos de uno en uno. Si un número no
se ha tachado, se tacharán todos sus múltiplos. Cuando hemos recorrido todos los
números, aquellos no tachados son los números primos.
Para resolverlo, pida un número entero positivo, y declare un vector conteniendo
booleanos. El booleano de la posición i indica si se ha tachado el valor i. Como
resultado, escribirá todos los primos resultantes.
*/
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    int n;
    cout << "Dime el numero de valores que quieres evaluar: " << endl;
    cin>>n;
    vector<bool> primos(n,true);
    int max=sqrt(n);
    primos.at(0)=false;//0 no es primo
    primos.at(1)=false;//1 no es primo
    for(int i=2; i<=max; i++) { //empezamos desde 2 hasta la parte entrera de la raiz cuadrada de n
        if( primos.at(i)==true) { //si es numero es primo -> ponemos no primos todos sus multiplos
            for(int k=i+1; k<n; k++) { //recorremos los multuplos
                if (k%i==0) primos.at(k)=false;
            }
        }
    }
    for(int l=0; l<n; l++) {
        cout<<"El numero "<<l<<"es primo "<<primos.at(l)<<endl;
    }
}
