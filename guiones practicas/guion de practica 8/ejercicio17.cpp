/* (C) Programmed by:
   Antonio Jimenez Martínez


Practica Fundamentos de programacion: Guion de practicas 8
Version:0.1

EJERCICIO 17
Considere el programa del ejercicio 16 para obtener el MCD, así como el ejercicio 4
donde se obtiene una lista de números primos hasta un número n. Modifique el
programa del ejercicio 16 de forma que la función que obtiene la descomposición en
números primos pueda usar la criba de Eratóstenes.
*/
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
//calcula el maximo de un vector
int calcularmaximo(const vector<int> &v) {
    int max=v.at(0);
    for(int i=1; i<v.size(); i++) {
        if(v.at(i)>max)
            max=v.at(i);
    }
    return max;
}
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
//calcula maximo comun divisor de un conjunto de numeros
//le pasamos la descomposivion de primos de cada numero
vector<int> calcularmcd2(const vector<vector<int> > &v) {
    vector<int>aux;
    if(v.size()>1) {
        aux=calcularmcd(v.at(1),v.at(2));
        for(int i=2; i<v.size(); i++) {
            aux=calcularmcd(aux,v.at(i));
        }
    }
    return aux;


}



int main()
{
    int numero;
    vector<int>numeros;
    cout << "introduce numeros positivo para calcular su mcd" << endl;
    cin>>numero;
    while(numero>0) {
        numeros.push_back(numero);
        cin>>numero;
    }
    int nmayor=calcularmaximo(numeros);
    vector<int> posiblesfactores;
    criba(nmayor,posiblesfactores);
    vector<vector<int> > descomposiciontotal;
    for(int i=0; i<numeros.size(); i++) {
        vector<int> f;
        descomponer(numeros.at(i),f,posiblesfactores);
        descomposiciontotal.push_back(f);
    }


    vector <int>mcd;
    mcd=calcularmcd2(descomposiciontotal);
    cout<<"el mcd es "<<endl;
    for(int i=0; i<mcd.size(); i++)
        cout<<mcd.at(i)<<endl;

}
