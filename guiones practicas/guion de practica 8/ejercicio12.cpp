/* (C) Programmed by:
   Antonio Jimenez Martínez


Practica Fundamentos de programacion: Guion de practicas 8
Version:0.1

EJERCICIO 12
Escriba un programa que recibe dos secuencias de elementos ordenadas y escribe el
resultado como una secuencia mezcla de las dos anteriores. Cada secuencia se
introduce como un entero con el número de elementos seguido de éstos.
El programa debe asegurar que si cualquiera de las secuencias no está ordenada, se
ordena antes de la mezcla. Dado que la mayoría de las veces estarán ordenadas,
asegúrese que el algoritmo que aplica para ordenar es muy eficiente en este caso.
*/
#include <iostream>
#include <vector>

using namespace std;
//muestra un vector
void leer(vector<int> &lista)
{
    for(int i=0; i<lista.size(); i++)
    {
        cout<<lista.at(i)<<endl;
    }
}

//crea un vetor
void crear(vector<int> &lista)
{
    cout<<"Introduce los datos:\n";
    for(int i=0; i<lista.size(); i++)
    {
        cin>>lista.at(i);
    }
}
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

//combina dos vectores y elimina repetidos y como resultado devuelve un vector ordenado
vector<int> combinar(const vector<int> &v1,const vector<int> &v2) {
    vector<int>final;
    int i=0,j=0;
    while(i<v1.size() &&  j<v2.size()) {
        if(v1.at(i)<v2.at(j)) {
            final.push_back(v1.at(i));
            i++;
        }
        else {
            if(v1.at(i)>v2.at(j)) {
                final.push_back(v2.at(j));
                j++;
            }
            else {//v1.at(i)==v2.at(j))
                final.push_back(v1.at(i));
                j++;
                i++;
            }
        }

    }
    while(i<v1.size()) {
        final.push_back(v1.at(i));
        i++;
    }
    while(j<v2.size()) {
        final.push_back(v2.at(j));
        j++;
    }
    return final;
}


int main()
{
    int cantidad1,cantidad2;
    cout<<"di el numero de elementos del primer vector: ";
    cin>>cantidad1;
    vector<int>vector1(cantidad1);
    crear(vector1);
    OrdenaInsercion(vector1);
    cout<<"di el numero de elementos del segundo vector: ";
    cin>>cantidad2;
    vector<int>vector2(cantidad2);
    crear(vector2);
    OrdenaInsercion(vector2);
    vector<int>final;
    final=combinar(vector1,vector2);
    cout<<"el vector resultante es: \n";
    leer(final);

}
