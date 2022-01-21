/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main() 
   { double A, B, C;
cout<<"Ingrese tres numeros: \n";
   cin>>A>>B>>C;

if (A<B&&B<C)
{
  cout<<"\nEl numero menor es: "<<A;
  cout<<"\nEl numero intermedio es: "<<B;
  cout<<"\nEl numero mayor es: "<<C;
}
else if (A<C&&C<B)
{
  cout<<"\nEl numero menor es: "<<A;
  cout<<"\nEl numero intermedio es: "<<C;
  cout<<"\nEl numero mayor es: "<<B;
}
else if (B<A&&A<C)
{
  cout<<"\nEl numero menor es: "<<B;
  cout<<"\nEl numero intermedio es: "<<A;
  cout<<"\nEl numero mayor es: "<<C;
}
else if (B<C&&C<A)
{
  cout<<"\nEl numero menor es: "<<B;
  cout<<"\nEl numero intermedio es: "<<C;
  cout<<"\nEl numero mayor es: "<<A;
}
else if (C<A&&A<B)
{
  cout<<"\nEl numero menor es: "<<C;
  cout<<"\nEl numero intermedio es: "<<A;
  cout<<"\nEl numero mayor es: "<<B;
}
else if (C<B&&B<A)
{
  cout<<"\nEl numero menor es: "<<C;
  cout<<"\nEl numero intermedio es: "<<B;
  cout<<"\nEl numero mayor es: "<<A;
}
return 0;
}
