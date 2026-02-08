//Practicas 1 y 2.
/*Ejercicio 3
Realizar la suma de todos los números pares entre 2 y 10000 */
#include <iostream>
using namespace std;

int main(){
	int resultado;
	for (int i=2; i<10002;i+=2){
		i>2?cout<<" + ":false;
		resultado += i;
		cout<<i;
	}
	cout<<endl<<"Resultado: "<<resultado;//25.005.000
}
