#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
main()
{
	int i,j,n,m,a[100][100],aux,p,k,suma1,suma2,x[100],bol;
	cout<<"Ingrese dimension de la matriz:";
	cin>>n;
	cout<<"Ingrese los valores de:\n";
	for(i=1;i<=n;i++)
	{for(j=1;j<=n+1;j++)
		{cout<<"a["<<i<<"]["<<j<<"]=";
		cin>>a[i][j]; 
		}
		}
	bol=0;
	for(i=1;i<n;i++)
		{if(a[i][i]==0)//PASO4
			{for(p=i+1;p<=n;p++)
				if (a[p][i]!=0)
				{for(j=1;j<=n+1;j++)
					{ aux=a[i][j];
						a[i][j]=a[p][j];
						a[p][j]=aux;
						break;//PASO8
					}
				}
				else
				{for(k=p+1;k<=n;k++)
					suma1=suma1+abs(a[k][p]);
					}
					bol=1;//PASO10
				printf("\nTiene infinitas soluciones o no existe solucion");
				return 0;
				}
		else
		{for(i=1; i<=n; i++) 
			{ for(j=1; j<=n; j++) 
				{ if(j!=i) 
					{ m=a[j][i]/a[i][i]; 
						for(k=1; k<=n+1;k++) 
						a[j][k]=a[j][k]-m*a[i][k]; 
					} 
				}
			}
		}
	}
if(bol==0)
	{if(a[n][n]==0&&a[n][n+1]==0)
		printf("Tiene infinitas soluciones");
		return 0;
	}else
		{x[n]=(a[n][n+1])/(a[n][n]);//PASO18
			{for (i=n-1;i>=1;i--)
			suma2=0;
			for (j=i+1;j<=n;j++)
			{suma2=suma2+(a[i][j]*x[j]);
			}
			x[i]=(a[i][n+1]-suma2)/(a[i][i]);
			printf("La solucion del sistema es\n"); 
	for(i=1; i<=n;i++) { 
	printf("X[%d]=",i); 
	cout<<x[i]<<"\n"; }
			}
		} 
//for(i=1; i<=n;i++) 
//{ cout<<"\tX["<<i<<"]="<<x[i];
printf("\nProcedimiento terminado satisfactoriamente\n");
}


		
		
