// Practicas 1 y 2
#include <iostream>
using namespace std;
/*Ejercicio 2
Dado un numero entero de la forma (AAAAMMDD), que representa una fecha valida
mostrar el dia, mes y año que representa*/
int main(){
	//Variables
	int fecha = 20260206;
	//Desarrollo de cuentas y muestra
	int AAAA=fecha/10000;
	int MM = (fecha-AAAA*10000)/100;
	int DD = (fecha-AAAA*10000)%100;
//	cout<<"Fecha completa: "<<fecha<<endl;
	cout<<"Dia: "<<DD<<endl;
	cout<<"Mes: "<<MM<<endl;
	cout<<"Anio: "<<AAAA<<endl;
	return 0;

}
