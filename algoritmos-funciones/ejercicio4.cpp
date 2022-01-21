#include <iostream>
#include <math.h>
using namespace std;
main()
{
	int i,j,n,N,k;
	float vtxz,suma,h,m,tol,aux,aux1,s,A[100][100],b[100][1],bt[1][100],x[100][1],r[100][1],rt[1][100],v[100][1],vt[1][100],z[100][1];
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
	}
	for (i=1;i<=n;i++)
	{
		if(i==1||i==n)
		{
			bt[1][i]=1;
		}
	}
	cout<<"Ingrese numero de iteraciones N= ";
	cin>>N;
	cout<<"Ingrese la tolerancia tol= ";
	cin>>tol;
	for (i=1;i<=n;i++)
	{
		x[i][1]=0;
		r[i][1]=b[i][1];
		rt[1][i]=bt[1][i];
		v[i][1]=b[i][1];
		vt[1][i]=v[i][1];
	}
	aux=0;
	for (i=1;i<=n;i++)
	{
		suma=rt[1][i]*r[i][1];
		aux=aux+suma;
	}
	for(i=1;i<=n;i++)
	{
		z[i][1]=0;
		for (j=1;j<=n;j++)
		{
			suma=A[i][j]*b[j][1];
			z[i][1]=z[i][1]+suma;
		}
	}
	vtxz=0;
	for (i=1;i<=n;i++)
	{
		suma=vt[1][i]*z[i][1];
		vtxz=vtxz+suma;
	}
	s=aux/vtxz;
	for(k=0;k<=N-1;k++)
	{
		aux1=0;
		for (i=1;i<=n;i++)
		{
			x[i][k+1]=x[i][k]+s*v[i][1];
			r[i][1]=r[i][1]-s*z[i][1];
			rt[1][i]=r[i][1];
			suma=rt[1][i]*r[i][1];
			aux1=aux1+suma;
		}
		if (aux1<tol)
		{	
			for(i=1;i<=n;i++)
			{
			printf("%4.4f  ",x[i][k+1]);	
			}
			cout<<endl;
		
			for(i=1;i<=n;i++)
			{
			printf("x(%d)=%f  ",i,x[i]);
			cout<<endl;		
			}
	}		
	}
	
	for(k=0;k<=N-1;k++)
	{
		for(i=1;i<=n;i++)
		{
			m=aux1/aux;
			aux=aux1;
			v[i][1]=r[i][1]+m*v[i][1];
		}
			
	}
	if(k>=N)
	{
		printf("Procedimiento terminado sin exito");
	}
}

