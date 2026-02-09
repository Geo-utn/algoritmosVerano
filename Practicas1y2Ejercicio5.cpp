//Practicas 1 y 2
/* Ejercicio 5
Dado un triángulo representado por sus lados L1, L2, L3, determinar e imprimir 
una leyenda según sea: equilátero, isósceles o escalenos.
*/
#include<iostream>
using namespace std;
char tipoTriangulo(int,int,int);
void mostrarTriangulo(char);
int main(){
	int l1,l2,l3;
	cout<<"Para el primer caso determinar que tipo de tringulo forman los"
		<<"lados de medidas: 3cm, 4cm, 5cm."<<endl;
	l1=3;
	l2=4;
	l3=5;
	mostrarTriangulo(tipoTriangulo(l1,l2,l3));
		cout<<"Para el primer caso determinar que tipo de tringulo forman los"
		<<"lados de medidas: 10cm, 10cm, 10cm."<<endl;
	l1=10;
	l2=10;
	l3=10;
	mostrarTriangulo(tipoTriangulo(l1,l2,l3));
		cout<<"Para el primer caso determinar que tipo de tringulo forman los"
			<<"lados de medidas: 4cm, 4cm, 5cm."<<endl;
	l1=4;
	l2=4;
	l3=5;
	mostrarTriangulo(tipoTriangulo(l1,l2,l3));
	return 0;
}
char tipoTriangulo(int L1,int L2,int L3){
	if(L1==L2&&L2==L3){
		return 'q';
	} else if (L1==L2||L2==L3||L3==L1){
		return 'i';
	} else {
		return 'e';
	}
	
}
void mostrarTriangulo(char t){
	if(t=='q'){
		cout<<"El triangulo es EQUILATERO"<<endl;
	} else if(t=='i'){
		cout<<"El triangulo es ISOCELES"<<endl;
	}else if(t=='e'){
		cout<<"El triangulo es ESCALENO"<<endl;
	}
}
