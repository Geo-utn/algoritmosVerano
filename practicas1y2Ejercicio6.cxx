//Practicas 1 y 2 
/* Ejercicio 6
Se ingresa una edad, mostrar por pantalla alguna de las siguientes leyendas:
∙ ‘menor’ si la edad es menor o igual a 12
∙ ‘cadete’ si la edad esta comprendida entre 13 y 18
∙ ‘juvenil’ si la edad es mayor que 18 y no supera los 26
∙ ‘mayor’ en el caso que no cumpla ninguna de las condiciones anteriores
*/
#include<iostream>
using namespace std;;
int main (){
	int edad;
	cout<<"Para salir ingrese 1000";
	do{
	
	cout<<"Ingrese la edad: ";
	cin>>edad;
	if(edad<12){
		cout<<"menor";
	} else if(edad<18){
		cout<<"cadetel";
	}else if(edad<=26){
		cout<<"juvenil";
	}else{
		cout<<"mayor";
	}
	}while(edad!=1000);
	return 0;
}
