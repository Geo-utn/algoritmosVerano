#include<iostream>
#include<cstring>
using namespace std;

float velocidad_calculo(int, float);

int main(){
	int metros=1500;
	char nombre[20];
	char nombre_rapido[20];
	float segundos,velocidad,segundos_rapido,velocidad_rapido;
	cout<<"Ingrese los segundos"<<endl;
	cin>>segundos;
	segundos_rapido=segundos;
	while(segundos!=0){
		cout<<"Ingrese el nombre"<<endl;
		cin>>nombre;	
		velocidad=velocidad_calculo(metros,segundos);
		if(segundos<=segundos_rapido){
			segundos_rapido=segundos;
			strcpy(nombre_rapido,nombre);
			velocidad_rapido=velocidad;
		}
		cout<<"Ingrese los segundos"<<endl;
		cin>>segundos;
		
	}
	cout<<"El corredor mas rapido fue: "<<nombre_rapido<<endl;
	cout<<"Con un tiempo de: "<<segundos_rapido<<" y con una velocidad de: "<<velocidad_rapido<<endl;
	return 0;
}

float velocidad_calculo(int metros, float segundos){
	float velocidad;
	velocidad=metros/segundos;
	return velocidad;
}
