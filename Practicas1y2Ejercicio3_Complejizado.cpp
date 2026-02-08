//Practicas 1 y 2.
/*Ejercicio 3
Realizar la suma de todos los números pares entre 2 y 10000 
Version compleja y reutilizable*/
#include <iostream>
using namespace std;

//Prototipos
int sumaInt(int,int);
bool esParInt(int);
int sumarIntParDesdeHasta(int,int);
//Desarrollo
int main(){
	cout<<"Realizar la suma de todos los numeros pares entre 2 y 10000"<<endl;
	cout<<"El resultado es: "<<sumarIntParDesdeHasta(2,10000)<<endl;
	cout<<"Ahora pruebe con dos numeros que usted elija los debe ingresar"
		<<"de menor a mayor."<<endl;
	int c,d;
	cout<<"Ingrese el numero mas bajo: ";
	cin>>c;
	cout<<"Ingrese el numero mas alto: ";
	cin>>d;
	cout<<"Realizar la suma de todos los numeros pares entre "
		<<c<<" y "<<d<<"."<<endl;
	cout<<"El resultado es: "<<sumarIntParDesdeHasta(c,d)<<endl;
	return 0;
}

//Funciones
int sumaInt(int a, int b){
	return a+b;
}
bool esParInt(int a){
	return a%2==0?true:false;
}
int sumarIntParDesdeHasta(int a, int b){
	int resultado = 0;
	for(int i=a; i<=b; i++){
		if(esParInt(i)){
			resultado = sumaInt(resultado,i); 
		}
	}
	return resultado;
}
