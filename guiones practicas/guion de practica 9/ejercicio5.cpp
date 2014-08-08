/* (C) Programmed by:
   Antonio Jimenez Martínez


Practica Fundamentos de programacion: Guion de practicas 9
Version:0.1

EJERCICIO 5
Escriba un programa para detectar si una frase en un palíndromo. El programa
pregunta por una frase, y tras leer la línea, escribe en la salida estándar si se trata
de un palíndromo. Para ello, deberá eliminar los espacios que contiene la frase antes
de comprobar si el resultado es un palíndromo. Tenga en cuenta que la entrada
deberá darla sin mayúsculas y acentos.
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

//elimina los espacios
void eliminarespacios (string &c2) {
    for(int i=0; i<c2.size(); i++) {
        if(c2.at(i)==' ') {
            c2.erase(i,1);
            i--;
        }
    }
}

//comprueba si dos string son iguales
//si lo son dice que es palindromo
void palindromo (string &c1,string &c2 )
{
    eliminarespacios(c1);
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
    palindromo(cad1,cad2);


}
