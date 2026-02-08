/*Ejercicios de unidades 1 a 3 Ejercicio 4
    ¿Como se explica esto?*/
#include <iostream>//Agregado por mi para elinar error
//#include <stdio.h> 
// #include importa una libreria en este caso studio.h
using namespace std;//Agregado por mi para eliminar error
int main() { 
   int a = 80; //Declara a inicializada en 80
   int b = 40; //Declara b inicializada en 40
   int c = 50; //Declara c inicializada en 50
   int d; //Declara d sin inicializar
   d = ( a / c ) * b; //Inicializa d (80/50)*40 Da 64 pero dado que
						//tanto a como c ambos son int da 40 ya que
						//en lugar de 1.6 la division trunca en 1
   cout<<d << endl; //Muestra el valor de d muestra 40
   d = ( a * b ) / c; //Da nuevo valor a d (80*40)/50 da 64
   cout<<d<< endl; //Muestra el valor de d 64
   return 0; 
}
