#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
    int sueldo, nuevo_sueldo;
    cout<<"Ingrese su sueldo: ";
    cin>>sueldo;
    if(sueldo>0)
    {
    	if(sueldo<3000)
    	nuevo_sueldo=1.2*sueldo;
    
    	else 
    	nuevo_sueldo=1.18*sueldo;
    	cout<<"Su nuevo sueldo: "<<nuevo_sueldo;
	}
	else
	cout<<"Sueldo inexistente";
	return 0;
}
