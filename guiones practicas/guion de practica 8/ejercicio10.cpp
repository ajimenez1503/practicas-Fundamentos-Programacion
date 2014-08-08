/* (C) Programmed by:
   Antonio Jimenez Martínez


Practica Fundamentos de programacion: Guion de practicas 8
Version:0.1

EJERCICIO 10
Escriba un programa para obtener la frecuencia de los datos de entrada. El
programa recibe un entero que indica el número de datos, seguido de los datos. La
salida será el conjunto de datos introducidos junto con su frecuencia.
Por ejemplo, una secuencia de 14 datos podría ser:
14 3 5 5 2 4 1 2 3 1 5 4 5 2 1
y la correspondiente salida sería:
(1 → 3 veces) (2 → 3 veces) (3 → 2 veces) (4 → 2 veces) (5 → 4 veces)

*/
#include <iostream>
#include <vector>

using namespace std;

//creamos el vector
void crear(int cantidad,vector<int> &lista)
{
    cout<<"Introduce los datos:\n";
    for(int i=0; i<cantidad; i++)
    {
        cin>>lista.at(i);
    }
}

//swap dos valores
void intercambiar(int &v1,int &v2)
{
    int aux=v1;
    v1=v2;
    v2=aux;
}

//busca el elemento minimo
int buscamin (const vector<int> &v,int pini)
{
    int pmin=pini;
    for(int i=pmin+1; i<v.size(); i++)
    {
        if(v.at(i)<v.at(pmin))
            pmin=i;
    }
    return pmin;
}
//ordena un vector
void ordenar(vector<int> &v)
{
    for(int pos=0; pos<v.size()-1; pos++)
    {
        int pmin=buscamin(v,pos);
        intercambiar(v.at(pos),v.at(pmin));
    }
}
//devuelve un vector sin elementos repetidos
vector<int> eliminarrepeticiones (const vector<int> &v)
{
    vector<int>sinrepeticiones;
    sinrepeticiones.push_back(v.at(0));
    for(int i=1; i<v.size(); i++)
    {
        if(v.at(i)!=v.at(i-1))
            sinrepeticiones.push_back(v.at(i));
    }
    return sinrepeticiones;
}

//devuelve un vector que almacena la frecuenca de los elemntos iguales de un vectro ordenado
vector<int> frecuencia(const vector<int> &v,int tamano)
{
    int anterior=v.at(0);
    vector<int> frecu(tamano);
    int pos=0;
    for(int i=0; i<v.size(); i++)
    {
        if(v.at(i)==anterior)
            frecu.at(pos)++;
        else
        {
            pos++;
            frecu.at(pos)++;
        }
        anterior=v.at(i);
    }
    return frecu;
}

//muestra la frecuencia
void leerfrec(const vector<int> &v,const vector<int>w)
{
    for(int i=0; i<v.size(); i++)
        cout<<"el numero "<<v.at(i)<<" se repite "<<w.at(i)<<" veces"<<endl;
}


int main()
{
    int cantidad;
    cout << "numero de datos" << endl;
    cin>>cantidad;
    vector<int> lista(cantidad);
    crear(cantidad,lista);
    ordenar(lista);
    vector<int> perfecto;
    perfecto=eliminarrepeticiones(lista);
    int tamano=perfecto.size();
    vector<int> frecu;
    frecu=frecuencia(lista,tamano);
    leerfrec(perfecto,frecu);
}
