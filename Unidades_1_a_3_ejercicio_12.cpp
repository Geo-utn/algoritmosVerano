/* Ejercicios Unidades 1 a 3 Ejercicio 12
Escribe un programa que pida al usuario número entero. 
Si el usuario introduce “-1” el programa termina, 
en caso contrario muestra el número escrito y 
el se pide otro número al usuario. */
#include <iostream>
using namespace std;
//variables
int num;
//Desarrollo
int main(){
	do{
		cout<<"Ingrese un numero entero o -1 para salir: ";
		cin>>num;
		cout<<num<<endl;
	} while (num!=-1);
}
