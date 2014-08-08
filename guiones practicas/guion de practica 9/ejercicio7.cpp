/* (C) Programmed by:
   Antonio Jimenez Martínez


Practica Fundamentos de programacion: Guion de practicas 9
Version:0.1

EJERCICIO 7
Escriba un programa que lea múltiples líneas de texto hasta que se encuentre una
que contenga únicamente los 5 carateres “#FIN#”. Después, solicitará una cadena
e indicará las veces que se repite en las líneas de texto introducidas.
El programa repite la pregunta y busca la nueva cadena hasta que le damos la cadena “#FIN#”.
Realice el programa acumulando las líneas de texto en un único objeto de tipo
string, separando las distintas líneas con un carácter ' \n”, para localizar sobre él las
cadenas a buscar.
*/

#include <iostream>
#include <string>
using namespace std;

void leer (string &c);
void pedirycalcular (const string &c,string &busca);
int frecuencia(const string &c,const string &busca);

int main()
{
    string texto,busca;
    leer(texto);
    pedirycalcular(texto,busca);
}
//Lee el texto donde se buscara
void leer (string &c)
{
    string aux;
    cout<<"Escribe el texto: "<<endl;
    getline(cin,aux);
    while(aux!="FIN")
    {
        c+=aux+'\n';
        getline(cin,aux);
    }
}

//pide la palbra a buscar y calcula las veces que aparece.
void pedirycalcular (const string &c,string &busca)
{
    int veces=0;
    cout<<"escribe la palabra a buscar"<<endl;
    getline(cin,busca);
    while(busca!="FIN")
    {
        veces=frecuencia(c,busca);
        cout<<"La cadena \""<<busca<<"\" se repite "<<veces<<endl;
        cout<<"Escribe la palabra a buscar"<<endl;
        getline(cin,busca);
    }
}

//calcula cuantas veces aparece el string busca en el string c.
int frecuencia(const string &c,const string &busca)
{
    int veces=0;
    string::size_type pos = c.find(busca);
    if (pos!=string::npos) {
        veces++;
        pos = c.find(busca,pos+1);
        while(pos!=string::npos)
        {
            veces++;
            pos = c.find(busca,pos+1);
        }
    }
    return veces;
}
