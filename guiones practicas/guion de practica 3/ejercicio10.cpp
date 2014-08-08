/* (C) Programmed by:
   Antonio Jimenez Martínez


Practica Fundamentos de programacion: Guion de practicas 3
Version:0.1

EJERCICIO 10
Escriba un programa que lea dos valores reales y que presente un menú con cuatro
alternativas: Suma, Resta, Producto y División. El programa deberá pedir al usuario
que seleccione una de las cuatro y presentar en la salida estándar el resultado de la
operación correspondiente. Tenga en cuenta que el usuario puede responder a la
selección tanto con alguno de los 4 dígitos “1234” como con cualquiera de los cuatro
operadores “/+-*”. Si la respuesta no corresponde a ninguno de ellos, terminará
indicando que la selección es incorrecta. A continuación se presentan dos ejemplos
de ejecución.

*/
#include <iostream>

using namespace std;

int main()
{
    double a,b;
    char operador;
    cout<<"Introduzca el primer dato: ";
    cin>>a;
    cout<<"Introduzca el segundo dato: ";
    cin>>b;
    cout<<"opciones:"<<endl;
    cout<<"   1.-Suma."<<endl;
    cout<<"   2.-Resta."<<endl;
    cout<<"   3.-Producto."<<endl;
    cout<<"   4.-Division."<<endl;
    cout<<"¿Que operacion desea realizar (1234+-*/)?"<<endl;
    cin>>operador;
	cout<<"operador es: "<<operador<<endl;
    switch(operador) {
    case '1':
    case '+':
        cout<<"El resultado es "<<a+b<<endl;
        break;
    case '2':
    case '-':
        cout<<"El resultado es "<<a-b<<endl;
        break;
    case '3':
    case '*':
        cout<<"El resultado es "<<a*b<<endl;
        break;
    case '4':
    case '/':
        cout<<"El resultado es "<<a/b<<endl;
        break;
    default:
        cout<<"Erro no se ha seleccionado correctamente."<<endl;


    }


}
