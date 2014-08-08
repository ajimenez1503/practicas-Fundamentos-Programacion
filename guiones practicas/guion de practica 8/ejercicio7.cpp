/* (C) Programmed by:
   Antonio Jimenez Martínez


Practica Fundamentos de programacion: Guion de practicas 8
Version:0.1

EJERCICIO 7
Escriba un programa que lea un número positivo y escriba su descomposición en
números primos. Para ello, incluya una función que recibe un número y calcula su
descomposición en números primos, obteniendo el resultado en un vector de
enteros.
*/
#include <iostream>
#include <vector>

using namespace std;
void descomponer(int numero,vector<int> & factorizacion)
{
    while (numero>1) {
        while (numero%2==0) { //mientras se pueda dividir entre 2
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
}

int main()
{
    int numero;
    vector<int>factorizacion;
    cout << "Introduce un numero positivo para descomponer: " << endl;
    cin>> numero;
    while(numero<=0)
    {
        cout << "introduce un numero positivo para descomponer" << endl;
        cin>> numero;
    }
    descomponer(numero,factorizacion);
    cout<<"Los factores son: "<<endl;
    for(int i=0; i<factorizacion.size(); i++)
        cout<<factorizacion.at(i)<<endl;

}
