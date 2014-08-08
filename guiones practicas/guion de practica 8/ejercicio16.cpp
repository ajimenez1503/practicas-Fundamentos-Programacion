/* (C) Programmed by:
   Antonio Jimenez Martínez


Practica Fundamentos de programacion: Guion de practicas 8
Version:0.1

EJERCICIO 16
Escriba un programa que lea una secuencia de números positivos hasta que le demos un
valor cero o negativo y aplique un algoritmo similar para obtener el MCD de todos
ellos.
Para resolver el problema, deberá descomponer cada uno de los números en primos.
Cada descomposición deberá incluirse dentro de un vector de descomposiciones. Ese
vector se pasará a una función que devolverá la descomposición en primos del MCD
buscado.
Tenga en cuenta que el algoritmo del ejercicio 15 se puede generalizar creando un
vector de índices que controlan por dónde vamos en cada descomposición. Mientras
haya valores a procesar, será necesario comprobar si tenemos un mismo primo en
cada uno de esas secuencias, en cuyo caso lo incluiremos en la solución.
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
//crea un vector con la descomposicion de un numero
void descomponer(int numero,vector<int>& factorizacion) {
    while (numero>1) {
        while(numero%2==0) {//mientras se pueda dividir entre 2
            numero=numero/2;
            factorizacion.push_back(2);
        }
        for(int n=3; numero>1 && n<=numero; n+=2) {//comprueba si el numero es divisible por el resto de numero hasta el mismo
            while(numero%n==0) {
                if (numero%n==0) {
                    numero=numero/n;
                    factorizacion.push_back(n);
                }
            }
        }
    }
    OrdenaInsercion(factorizacion);
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
        aux=calcularmcd(v.at(0),v.at(1));
        for(int i=2; i<v.size(); i++) {
            aux=calcularmcd(aux,v.at(i));//combina soluciones
        }
    }
    return aux;


}



int main()
{
    int numero;
    vector<int>numeros;
    cout << "Introduce numeros positivo para calcular su mcd:" << endl;
    cin>>numero;
    while(numero>0) {
        numeros.push_back(numero);
        cin>>numero;
    }
    vector<vector<int> > descomposiciontotal;
    for(int i=0; i<numeros.size(); i++) {
        vector<int> f;
        descomponer(numeros.at(i),f);
        descomposiciontotal.push_back(f);
    }


    vector <int>mcd;
    mcd=calcularmcd2(descomposiciontotal);
    cout<<"El mcd es "<<endl;
    for(int i=0; i<mcd.size(); i++)
        cout<<mcd.at(i)<<endl;

}
