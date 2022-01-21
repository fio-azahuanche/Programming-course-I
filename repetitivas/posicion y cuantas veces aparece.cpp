//factorial de un numero n
#include <iostream>
#include<math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int i, fac , num;
	cout<<"ingrese nro: ";
	cin>>num;
	fac=1;
	for(i=1; i<=num;i++)
	{
		fac=fac*i;
	
	}
	cout<<"El factorial de "<<num<<" es: "<<fac;
	return 0;
}
