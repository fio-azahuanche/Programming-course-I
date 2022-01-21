//Este programa halla la suma los n numeros primeros numeros naturales 
// ENTRADA: NUMEROS DE TERMINOS
// SALIDA: la suma de los n terminos
#include <iostream>
#include <stdio.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int s, j, n;
	printf("Ingrese un numero n: ");
	scanf("%d",&n);
	s=0;
	for(j=1;j<=n;j++)
		s=s+j;
	printf ("La suma de los %d es %d",n,s);
	return 0;
}
