//Practicas 1 y 2
/* Ejercicio 4
Dado tres valores determinar e imprimir una leyenda según sea: 
“Forman triangulo” o “No forman triangulo”.*/
#include<iostream>
using namespace std;
int main(){
	int l1,l2,l3;
	cout<<"Ingrese 3 valores y el programa determinara si forman"
		<<" o no triangulo."<<endl;
	cout<<"Ingrese el primer valor: ";
	cin>>l1;
	cout<<"Ingrese el segundo valor.";
	cin>>l2;
	cout<<"Ingrese el tercer valor: ";
	cin>>l3;
	l1+l2>l3&&l2+l3>l1&&l3+l2>l1?
	cout<<"Forman Triangulo":cout<<"No Forman triangulo";
	return 0;
}
