#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;

double f(double x)
{
	double f;
	f=(exp(-x))-x;
	return f;
}
double g(double x)
{
	double g;
	g=exp(-x);
	return g;
}
main()
{	float X[100],q[100],tol;
	int i,N;
	
	cout<<"Ingrese la tolerancia: ";
	cin>>tol;
	cout<<"Ingrese numero de iteraciones: ";
	cin>>N;
	cout<<"Ingrese la aproximacion inicial x1: ";
	cin>>X[1];
	X[2]=g(X[1]);
	X[3]=g(X[2]);
	i=1;
	while(i<=N)
	{
		q[i]=X[i+2]-(pow(X[i+2]-X[i+1],2)/(X[i+2]-2*(X[i+1])+X[i]));
	 	X[i+3]=g(X[i+2]);
    	printf("%10.6f %10.6f %10.6f %10.6f %10.6f\n",X[i],f(X[i]),q[i],f(q[i]),g(X[i]));
    	if (i>=2)
        	{if (abs(q[i]-q[i-1])<tol)
            		{
						printf("%10.6f %10.6f\n",q[i],f(q[i]));
            			cout<<"Procedimiento terminado satisfactoriamente\n";
            			return 0;
					}
			}
			i=i+1;
	}
	printf("El metodo fracaso despues de %d iteraciones",N);
	cout<<"Procedimiento terminado sin exito\n";	
}
