//Halla la solucion de una funcion f(x)=0
//f(x) continua en [a,b]
//ENTRADA: a,b,tol,N;
//SALIDA: Solucion aproximada p o el mensaje de fracaso
#include <iostream>
#include <math.h>
using namespace std;

int main() {
	float a,b,tol,FA,p;
	int i,N;
	cout<<"     ALGORITMO DE BISECCION\n";
	cout<<"Ingrese la tolerancia: ";
	cin>>tol;
	cout<<"Ingrese el numero maximo de iteraciones: ";
	cin>>N;
	cout<<"\n---a debe ser menor que b---\n\nIngrese a: ";
	cin>>a;
	cout<<"Ingrese b: ";
	cin>>b;
	   if(a<b)
	   {
	     i=1;//PASO 1
	     FA=pow(a,3);
	     while (i<=N)//PASO 2
	     {
	        p=(a+b)/2;//PASO 3
	        if(pow(p,3)==0||((b-a)/2)<tol)//PASO 4
	        {
	            cout<<"\n  ("<<p<<","<<pow(p,3)<<")";
	            break;
	        }
	        else
	        {
	            if((FA*pow(p,3))>0)//PASO 5
	            {
	                a=p;//PASO 6
	                FA=pow(p,3);//PASO 7
	            }
	            else
	            {
	                b=p;//PASO 8
	            }
	        }
	        i=i+1;//PASO 9
	    }
	   if(i>N)
	    cout<<"\nEl metodo fracaso despues de "<<N<<" iteraciones.";//PASO 10
	   }
	   else
	   cout<<"\n  RECUERDE: a tiene que ser menor que b";
	return 0;
}
