/* (C) Programmed by:
   Antonio Jimenez Martínez


Practica Fundamentos de programacion: Guion de practicas 8
Version:0.1

EJERCICIO 14
Se desea realizar un programa para calcular la frecuencia de las letras en un
documento. Para ello, se analizarán las apariciones de cada una de las letras de la
parte básica de la tabla ASCII (los caracteres del cero al 127).
Escriba un programa que lea los caracteres de un texto hasta encontrar el carácter
'#'. Para cada uno de los caracteres leídos, calculará la frecuencia de aparición.
Como resultado, escribirá en la salida estándar cada uno de los pares
carácter/frecuencia de mayor a menor frecuencia. Sólo se imprimirán los caracteres
que hayan aparecido, al menos, una vez.
*/

#include <iostream>
#include <vector>

using namespace std;

//Crea un vector con el texto, va incrementando las posiciones de las letras cada vez que aparezcan
void crear(vector<char> &lista,vector<int> &contador)
{
    char letra;
    cout<<"Introduce el texto:"<<endl;
    cin>>letra;
    while(letra!='#')
    {
        lista.push_back(letra);
        contador.at(letra)++;//incrementa la letra que aparece
        cin>>letra;
    }
}

//crea un vector con todos los caracteres
void todasletras(vector<char> &todas)
{
    for(char i=0; i<todas.size(); i++)
        todas.at(i)=i;
}

// elimina tanto del vector letras como de contador las letra que no aparecen.
void eliminar0(vector<char> &letras,vector<int> &contador)
{
    int pos=0;
    while(pos<contador.size())
    {
        if (contador.at(pos)==0)
        {
            contador.at(pos) = contador.at(contador.size()-1);
            contador.pop_back();
            letras.at(pos)=letras.at(letras.size()-1);
            letras.pop_back();
        }
        else pos++;

    }
}

//swap de dos char
void Intercambialetras(char &v1, char &v2)
{
    char aux = v1;
    v1 = v2;
    v2 = aux;
}
//swap de dos numeros
void Intercambia(int &v1, int &v2)
{
    int aux = v1;
    v1 = v2;
    v2 = aux;
}
//busca el minimo
int BuscaMinimo(const vector<int> &v, int pini)
{
    int pmin=pini;
    for (int i=pini+1; i<v.size(); i++)
        if (v.at(i)<v.at(pmin))
            pmin = i;
    return pmin;
}

//ordena tanto el vector de letra como el de contador.
//ordena a partir del vector de contador
void OrdenaSeleccion(vector<int> &v,vector<char> &v2)
{
    for (int pos=0; pos<v.size()-1; pos++)
    {
        int pmin = BuscaMinimo(v,pos);
        Intercambia(v.at(pos),v.at(pmin));
        Intercambialetras(v2.at(pos),v2.at(pmin));
    }
}

//muesta la letra y el numero de veces que aparece
void leer(const vector<int> &v,const vector<char> &v2)
{
    for(int i=0; i<v.size(); i++)
    {
        cout<<" el digito "<<v2.at(i)<<" se repite "<<v.at(i)<<" veces"<<endl;
    }
}


int main()
{
    vector <char> texto;
    vector <int> contador(127,0);
    crear(texto,contador);
    vector <char> todas(127);
    todasletras(todas);
    eliminar0(todas,contador);
    OrdenaSeleccion(contador,todas);
    leer(contador,todas);
}
