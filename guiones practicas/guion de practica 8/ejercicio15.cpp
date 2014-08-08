/* (C) Programmed by:
   Antonio Jimenez Martínez


Practica Fundamentos de programacion: Guion de practicas 8
Version:0.1

EJERCICIO 15
Considere la función  para obtener la descomposición en números
primos.
Escriba un programa que lea dos números enteros positivos y que escriba su
máximo común divisor (MCD). Para calcularlo, descomponga los números en primos
y úselos para obtener la descomposición del MCD.
Recuerde que el MCD se puede obtener como los primos comunes a la mínima
potencia. Un algoritmo muy simple sería recorrer las descomposiciones como si se
mezclaran. En el caso de que un número sólo esté en una de ellas, se descarta, y si
encontramos dos números comunes en las dos, incluimos uno de ellos en el resultado
y avanzamos en las dos.
*/
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
//compruba si un numero esta en un vector
bool esta(const int numero,const vector<int> &v) {
    bool esta=false;
    for(int i =0; i<v.size(); i++) {
        if(numero==v.at(i))
            esta=true;
    }
    return esta;

}

//devuelve los numero primos menores o iguales a n
void criba(int n,vector<int> &final) {
    vector<int>tachados;//creamos un vector donde aparecen los numero que no son primos.
    for(int i=2; i<=n; i++) {
        if( !esta(i,tachados)) {
            final.push_back(i);
            for(int k=i+1; k<=n; k++) {
                if (k%i==0)
                    tachados.push_back(k);
            }
        }
    }
}

//Crea el vectro factorizacion con los numeros primos.
void descomponer(int numero,vector<int>& factorizacion,const vector<int> & primos) {
    for(int i=0; primos.at(i)<=numero && i<primos.size(); i++) {
        while(numero%primos.at(i)==0) {
            numero=numero/primos.at(i);
            factorizacion.push_back(primos.at(i));
        }
    }
}
//calcula maximo comun divisor de dos numeros
//le pasamos la descomposivion de primos de cada numero
vector<int> calcularmcd(vector<int> f1,vector<int> f2) {
    int pos1=0,pos2=0;
    vector<int>mcd;
    while(pos1<f1.size()&&pos2<f2.size()) {
        if(f1.at(pos1)==f2.at(pos2)) {
            mcd.push_back(f1.at(pos1));
            pos1++;
            pos2++;
        }
        else {
            if(f1.at(pos1)<f2.at(pos2))
                pos1++;
            else
                pos2++;
        }
    }
    return mcd;

}

int main()
{
    int numero1,numero2;
    vector<int>factorizacion1;
    vector<int>factorizacion2;
    vector<int>posiblesfactores;
    cout << "Introduce dos numero positivo para descomponer:\n";
    cin>> numero1>>numero2;
    if(numero1>=numero2) criba(numero1,posiblesfactores);
    else criba(numero2,posiblesfactores);
    descomponer(numero1,factorizacion1,posiblesfactores);
    descomponer(numero2,factorizacion2,posiblesfactores);
    vector <int>mcd;
    mcd=calcularmcd(factorizacion1,factorizacion2);
    cout<<"El mcd es: "<<endl;
    for(int i=0; i<mcd.size(); i++)
        cout<<mcd.at(i)<<endl;

}
