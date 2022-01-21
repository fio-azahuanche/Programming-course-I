#include <iostream>
#include <string>
using namespace std;

main(){
	int datos;
	struct cancion
	{
		string nombre;
		string genero;
		float aniopublicacion;
	};

	cancion *Cancion = new cancion[100];
	for(int i=1;i<=5;i++)
	{
		cout<<"-----"<<i<<" DISCO-----"<<endl;
		cout<<"Nombre del disco: ";
		cin>>Cancion[i].nombre;
		cout<<"Anio de publicacion: ";
		cin>>Cancion[i].aniopublicacion;
		cout<<"Genero: ";
		cin>>Cancion[i].genero;
	}
	cout<<"Que datos desea ()";
	cin>>datos;
	switch(datos)
	{
		case 1:
			{
				for(int i=1;i<=5;i++)
				{
					cout<<"NOMBRE "<<i<<": "<<Cancion[i].nombre<<endl;
				}
				break;
			}
		case 2:
			{
				for(int i=1;i<=5;i++)
				{
					cout<<"ANIO DE PUBLICACION "<<i<<": "<<Cancion[i].aniopublicacion<<endl;
				}
				break;
			}
		case 3:
			{
				for(int i=1;i<=5;i++)
				{
					cout<<"GENERO "<<i<<": "<<Cancion[i].genero<<endl;
				}
				break;
			}
	}
}
