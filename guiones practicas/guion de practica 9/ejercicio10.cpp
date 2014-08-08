/* (C) Programmed by:
   Antonio Jimenez Martínez


Practica Fundamentos de programacion: Guion de practicas 9
Version:0.1

EJERCICIO 10
Escriba un programa para codificar un texto, es decir, un conjunto de líneas que
termina con una línea especial “#FIN#”. Para ello, cambiará unas letras por otras
predefinidas. El resultado del texto es otro texto (las mismas líneas) con los
caracteres cambiados.

Por ejemplo, si encuentra alguna de las letras de la siguiente
cadena:
" !\"#$%&'()*+,-./0123456789:;<=>?
@ABCDEFGHIJKLMNOPQRSTUVWXYZ[]^_`abcdefghijklmnopqrstuvwxyz{|}~"
deberá cambiarse por la correspondiente de la siguiente cadena:
"oEjlv2?i:TL[BPzwdY%6~;3QN|(5tA_&K=,up!RhIHx@*f8]-
7Fa)sn^q1m+OW>}Sge0cMbG'\"{#ZV DXyU<C$/Jr.k9`4"
Así, si se introduce el siguiente texto:
"Hay una antigua historia sobre una persona que quería que su
ordenador fuese tan fácil de utilizar como su teléfono. Estos
deseos se han hecho realidad, ya no sé cómo usar mi teléfono"
Bjarne Stroustrup
#FIN#
Se obtendrá como resultado lo siguiente:
jISroCVSoSV<'bCSoG'U< y'SoU gycoCVSoDcyU VSoXCcoXCcyíSoXCcoUC
y0cVS0 yoMCcUco<SVoMáe'#o0coC<'#'.Syoe Z oUCo<c#éM V zo!U< U
0cUc UoUcoGSVoGceG oycS#'0S0BorSoV oUéoeóZ oCUSyoZ'o<c#éM V j
,"SyVcoa<y CU<yCD
#FIN#

Pruebe a introducir el texto codificado para ver el resultado de volver a codificarlo

*/
#include <iostream>
#include<string>

using namespace std;
void codificar(string &texto);
char cambiar(const char &a);
void leer(string &texto);
void escribir(const string &texto);


int main()
{
    string texto;
    leer(texto);
    codificar(texto);
    escribir(texto);
}


//Lee el texto
void leer(string &texto)
{
    string aux;
    cout<<"Escribe el texto: "<<endl;
    getline(cin,aux);
    while(aux!="#FIN#") {
        texto+=aux+'\n';
        getline(cin,aux);
    }
}

//modifica un caracter por otro de forma predeterminada
char cambiar(const char &a)
{
    char b=a;
    if(a==' ')
        b='o';
    if(a=='!')
        b='E';
    if(a=='\\')
        b='j';
    if(a=='"')
        b='l';
    if(a=='#')
        b='v';
    if(a=='$')
        b='2';
    if(a=='%')
        b='?';
    if(a=='&')
        b='i';
    if(a=='\'')
        b=':';
    if(a=='(')
        b='T';
    if(a==')')
        b='L';
    if(a=='*')
        b='[';
    if(a=='+')
        b='B';
//aqui escribiríamos todo el código excepto para '\n'.
    return b;
}

//recorre el texto y va cambiando los caracteres
void codificar(string &texto)
{
    for(int i=0; i<texto.size(); i++)
        texto.at(i)=cambiar(texto.at(i));
}

//muestra el nuevo texto codificado
void escribir(const string &texto)
{
    cout<<texto;
}
