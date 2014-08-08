/* (C) Programmed by:
   Antonio Jimenez Martínez


Practica Fundamentos de programacion: Guion de practicas 5
Version:0.1

EJERCICIO 7
Se desean calcular las soluciones de una ecuación de tercer grado 2x³8x²−5
para la que se han determinado tres soluciones en los intervalos:
[-4,-3] [-2,0] [0,1]
Escriba un programa para calcular una solución con la precisión que se desee. Para
ello, el programa leerá los dos extremos del intervalo y un valor que indique el error
máximo de la solución y aplicará el método de bisección para indicar -en la salida
estándar- el valor aproximado de la solución, así como el número de iteraciones que
ha necesitado para calcularlo.

*/
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x1,x2,x3,a1,b1,a2,b2,a3,b3,precision,centro,fcentro;
    cout<<"Como la funcion es de tercer grado tiene tres soluciones.\nIntroduce la precisión para el erro maximo de la solucion.\n";
	cin>>precision;
	cout<<"Introduce el primer intervalo donde encontramos la primera solucion: \n";
    cin>>a1>>b1;
    double fa1=2*a1*a1*a1+8*a1*a1-5;
    double fb1=2*b1*b1*b1+8*b1*b1-5;
    cout<<"f(a) es "<<fa1<<" y f(b) es "<<fb1<<endl;
    while(abs(a1-b1)>precision) {
        centro=(a1+b1)/2;
        fcentro=2*centro*centro*centro+8*centro*centro-5;
        if ((fa1*fcentro)<0)
            b1=centro;
        if ((fb1*fcentro)<0)
            a1=centro;
        if (fcentro==0)
            b1=centro;
        a1=centro;
    }
    x1=(a1+b1)/2;
    cout<<"El primer resultado es: "<<x1<<endl;

    cout<<"Introduce el segundo intervalo donde encontramos la primera solucion:\n";
    cin>>a2>>b2;
    double fa2=2*a2*a2*a2+8*a2*a2-5;
    double fb2=2*b2*b2*b2+8*b2*b2-5;
    cout<<"f(a) es "<<fa2<<" y f(b) es "<<fb2<<endl;
    while(abs(a2-b2)>precision) {
        centro=(a2+b2)/2;
        fcentro=2*centro*centro*centro+8*centro*centro-5;
        if ((fa2*fcentro)<0)
            b2=centro;
        if ((fb2*fcentro)<0)
            a2=centro;
        if (fcentro==0)
            b2=centro;
        a2=centro;
    }
    x2=(a2+b2)/2;
    cout<<"El primer resultado es: "<<x2<<endl;

    cout<<"Introduce el tercer intervalo donde encontramos la primera solucion:\n";
    cin>>a3>>b3;
    double fa3=2*a3*a3*a3+8*a3*a3-5;
    double fb3=2*b3*b3*b3+8*b3*b3-5;
    cout<<"f(a) es "<<fa3<<" y f(b) es "<<fb3<<endl;
    while(abs(a3-b3)>precision) {
        centro=(a3+b3)/2;
        fcentro=2*centro*centro*centro+8*centro*centro-5;
        if ((fa3*fcentro)<0)
            b3=centro;
        if ((fb3*fcentro)<0)
            a3=centro;
        if ((fcentro)==0)
            a3=centro;
        b3=centro;
    }
    x3=(a3+b3)/2;
    cout<<"El primer resultado es: "<<x3<<endl;

}
