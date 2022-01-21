//Fiorela Azahuanche Falcon
#include <iostream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int n,F,i;
	cout<<"Ingrese un numero: ";
	cin>>n;
	F=1;
	for(i=1;i<=n;i++)
	{F=F*i;
	}
	cout<<"El factorial de "<<n<<" es: "<<F;
	return 0;
}
