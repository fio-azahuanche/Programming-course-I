#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main() 
{
   float temperatura;
   cout<<"Ingrese la temperatura: ";
   cin>>temperatura;
   if (temperatura>=0)
   {
   		if (temperatura<50)
   		cout<<"Muy frio-Apague el equipo";
   		else if (temperatura>=51&&temperatura<=90)
   		cout<<"Bajo el rango normal";
   		else if (temperatura>=91&&temperatura<=100)
   		cout<<"Rango normal";
   		else 
   		cout<<"Temperatura muy alta-Mal funcionamiento";
   }
   else
   cout<<"Temperatura incorrecta";
	return 0;
}
