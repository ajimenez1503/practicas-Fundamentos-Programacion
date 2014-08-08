/* (C) Programmed by:
   Antonio Jimenez Martínez


Practica Fundamentos de programacion: Guion de practicas 5
Version:0.1

EJERCICIO 22
Se dice que un número natural es feliz si cumple que al sumar los cuadrados de sus
dígitos y repetimos esta suma con los resultados que vamos obteniendo, finalmente
obtenemos el dígito 1 como resultado. Por ejemplo, el número 203 es un número
feliz ya que:
2²0²3²=13  1²3²=10  1²0²=1
Además, un número es feliz de grado k si es feliz en un máximo de k iteraciones. En
el ejemplo anterior, 203 es un número feliz de grado 3 (además, es feliz de cualquier
grado mayor o igual que 3). Escriba un programa que lea un número n y un grado k
y diga si n es feliz grado k.
*/
#include <iostream>

using namespace std;

int main()
{
    int n,numero,k,i,suma=0;
    cout<<"Introduce un numero para calcular si es feliz y el grado en el cual te imaginas que lo es:\n";
    cin>>n>>k;
    numero=n;
    for(i=1; numero!=1 && k!=i; i++) {
        suma=0;
        while(numero!=0) {
            int digito=numero%10;
            suma=suma+digito*digito;
            numero=numero/10;
        }
        numero=suma;
    }
    if(numero==1)
        cout<<n<<" es un numero feliz de "<<i<<" iteraciones las cuales son iguales o menores de las que usted imaginaba.\n";
    if(k==i)
        cout<<n<<" no es un numero feliz o necesitas mas iteraciones de las que usted imaginaba.\n";



}
