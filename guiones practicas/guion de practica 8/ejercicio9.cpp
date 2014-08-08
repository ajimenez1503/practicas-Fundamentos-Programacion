/* (C) Programmed by:
   Antonio Jimenez Martínez


Practica Fundamentos de programacion: Guion de practicas 8
Version:0.1

EJERCICIO 9
Para representar un laberinto se ha establecido el siguiente formato :
• Dos enteros, indicando filas y columnas del laberinto.
• Un carácter para cada casilla, siendo 'p' pared, 'l' libre, 'e' entrada y 's' salida.
Escriba un programa que lea un laberinto en una matriz de caracteres, y que vuelva
a imprimirlo, sustituyendo 'p' con el carácter # para las paredes, y el carácter 'l' de
pasillo por un espacio.
*/
#include <iostream>
#include <vector>
using namespace std;


//creamos el laberinto
void crearmatriz (vector< vector<char> > &matriz,int fil,int col)
{
    cout << "Dame elementos:" << endl;
    for (int f=0; f<fil; f++)
        for (int c=0; c<col; c++)
        {
            char dato;
            cin >> dato;
            matriz[f].push_back(dato);
        }

}

//cambiamos 'p' por '#' y 'l' por ' '
void sustituir (vector< vector<char> > &matriz,int fil,int col)
{
    for (int f=0; f<fil; f++)
    {
        for (int c=0; c<col; c++)
        {
            if(matriz[f][c]=='p')
                matriz[f][c]='#';
            if(matriz[f][c]=='l')
                matriz[f][c]=' ';
        }
    }
}


//mostramos el laberinto
void leer (const vector< vector<char> > &matriz,int fil,int col)
{
    cout << "La matriz es:" << endl;
    for (int f=0; f<fil; f++)
    {
        for (int c=0; c<col; c++)
            cout << matriz[f][c] << " ";
        cout << endl;
    }
}

int main()
{
    int fil, col;
    cout << "¿Cuántas filas y columnas tiene?\n";
    cin >> fil >> col;
    vector< vector<char> > matriz(fil);
    crearmatriz(matriz,fil,col);
    leer(matriz,fil,col);
    sustituir(matriz,fil,col);
    leer(matriz,fil,col);
}

