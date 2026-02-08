/* Ejercicio 7 Practicas 1 y 2 en clase 
Calcular la velocidad (metros/segundo) de los participantes de una carrera de
 1500mts dado el tiempo en segundos en recorrerla y determinar el nombre 
 del mas veloz. Y si el tiempo fuera en minutos + segundos?*/
#include <iostream>
using namespace std;
//Variable

//funciones
float vel (float tpo,float dis){
	return dis/tpo;
}
int minAseg (int min){
	return min*60;
}
float minimo (float a, float b){
	if (a<=b){
		return a;
	}else{
		return b;
	}
}

int main (){
	//Variables
	int tiempo;
	float topv;
	char nombre [10+1];
	//Desarrollo
	cout<<"Se le solicitara el tiempo y luego el nombre si es el corredor"
	<<" mas rapido hasta el momento."<<endl
	<<"Para salir ingrese 0"<<endl;
	cout<<"Ingrese el tiempo del primer corredor";
	cin>>tiempo;
	while(tiempo>0){
		
		float velocidad = vel(tiempo,150.0);
		if(velocidad>topv){
			topv=velocidad;
			cout<<"NOMBRE: ";
			cin>>nombre;
			cout<<endl;
		}
		cout<<"Ingrese el tiempo del corredor: ";
		cin>>tiempo;
		cout<<endl;
	
	}
	if(topv>0){
		cout<<"El corredor mas veloz fue: "<<nombre
		<<" con "<<topv<<"m/s."<<endl;
	}		
	cout<<"Hasta Pronto.";
	
	return 0;
}

