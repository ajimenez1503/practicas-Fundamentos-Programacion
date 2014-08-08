/* (C) Programmed by:
   Antonio Jimenez Martínez


Practica Fundamentos de programacion: Guion de practicas 3
Version:0.1

EJERCICIO 1
Escriba un programa en el que se declaran 4 letras constantes que componen la palabra "Hola".
El programa debe leer hasta 4 letras desde la entrada
estándar y determinar si se ha deletreado bien. Tenga en cuenta que:

1. En el momento en que se lee una letra que no coincide con la correspondiente
declarada, terminará el programa indicando que no se ha deletreado bien.

2. Si se introducen las mismas letras y en el mismo orden, terminará el
programa indicando que las letras coinciden.

3. El programa sólo puede contener la instrucción if simple. Es decir, no puede
haber ningún else.


*/
#include <iostream>

using namespace std;

int main()
{
    char a,b,c,d;
    cout<<"Introduce la primera letra: ";
    cin>>a;
    if(a!='H')cout<<"Lo siento la letra no coincide.\n";
    if(a=='H')
    {
        cout<<"Introduce la segunda letra:";
        cin>>b;
        if(b!='o')cout<<"Lo siento la letra no coincide.\n";
        if(b=='o')
        {
            cout<<"Introduce la tercera letra:";
            cin>>c;
            if(c!='l')cout<<"Lo siento la letra no coincide.\n";
            if(c=='l')
            {
                cout<<"Introduce la tercera letra:";
                cin>>c;
                if(c!='a')cout<<"Lo siento la letra no coincide.\n";
                if(c=='a')cout<<"Las letras introducidas son correctas.\n";
            }
        }
    }

}
