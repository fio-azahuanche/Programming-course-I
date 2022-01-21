//Fiorela Azahuanche
//factorial en funcion
#include <iostream>
#include<stdio.h>
#include <math.h>
using namespace std;
int factorial100(int a);
int	suma(int c);
int sumaentero(int d);
int fibonacci(int e); //funcion factorial
main()
{int n;
printf("Ingrese n para calcular su factorial:\n");
scanf("%d",&n);//lee el valor de n
printf("El valor del factorial de %d es %d\n", n, factorial100(n));
printf("La suma de los valores al cubo de %d es %d\n", n, suma(n));
printf("La suma de los enteros hasta %d es %d\n", n, sumaentero(n));
printf("La serie fibonacci hasta %d es %d\n", n, fibonacci(n));
}
int factorial100(int b)
{	
	int fact=1;
	for(int i=1;i<=b;i++)
		fact=fact*i;
	return fact;
}
int	suma(int c) 
	{ int sumcubo=0;
	int x;
		{for(int i=1;i<=c;i++)
			{
			x=pow(i,3);
			sumcubo=sumcubo+x;}
		return sumcubo;
		}
		}
int sumaentero(int d)
{int sument=0;
		{for(int i=1;i<=d;i++)
			{
			sument=sument+i;}
		return sument;

}
}
int fibonacci(int n)
{int f[100];
			f[1]=1;
			f[2]=1;
			int i=3;
			while (i<=n)
			{
			f[i]=f[i-1]+f[i-2];
			i=i+1;
			}
		return f[100];

}



