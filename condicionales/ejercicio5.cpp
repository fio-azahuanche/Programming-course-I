#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main() 
{
   float altura;
   cout<<"Ingrese su altura: ";
   cin>>altura;
   if (altura>0)
   {
   		if (altura<=150)
   		cout<<"Persona de altura baja";
   		else if (altura>=151&&altura<=170)
   		cout<<"Persona de altura media";
   		else 
   		cout<<"Persona alta";
   }
   else
   cout<<"altura incorrecta";
	return 0;
}
