#include <iostream>
#include <string>
using namespace std;

int main(){
	int n;
	struct cancion
	{
		string artista;
		string titulo;
		float duracion;
		float tamano;
	};

	cout<<"Ingrese el numero de canciones: ";
	cin>>n;
	cancion *Cancion = new cancion[100];
	for(int i=1;i<=n;i++)
	{
		cout<<"-----"<<i<<" CANCION-----"<<endl;
		cout<<"Artista: ";
		cin>>Cancion[i].artista;
		cout<<"Titulo: ";
		cin>>Cancion[i].titulo;
		cout<<"Duracion en segundos: ";
		cin>>Cancion[i].duracion;
		cout<<"Tamano en kb: ";
		cin>>Cancion[i].tamano;
	}
	cout<<endl;
	for(int i=1;i<=n;i++)
	{
		cout<<"-----"<<i<<" CANCION-----"<<endl;
		cout<<"Artista: "<<Cancion[i].artista<<endl;
		cout<<"Titulo: "<<Cancion[i].titulo<<endl;
		cout<<"Duracion: "<<Cancion[i].duracion<<" segundos\n";
		cout<<"Tamano: "<<Cancion[i].tamano<<" Kb\n";
	}

}
