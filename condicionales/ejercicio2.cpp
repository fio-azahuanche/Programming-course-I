#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
int year;
cout<<"Ingrese el a�o: ";
cin>>year;
if((year%4==0&&year%100!=0)||year%400==0)
cout<<"El a�o es bisiesto.";
else
cout<<"El a�o no es bisiesto.";

	return 0;
}
