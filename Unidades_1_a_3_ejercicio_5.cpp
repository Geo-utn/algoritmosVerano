/* Ejercicios de unidades 1 a 3. Ejercicio 5
Escribe un programa que pida al usuario dos números enteros y que imprima el 
mayor de ellos. (nota: usar la sentencia “if”). */
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
	if(a>b){
	cout<<"El numero mayor es: "<<a<<endl;
	}else if (a==b){
	cout<<"Ambos numeros son iguales: "<<b<<endl;
	}else{
	cout<<"El numero mayor es: "<<b<<endl;
	}
	return 0;
}
