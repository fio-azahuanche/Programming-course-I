//lee n valores positivos hasta el -1 
//control por centinela
#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int num, suma , i;
	i=0;
	suma=0;
	while( num!=-1 )
	{
		cout<<"ingrese nro: \n";
		cin>>num;
		suma=suma + num;
		i=i+1;
	}
	if(num==-1&&i==0)
	cout<<"No se ha ingresado ningun valor valido ";
	else
	{
		cout<<"Valores ingresados: "<<i-1<<endl;
		cout<<"Suma: "<<suma + 1;
	}
	return 0;
}
