/* (C) Programmed by:
   Antonio Jimenez Martínez


Practica Fundamentos de programacion: Guion de practicas 8
Version:0.1

EJERCICIO 18
Considere el programa del ejercicio 4, donde se obtenían los números primos hasta
un número n. Este ejercicio puede resultar muy costoso en memoria, ya que si este
valor es muy alto, haría falta una cantidad de memoria muy grande. En este
ejercicio, se propone mejorarlo para que la memoria no sea del orden de n, sino del
número de primos que existan hasta n.
Para resolverlo, mantenga dos vectores, uno con los primos obtenidos y otro con el
siguiente valor a tachar para cada uno de esos primos. Al analizar un número, vemos
si es menor que el mínimo de los que hay que tachar. Si es menor, es que es primo y
hay que añadirlo a la lista junto con el valor siguiente a tachar (2 veces el primo). Si
no es menor (es igual) es que ese valor no hay que añadirlo, aunque sí habrá que
modificar el valor a tachar equivalente (añadiendo el correspondiente primo).
Observe que con los dos vectores, básicamente, tenemos una lista de parejas,
(primo/valor a tachar). Resuélvalo manteniendo esa lista ordenada según ese valor a
tachar (el mínimo será siempre el elemento cero o el último).
*/
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

//compruba si un numero esta en un vector
bool esta(const int numero,const vector<int> &v){
    bool esta=false;
    for(int i =0;i<v.size();i++){
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
//muestra los primo
void leer(const vector<int> &a){
    cout<<"los primos son "<<endl;
    for(int i =0;i<a.size();i++)
        cout<<a.at(i)<<endl;
}

int main()
{
    int n;
    cout << "dime el numero de valores que quieres evaluar" << endl;
    cin>>n;
    vector<int>primos;
    criba(n,primos);
    leer(primos);

}
