/* (C) Programmed by:
   Antonio Jimenez Martínez


Practica Fundamentos de programacion: Guion de practicas 9
Version:0.1

EJERCICIO 3
Escriba un programa que lea repetidamente palabras hasta que se introduzca FIN.
A continuación de cada palabra, deberá indicar si es un palíndromo o no.
*/
#include <iostream>
#include <string>

using namespace std;

//devuelve el string invertido de c1
string invertir(const string &c1)
{
    string c2(c1);
    int pos=0;
    for(int i=c1.size()-1; i>=0; i--)
    {
        c2.at(pos)=c1.at(i);
        pos++;
    }
    return c2;
}

//comprueba si dos string son iguales
//si lo son dice que es palindromo
void palindromo (const string &c1,string &c2 )
{
    c2=invertir(c1);
    if(c1==c2)
        cout<<c1<<" es Palindromo"<<endl;
    else
        cout<<c1<<" no es Palindromo"<<endl;
}

int main()
{

    string cad1,cad2;
    cout<<"Escribe la palabra: "<<endl;
    getline(cin,cad1);
    while(cad1!="FIN")
    {
        palindromo(cad1,cad2);
        cout<<"Escribe la palabra: "<<endl;
        getline(cin,cad1);
    }

}
