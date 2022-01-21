#include<iostream>
#include<math.h>
using namespace std;
main()
{int i, j,n,k,X[100]; 
float m[100][100],A[100][100] ;
cout<<"Ingrese dimension dela matriz: ";
cin>>n;
cout<<"Ingrese los elementos de la matriz aumentada:\n";
for (i=1;i<=n;i++)
{for (j=1;j<=n+1;j++)
	{cout<<"A["<<i<<"]["<<j<<"]=";
	cin>>A[i][j];
	}
}
for(i=1; i<=n; i++) 
{ for(j=1; j<=n; j++) 
{ if(j!=i) 
{ m[j][i]=A[j][i]/A[i][i]; 
for(k=1; k<=n+1;k++) 
A[j][k]=A[j][k]-m[j][i]*A[i][k]; 
} 
}
}
if( (A[n][n]==0) && (A[n][n+1]==0) ) 
{ printf("procedimiento terminado sin exito\n"); 
return(0);
} 
else 
{ for(i=n; i>=1; i--) 
X[i]=(A[i][n+1])/(A[i][i]); 
} 
for(i=1; i<=n;i++) 
{ cout<<"\tX["<<i<<"]="<<X[i];
}
printf("\nProcedimiento terminado satisfactoriamente\n");
}
