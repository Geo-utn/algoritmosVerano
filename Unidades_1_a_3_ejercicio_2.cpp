/* Ejercicio 2 de Unidades 1 a 3
Escribe un programa que pida a el usuario la base y la altura de un triángulo 
en centímetros y que calcule su área.*/
#include <iostream>
using namespace std;
//Variables
float base;
float altura;
float area;
//Desarrollo
int main (){
//Inicializacion de base y altura
	//Solicitud de entrada de valores
	cout<<"Ingrece la base en centimetros: ";
	cin>>base;
	cout<<"Ingrese la altura en centimeros: ";
	cin>>altura;
//Inicializacion de area y cuenta
	area = base*altura/2;
//Muestra de Resultados
	cout<<"El area del triangulo es de "<<area<<" centimetros cuadrados."<<endl;
	return 0;
}
