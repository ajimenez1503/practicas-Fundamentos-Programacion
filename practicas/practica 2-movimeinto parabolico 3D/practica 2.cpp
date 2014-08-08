/*(C) Programmed by:
   Antonio Jimenez Martínez


Practica Fundamentos de programacion: Practicas 2
Version:0.1

EJERCICIOM: Movimiento parabolico 3D

*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const double PI=3.141592, g=9.80665;
    double v0,elevacion,rotacion,x0,y0,xf,yf,tiempo,altura,distancia;
    cout<<"Introduzca los valores con la posicion inicial del cañon: \n";
    cin>>x0>>y0;
    cout<<"Introduzca la velocidad de lamzamiento (m/s) ";
    cin>>v0;
    if(v0<0)cout<<"Error: velocidad inicial debe ser postiva.";
    else
    {
        cout<<"Introduzca angulo de elevacion en grados(0-90) ";
        cin>>elevacion;
        if(elevacion>0 && elevacion<90)
        {
            cout<<"Introduzca rotacion: ";
            cin>>rotacion;

            if(rotacion>360 || rotacion<-360)
            {
                int k=rotacion/360;
                rotacion=rotacion-k*360;
            }


            if(rotacion>180 && rotacion<360)
                rotacion=rotacion-360;

            if(rotacion<-180 && rotacion>-360)
                rotacion=360+rotacion;



            cout<<"----------Valores de entrada----------"<<endl;
            cout<<"Posicion del cañon: "<<x0<<","<<y0<<endl;
            cout<<"Angulo de elevacion: "<<elevacion<<" grados."<<endl;
            cout<<"angulo de rotacion: "<<rotacion<<endl;
            cout<<"Velocidad inicial: "<<v0<<endl;

            //realizamos los calculos
            elevacion=(elevacion*PI)/180;
            rotacion=(rotacion*PI)/180;
            tiempo=(2*v0*(sin(elevacion)))/g;
            altura=(pow(v0*sin(elevacion),2))/(2*g);
            distancia= cos(elevacion)*v0*tiempo;
            xf=x0+distancia*sin(rotacion);
            yf=y0+distancia*cos(rotacion);


            cout<<"----------Resultado del disparo----------"<<endl;
            cout<<"Tiempo de vuelo: "<<tiempo<<" segundos."<<endl;
            cout<<"Altura maxima: "<<altura<<" metros."<<endl;
            cout<<"Impacto "<<xf<<","<<yf<<endl;


            cout<<"----------Comprobacion del objetivo----------"<<endl;
            double xt,yt,d0a,d1a,d0,d1,d;
            cout<<"Introduzca localizacion del objetivo:\n";
            cin>>xt>>yt;
            cout<<"Introduzca distancias de impacto:\n";
            cin>>d0a>>d1a;
            if(d0a>d1a)
            {
                d0=d1a;
                d1=d0a;
            }
            else
            {
                d0=d0a;
                d1=d1a;
            }

            //calculamos distnacia del impatcto y distnacia objetivo
            d=pow(xf-xt,2)+pow (yf-yt,2);
            d=sqrt(d);

            if(d<d0)cout<<"Distancia al objetivo: "<<d<<" -> impacto directo.";

            else if(d>d0 && d<d1)cout<<"Distancia al objetivo: "<<d<<" -> impacto parcial.";

            else if(d>d1) cout<<"Distancia al objetivo: "<<d<<" -> no hay impacto.";

        }
        else cout<<"Elevacion debe estar entre 0 y 90 grados.";
    }

}
