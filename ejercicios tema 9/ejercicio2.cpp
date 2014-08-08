/* (C) Programmed by:
   Antonio Jimenez Martínez


Practica Fundamentos de programacion: ejercicios tema 9
Version:0.1

EJERCICIO  2
Implemente una función recursiva que calcule la sumatoria
de todos los elementos de un vector de enteros.
*/
#include <iostream>
#include <vector>

using namespace std;

int suma(const vector<int> &v,int ini);


int main()
{
    vector<int> datos;
    int num;
    cout << "Introduce los numeros: "<<endl;
    cin >> num;
    while (num>=0)
    {
        datos.push_back(num);
        cin >> num;
    }
    cout << "La sumatoria de los valores del vector es: " <<suma(datos,0)<<endl;

}

int suma(const vector<int> &v,int ini)
{
    if(ini==(v.size()-1))
        return v.at(ini);
    else
        return (v.at(ini)+suma(v,ini+1));
}
