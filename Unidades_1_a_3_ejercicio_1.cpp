/* Escribe un programa que pida la temperatura en grados Celsius y la convierta 
en grados Fahrenheit. El formato de la salida debe ser con dos números decimales.
Para pasar de Celsius a Fahrenheit se puede usar la fórmula 9/5*C+32 
donde C es la temperatura en grados Celsius. 
Para comprender los conceptos que se pretenden introducir en este ejemplo se 
debe usar para el cálculo 9/5, no usar 1,8 (que es lo mismo que 9/5). 
Comprobar el programa con 10ºC (50ºF). */
// Encabezado
#include <iostream>
#include <iomanip> // Para  limitar o formatear los decimales mostrados
using namespace std; // habilita el uso de cin, cout
// Variables
float gCelsius;
float gFahrenheit;
int main(){
// Inicializacion
   gFahrenheit = 0;
// Desarrollo
//Datos de entrada
   cout<<"Ingrese la temperatura en grados Celsius: ";
   cin>>gCelsius;
// Calculo del resultado
   gFahrenheit = 9.0/5.0*gCelsius+32;//los numeros en la divicion deben tener 
   //decimal para que el resultado sea correcto, sino redonde el resultado 
   //al entero (1)
// Mostrar resultado
   cout<<fixed<<setprecision(2);//Determina mostrar 2 decimales
   gCelsius==(int)gCelsius? //hago que no muestre decimales cuando se ingreso un
   	cout<<(int)gCelsius<<" Celsius son "<<gFahrenheit<<" Fahrenheit."<<endl://entero
   	cout<<gCelsius<<" Celsius son "<<gFahrenheit<<" Fahrenheit."<<endl;//en gCelsius
   return 0;
}
