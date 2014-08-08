/* (C) Programmed by:
   Antonio Jimenez Martínez


Practica Fundamentos de programacion: Guion de practicas 9
Version:0.1

EJERCICIO 2
Escriba un programa que lea una palabra y diga si es un palíndromo, es decir, si se
lee igual de derecha a izquierda que de izquierda a derecha. Por ejemplo, la palabra
“radar” es un palíndromo. Para resolverlo, no es necesario que considere casos
especiales de mayúsculas, acentos, etc.
*/

#include <iostream>
#include <string>

using namespace std;

//devuelve el string invertido de c1
string invertir(const string &c1)
{
    string c2;
    for(int i=c1.size()-1; i>=0; i--) {
        c2+=c1.at(i);
    }
    return c2;
}

int main()
{
    string cad1,cad2;
    cout<<"Escribe la palabra: "<<endl;
    getline(cin,cad1);
    cad2=invertir(cad1);
    if(cad1==cad2)
        cout<<cad1<<" es Palindromo\n";
    else
        cout<<cad1<<" no es Palindromo\n";

}
