#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) 
{
   float horas, sueldo_por_hora,sueldoneto_sol, sueldoneto_dol,sueldo_bruto;
	cout<<"ingrese horas de trabajo: ";
	cin>>horas;
	cout<<"\nSueldo por hora trabajada en soles: "<<endl;
	cin>>sueldo_por_hora;
	if(horas>0)
	{if(sueldo_por_hora>0)
	{
		sueldo_bruto=horas*sueldo_por_hora;
		sueldoneto_sol=sueldo_bruto*0.87;
		sueldoneto_dol=sueldo_bruto/3.4*0.87;
		cout<<"\nEl sueldo bruto es: "<<sueldo_bruto<<endl;
		cout<<"\nEl sueldo neto en soles es: "<<sueldoneto_sol<<endl;
		cout<<"El sueldo neto en dolares es: "<<sueldoneto_dol<<endl;
	}else
	cout<<"sueldo incorrecto"<<endl;
	}
	else
	cout<<"horas incorrectas"<<endl;
	return 0;
}
