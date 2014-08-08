/* (C) Programmed by:
   Antonio Jimenez Martínez


Practica Fundamentos de programacion: Guion de practicas 5
Version:0.1

EJERCICIO 5
Escriba un programa para leer una letra mayúscula usando lectura anticipada con el
bucle “while”. Para ello, tenga en cuenta que puede indicar dos mensajes de
entrada, uno para el primer dato y otro para el resto.
*/
#include <iostream>

using namespace std;

int main()
{
    char letra;
    cout << "Introduzca una letra en mayúsculas: ";
    cin >> letra;
    while(letra<'A' || letra>'Z') {
        cout << "Introduzca otra vez una letra en mayúsculas: ";
        cin >> letra;
    }
    cout << "La letra es: " << letra << endl;
}
