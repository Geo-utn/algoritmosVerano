//Practicas 1 y 2 
/* Ejercicio 8
Dados 50 numeros enteros, informar el promedio de los mayores que 100 
y la suma de los menores que -10.
*/
#include<iostream>

using namespace std;;
int main (){
	int numeros[49];
	int ninicio=10;
	for(int i = 0;i<50;i++){
		numeros[i]=(i+ninicio)*ninicio;
		ninicio+=(i+1);
		if (ninicio%2){
		ninicio*=-1;
		} else {
		ninicio*=2;
		ninicio-=3*i;
		} 
		if (ninicio>1000||ninicio<-1000){
			ninicio/=3200000;
			ninicio/=i+2;
		}
		cout<<i<<"   "<<numeros[i]<<" "<<endl;
	}
	int prePromedio=0;
	float cantPromedio = 0.0;
	int suma=0;

	for(int i = 0;i<50;i++){
		if (numeros[i]>100){
			cantPromedio++;
			prePromedio+=numeros[i];
		}
		if(numeros[i]< (-10)){

			suma+=numeros[i];
		}
	}
	float promedio = prePromedio/cantPromedio;
	if(cantPromedio>0){
		cout<<"El promedio de los numeros mayores a 100 es: "<<promedio<<endl;
	} else {
		cout<<"El promedio de los numeros mayores a 100 es: 0"<<endl;
	}
	cout<<"La suma de los numeros menores a -10 es: "<<suma<<endl;

	return 0;
}
