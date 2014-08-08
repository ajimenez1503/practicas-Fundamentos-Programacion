/* (C) Programmed by:
   Antonio Jimenez Martínez


Practica Fundamentos de programacion: Guion de practicas 8
Version:0.1

EJERCICIO 3
Escriba un programa que lea un número entero que indica el número de datos a
analizar y a continuación tantos números reales como indique dicho entero. Como
resultado, escribirá la media, la desviación media y la varianza de dichos datos.
*/

#include <iostream>
#include<vector>
#include<cmath>

using namespace std;


//calcula ma media de n numeros
double media (const vector<double> & numeros,int n) {
    double suma=0;
    for (int i=0; i<numeros.size(); i++)
        suma+=numeros.at(i);
    return suma/n;
}

//calcula la desviación tipica de n numeros
double des (const vector<double> & numeros,int n) {
    double suma=0;
    for (int i=0; i<numeros.size(); i++)
        suma=suma+fabs(numeros.at(i)-media(numeros,n));
    return suma/n;
}
//calcula la varianza de n numeros
double var (const vector<double> &numeros,int n) {
    double suma=0;
    for (int i=0; i<numeros.size(); i++)
        suma=suma+(numeros.at(i)-media(numeros,n))*(numeros.at(i)-media(numeros,n));
    return suma/n;
}

int main()
{
    int n;
    double num;
    cout << "Introduce el numero de elementos a analaizar: " << endl;
    cin>>n;
    vector<double>numeros(n);
    for(int i=0; i<n; i++)
    {
        cout << "Dime nota: ";
        cin >> numeros.at(i);
    }

    cout<<"La media es "<<media(numeros,n)<<" la desviacion es "<<des(numeros,n)<<" la varianza es "<<var(numeros,n)<<endl;


}
