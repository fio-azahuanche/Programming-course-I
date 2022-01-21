//sumar los numeros pares positivos menores que un tope 
//ingresado por teclado
#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int i, suma , tope;
	i=2;
	suma=0;
	cout<<"Ingrese tope: ";
	cin>>tope;
	while( i<tope )
	{
		cout<<i<<endl;
		suma=suma + i;
		i=i+2;
	}
	cout<<"suma de pares positivos menores que "<<tope;
	cout<<endl;
	cout<<"suma: "<<suma;
	return 0;
}
