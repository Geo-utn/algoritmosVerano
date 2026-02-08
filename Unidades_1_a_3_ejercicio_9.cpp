/* Ejercicios unidades 1 a 3 Ejercicio 9
Escribir un programa que pida al usuario dos números y 
luego muestre el siguiente menú: 
Opciones: 
Sumar los números
Multiplicar los números 
Dividir los números 
Restar los números 
Salir  */
#include <iostream>
using namespace std;
// Variables
float a;
float b;
int opcion = 0;
// Desarrollo
int main (){
	cout<<"ingrese un numero para operar: ";
	cin>>a;
	cout<<"ingrese otro numero para operar: ";
	cin>>b;
	do {
		cout<<endl;
		cout<<"1. Sumar los numeros"<<endl;
		cout<<"2. Multiplicar los numeros"<<endl;
		cout<<"3. Dividir los numeros"<<endl;
		cout<<"4. Restar los numeros"<<endl;
		cout<<"5. Sslir"<<endl;
		cout<<"Elija el numero de la opcion que prefiera: ";
		cin>>opcion;
		switch(opcion){
			case 1:
				cout<<"La suma de "<<a<<" y "<<b<<" es "<<a+b;
				break;
			case 2:
				cout<<"La multiplcacion entre "<<a<<" y "<<b<<" es "<<a*b;
				break;
			case 3:
				cout<<"La division entre "<<a<<" y "<<b<<" es "<<a/b;
				break;
			case 4:
				cout<<"La resta de "<<a<<" y "<<b<<" es "<<a-b;
				break;
			case 5:
				cout<<"Hasta pronto.";
				break;
			break;
		}
	}while (opcion=5);

	return 0;
}
