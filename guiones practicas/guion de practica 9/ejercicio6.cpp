/* (C) Programmed by:
   Antonio Jimenez Martínez


Practica Fundamentos de programacion: Guion de practicas 9
Version:0.1

EJERCICIO 6
Escriba un programa que lea una línea inicial que contiene una cadena. Esta línea
contendrá caracteres '#'. El programa, a continuación leerá tantas líneas como
caracteres '#' tenga la línea inicial, reemplazando cada uno de ellos con las
correspondiente línea leída. Finalmente, escribirá la cadena resultante.

Para probarlo, introduzca las siguientes líneas:
Hay dos maneras de #: una es #, y la otra es #. #.
diseñar software
hacerlo # sea obvia su falta de eficiencias
tan # que
simple
hacerlo # no haya # obvias
tan # que
complejo
deficiencias
C.A.R. Hoare


Observe que las líneas que se introducen pueden, a su vez, tener nuevos caracteres
que sustituir.

*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

void calcular (const string &c,vector<int> &posiciones);

void escribirsust(string &aux);

void sustituir(string &cad1,string &aux,vector<int> &posiciones);

int main()
{
    string cad1,aux;
    vector<int> posiciones;
    cout << "Leer primera linea: " << endl;
    getline(cin,cad1);
    calcular(cad1,posiciones);
    sustituir(cad1,aux,posiciones);
    cout<<cad1<<endl;

}

//calcula las posiciones en las cuales hay un caracter "#" y las introduce en un vector
void calcular (const string &c,vector<int> &posiciones)
{
    for(int i=0; i<c.size(); i++)
    {
        if(c.at(i)=='#')
            posiciones.push_back(i);
    }
}

//pide la cadena y realiza las sustituciones pertinentes
void escribirsust(string &aux)
{
    vector<int>auxpos;
    string aux2;
    cout<<"Escribe linea para sustituir: "<<endl;
    getline(cin,aux);
    calcular(aux,auxpos);//calcula las posiciones con el caracter "#"
    sustituir(aux,aux2,auxpos);//sustituye los carecteres "#" por cadenas

}


//sustituye los caracteres "#" por las cadenas
void sustituir(string &cad1,string &aux,vector<int> &posiciones)
{
    int tam=0;

    for(int i=0; i<posiciones.size(); i++) {
        escribirsust(aux);//cogemos la linea que debe sustituir
        cad1.replace(posiciones.at(i)+tam,1,aux);//remplazamos el caracter "#" por la cadena
        tam+=aux.size()-1;//modificamos el tamaño de la linea.
    }


}
