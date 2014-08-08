/* (C) Programmed by:
   Antonio Jimenez Martínez


Practica Fundamentos de programacion: Guion de practicas 8
Version:0.1

EJERCICIO 8
Una empresa de ventas recibe una secuencia de enteros para controlar el número de
ventas de cada uno de sus vendedores. Las ventas de un vendedor consisten en una
secuencia de números enteros no negativos terminada con un valor -1 que indica
final de secuencia. El conjunto de ventas total, se compone de una secuencia de
ventas de vendedores terminada con un número -2 para indicar final de vendedores.

Por ejemplo, en la siguiente secuencia se muestran las ventas de 4 vendedores:
3 5 0 2 -1 4 11 2 -1 7 1 -1 8 9 5 10 2 -1 -2
donde vemos que han vendido 10, 17, 8 y 34 unidades cada uno.

Escriba un programa que lea una secuencia como la anterior, calcule el número de
ventas de cada vendedor, y escriba el número de vendedor con mayores ventas así
como su secuencia correspondiente.
*/
#include <iostream>
#include <vector>

using namespace std;


//crea el vector de vectores desde la entrada estandar
void introducir (vector<vector<int> > &total)
{
    int datos;
    cout << "Dame elementos:" << endl;
    cin>>datos;
    while(datos!=-2) {
        vector<int> ventas;
        while(datos!=-1) {
            ventas.push_back(datos);
            cout << "Dame elementos:" << endl;
            cin >> datos;

        }
        total.push_back(ventas);
        cout << "Dame elementos:" << endl;
        cin >> datos;
    }
}

//suma los elementos de un vector
int sumarvector(const vector<int> & venta)
{
    int suma=0;
    for(int i=0; i<venta.size(); i++)
        suma+=venta.at(i);
    return suma;
}

//muestra los datos del vector de vectores
void leer (vector<vector<int> > &total)
{
    cout << "datos introducidos:" << endl;
    for (int f=0; f<total.size(); f++) {
        for (int c=0; c<total.at(f).size(); c++)
            cout << total.at(f).at(c) << " ";
    }
}


//crea el vector de sumatorias de cada cliente
void numerodeventas(const vector<vector<int> > &total,vector<int> &sumatoria)
{
    for(int i=0; i<total.size(); i++) {
        sumatoria.push_back(sumarvector(total.at(i)));
    }

}

//muestra el vector de sumatorias de cada cliente
void leerventas(const vector<int> &sumatoria)
{
    cout<<"Se han vendidos: ";
    for(int i=0; i<sumatoria.size(); i++)
        cout<<sumatoria.at(i)<<" , ";
}


//devuelve la vecta mayor y en el cliente que la tiene
void calcularlasventasmayores(const vector<int> &sumatoria,int &max,int &pos)
{
    max=sumatoria.at(0);
    pos=1;
    for(int i=1; i<sumatoria.size(); i++) {
        if (max<sumatoria.at(i)) {
            max=sumatoria.at(i);
            pos=i+1;
        }
    }
}



int main()
{
    int max,pos;
    vector<vector<int> > total;
    introducir(total);
    vector<int> sumatoria;
    numerodeventas(total,sumatoria);
    leerventas(sumatoria);
    calcularlasventasmayores(sumatoria,max,pos);
    cout<<"Las mayores ventas coresponden al vendedor numero "<<pos<<" y estas son: "<<max<<endl;
}
