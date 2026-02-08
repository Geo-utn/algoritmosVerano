//Praxrico 2
/* Ejercicio 1
Dado un número N (<30), genere e informe un vector VEC de N elementos que contenga los primeros N números naturales pares.*/
#include  <iostream>
using namespace std;
bool esParInt(int);
int main(){
	int N = 10;
	int VEC [N]={0};
	int j =0;
	for(int i=1; i<N+1;i++){
		if(esParInt(i)&&j<N){
			VEC[j]=i;
			j++;
		}
	}

	return 0;
}
//Funciones
bool esParInt(int a){
	if (a%2==0){
		return true;
	}else{
		return false;
	}
}