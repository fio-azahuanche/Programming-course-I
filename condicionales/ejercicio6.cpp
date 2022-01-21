#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main() 
{
   int edad;
   cout<<"Ingrese su edad: ";
   cin>>edad;
   if (edad>0)
   {
   		if (edad<=12)
   		cout<<"Niño";
   		else if (edad>12&&edad<=40)
   		cout<<"Joven";
   		else if (edad>40&&edad<=60)
   		cout<<"Adulto";
   		else 
   		cout<<"Adulto mayor";
   }
   else
   cout<<"edad incorrecta";
	return 0;
}
