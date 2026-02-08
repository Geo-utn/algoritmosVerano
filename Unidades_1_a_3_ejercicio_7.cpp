/*Ejercicios de Unidades 1 a 3 Ejercicio 7
Escribe un programa que pregunte un número al usuario y el número de veces que 
quiere verlo impreso en pantalla. Después imprimir el número las veces 
solicitadas (nota: usar un bucle for). */
#include <iostream>
using namespace std;
//Variables
float num;
int veces;
int i;
//Desarrollo
int main(){
	//Inicializacion por el usuario
	cout<<"Escrina un numero: ";
	cin>>num;
	cout<<"Cuantas veces quiere que se repita: ";
	cin>>veces;
	//Mostrar Resultado
	for (i=0;i<veces;i++){
		cout<<num<<" ";
	}
	cout<<endl;
	return 0;
}
