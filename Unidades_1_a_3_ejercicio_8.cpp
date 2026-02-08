/* Ejercicios de unidades 1 a 3 Ejercicio 8
Escribir un programa que calcule la potencia 2^30 
(es decir, 2 multiplicado por sí mismo 30 veces). No usar la función pow().*/
#include <iostream>
using namespace std;
//Variables
int dos = 2;
int i;
int pot =1;
//Desarrollo
int main (){
	for (i=0;i<30;i++){
		pot *= dos;
	}
	cout<<"2 a la 30 es: "<<pot<<endl;
	return 0;
}
