/* Ejercicios de unidades 1 a 3. Ejercicio 3
Escribe un programa que pida al usuario dos números enteros y que muestre 
el mayor de ellos. (nota: usar el operador ?). */
#include <iostream>
using namespace std;
//Variablles
int a;
int b;
//Desarrollo
int main(){
//Inicializacion
	//solicitar el ingreso de los valores
	cout<<"Ingrese un numero entero: ";
	cin>>a;
	cout<<"Ingrese otro numero entero: ";
	cin>>b;
	//Calculo con muestra de valor
	a>b?cout<<"El numero mayor es: "<<a<<endl:
	cout<<"El numero mayor es: "<<b<<endl;
}
