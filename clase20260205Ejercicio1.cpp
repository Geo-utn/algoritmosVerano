/* hacer una funcion que determine si es un triangulo
usandola determinar que tipo de triangulo es */
#include <iostream>
using namespace std;

//funciones
bool esTriangulo (int l1,int l2,int l3){
	if(l1+l2>l3&&l2+l3>l1&&l3+l1>l2){
		return true;
	}else {
		return false;
	}
}

char tipoTriangulo (int l1,int l2,int l3){
	if (esTriangulo(l1,l2,l3)){
		if (l1==l2&&l2==l3){
			return 'q'; //equilatero
		}else{
			if(l1==l2 || l2==l3 || l3==l1){
				return 'i'; //isoceles
			}else{
				return 'e'; //escaleno
			}
		}
	}else{
		return 'f';
	}
}
//variables
int l1;
int l2;
int l3;
//Desarrollo
int main(){
	cout<<"Debe ingresar 3 numeros para que el programa determine"
	<<"si se puede contruir un triangulo y de que tipo."<<endl;
	cout<<"Ingrese el primer numero ";
	cin>>l1;
	cout<<"Ingrese el segundo numero ";
	cin>>l2;
	cout<<"Ingrese el tercer número ";
	cin>>l3;
	switch (tipoTriangulo(l1,l2,l3)){
		case 'e' : 
			cout<<"Es un triangulo Escaleno";
			break;
		case 'i' : 
			cout<<"Es un triangulo Isoceles";
			break;
		case 'q' :
			cout<<"Es un triangulo Equilatero";
			break;
		case 'f' :
			cout<<"No es triangulo";
			break;
	}
}
