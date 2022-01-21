#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) 
{
   char cal_alf;
   int cal_num;
   cout<<"Ingrese calificacion: ";
   cin>>cal_alf;
   switch (cal_alf)
   {
   		case 'a':
   		case 'A':
   			cal_num=4;
   			cout<<"Su calificacion numerica es:"<<cal_num;
			   break;
   		case 'b':
   		case 'B':
   			cal_num=5;
   			cout<<"Su calificacion numerica es:"<<cal_num;
   			break;
   		case 'c':
   		case 'C':
   			cal_num=6;
   			cout<<"Su calificacion numerica es:"<<cal_num;
   			break;
   		case 'd':
   		case 'D':
   			cal_num=7;
   			cout<<"Su calificacion numerica es:"<<cal_num;
   			break;
   		default:
   			cout<<"Opcion no existente";
   }
	return 0;
}
