//lee n valores positivos hasta el -1 
//control por centinela
#include <iostream>
#include<math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int NUM, digito , D,k=0,tope,pos=1,c=0;
	cout<<"ingrese NUM y digito D: "<<endl;
	cin>>NUM>>digito;
	tope=log10(NUM)+1;
	while( k<tope )
	{
		D=NUM%10;
		NUM=NUM/10;
		cout<<D<<" ";
		if(digito==D)
		{
			c=c+1;
			pos=tope-k;
		}
		k=k+1;
	}
	if(c>=1)
	cout<<"\n El digito "<<digito<<" aparece: "<<c<<" vez (veces)"<<endl;
	cout<<"posicion: "<<pos<<endl;
	return 0;
}
