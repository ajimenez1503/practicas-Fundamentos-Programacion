/* (C) Programmed by:
   Antonio Jimenez Martínez


Practica Fundamentos de programacion: Guion de practicas 8
Version:0.1

EJERCICIO 11
Escriba un programa que reciba un entero indicando el número de datos que se van
a introducir, seguido de tantos datos como indique dicho número, y obtenga como
salida la mediana de los datos.
La mediana es el valor que deja por debajo a la mitad de los datos y por encima a la
otra mitad. Si el número de datos es impar, la mediana corresponde al valor central,
y si es par, se puede obtener como la media de los dos centrales.
*/
#include <iostream>
#include <vector>

using namespace std;
//desplaza un elemento hacia atras, mientras sea menor
void DesplazaHaciaAtras(vector<int> &v, int pos)
{
    int aux = v.at(pos);
    int i;
    for (i=pos; i>0 && aux<v.at(i-1); i--)
        v.at(i) = v.at(i-1);
    v.at(i) = aux;
}

//ordena el vector
void OrdenaInsercion(vector<int> &v)
{
    for (int pos=1; pos<v.size(); pos++)
        DesplazaHaciaAtras(v,pos);
}

//crea el vector
void crear(vector<int> &lista)
{
    cout<<"Introduce los datos:\n";
    for(int i=0; i<lista.size(); i++)
    {
        cin>>lista.at(i);
    }
}

//calcula mediana
double mediana(const vector<int> &lista)
{
    double mediana;
    int tamano=lista.size();
    int mitad=tamano/2;
    if(tamano%2==0)
        mediana=((lista.at(mitad)+lista.at((mitad)-1))/2.0);
    else
        mediana=lista.at(mitad);
    return mediana;
}
int main()
{
    int cantidad;
    cout << "numero de valores del vector" << endl;
    cin>>cantidad;
    vector<int> datos(cantidad);
    crear(datos);
    OrdenaInsercion(datos);
    cout<<"la median es "<<mediana(datos);

}
