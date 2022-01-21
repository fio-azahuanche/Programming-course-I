#include <iostream>
#include <math.h>
using namespace std;
int factorial(int n);
float potencia(float x,float y);
float funcion_exponencial(float x,float i);
main()
{
	int x,n;
	cout<<"Ingrese un numero: ";
	cin>>x;
	cout<<"Numero de terminos a sumar: ";
	cin>>n;
	cout<<"\nEl valor de la funcion exponencial es: "<<funcion_exponencial(x,n);
}
int factorial(int n)
{
	int F,i;
	F=1;
	for(i=1;i<=n;i++)
	{
		F=F*i;
	}
	return F;
}
float potencia(float x,float y)
{
	int potencia=1,i;
	for(i=1;i<=y;i++)
	{
		potencia=potencia*x;
	}
	return potencia;
}
float funcion_exponencial(float x,float n)
{
	int i;
	float suma=0;
	for(i=0;i<=n;i++)
	{
		suma= suma+(potencia(x,i)/factorial(i));
	}
	return suma;
}
