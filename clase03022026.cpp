#include <iostream>
using namespace std; // Use espacio de nombre std(estandar)
// cin referencia interna al teclado (destructivo)
//cout refencia interna a la pantalla
// endl la proxima entrada sera en la lnea de abajo 
struct estudiante {
	int edad;
	char nombre [10];
};
int main () {
	estudiante unEstudiante[3];	//reserva espacio para 3 registros
    int edad; // declarcion de la variable edad de tipo entero
    //edad = 10; // se inicializa la variable edad en 10 (indivisible, simple, estático)
    //cout << edad << endl; // muestro por pantalla edad y abajo
    //char nombre [10]; // reserva 
    int i;
    estudiante* estudiantes;// estudiantes va a ser un lugar de memoria donde hay un estudiante
    estudiantes=new (estudiante[3]); // reserva espacio en tiempo de ejecucion por el *
	
	for (i=0; i<3; i++){
		cout << "Ingrese la edad ";
		//cin >> edad; // Se ingresa un valor a edad a travez del teclado
		cin >> unEstudiante[i].edad; // punto operador de acceso a un miembro de struct
    	cout << "Ingrese un nombre ";
    	cin >> unEstudiante[i].nombre;
		}
	for (i=0; i<3; i++)
		cout << "Edad " << unEstudiante[i].edad <<
		"Nombre "<<unEstudiante[i].nombre<<endl; // Se muestra el valor ingresado por el teclado
	return 0;
    }
