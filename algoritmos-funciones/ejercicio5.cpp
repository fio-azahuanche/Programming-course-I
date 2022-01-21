#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;
int main()
{
	int i,j,n,N,k;
	double vtxz,h,m,tol,aux,aux1,s,A[100][100],b[100][100],x[100][102],r[100][100],v[100][100],vt[100][100],z[100][100];
	cout<<"Ingrese n= ";
	cin>>n;
	cout<<"Ingrese h= ";
	cin>>h;
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=n;j++)
		{
			if(i==j)
			{
				A[i][j]=-2*(1+pow(h,2));
			}
			else if(j==i+1)
			{
				A[i][j]=1;
			}
			else if(j==i-1)
			{
				A[i][j]=1;
			}
			else
			{
				A[i][j]=0;
			}
		}
	}
	for (i=1;i<=n;i++)
	{
		if(i==1||i==n)
		{
			b[i][1]=1;
		}
		else
		{
			b[i][1]=0;
		}
	}
	cout<<"Ingrese numero de iteraciones N= ";
	cin>>N;
	cout<<"Ingrese la tolerancia tol= ";
	cin>>tol;
	for (i=1;i<=n;i++)
	{
		x[i][0]=0;
		r[i][1]=b[i][1];
		v[i][1]=b[i][1];
		
	}
	aux=0;
	for (i=1;i<=n;i++)
	{
		aux=aux+pow(r[i][1],2);
	}
	//perfecto verificado

	for(k=0;k<=N-1;k++)
	{
		for(i=1;i<=n;i++)
		{
			z[i][1]=0;
			for (j=1;j<=n;j++)
			{
				z[i][1]=z[i][1]+(A[i][j]*v[j][1]);
			}
		}
		vtxz=0;
		for (i=1;i<=n;i++)
		{
			vt[1][i]=v[i][1];
			vtxz=vtxz+(vt[1][i]*z[i][1]);
		}
		s=double(aux)/vtxz;
		for (i=1;i<=n;i++)
		{
			x[i][k+1]=x[i][k]+(s*v[i][1]);
			r[i][1]=r[i][1]-(s*z[i][1]);	
		}	
		aux1=0;
		for (i=1;i<=n;i++)
		{
			aux1=aux1+pow(r[i][1],2);
		}
		if (aux1<tol)
		{	
			for(i=1;i<=n;i++)
			{
				printf("%4.4f  ",x[i][k+1]);
				cout<<endl;	
			}
			cout<<endl;
			cout<<"La sucesion de soluciones aproximadas son: \n";
			for (i=1;i<=n;i++)
			{
				for (j=0;j<=k+1;j++)
				{
					printf("%4.4f  ",x[i][j]);
				}
				cout<<endl;
			}
			cout<<"Procedimiento terminado con exito \n";
			break;
		}
		m=double(aux1)/aux;
		aux=aux1;
		for(i=1;i<=n;i++)
		{
			v[i][1]=r[i][1]+(m*v[i][1]);
		}		
	}
	
	if (k>=N)
	{
		printf("Procedimiento terminado sin exito\n");	
		printf("Aumente el numero de iteraciones");
	}
}
