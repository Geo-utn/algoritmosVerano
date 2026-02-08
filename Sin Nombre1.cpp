#include <iostream>
#include <fstream>
using namespace std;
struct estudiante {
	int edad;
	char nombre [10];
};
int main(){
	estudiante unEstudiante[3];
	FILE* archivo=fopen("ejemplo.dat", "rb+");
	int i;
	/*for(i=0; i<3; i++){
		cout << "Ingrese el nombre";
		cin >> unEstudiante.nombre;
		cout << "Ingrese la Edad";
		cin >> unEstudiante.edad;
		fwrite (&unEstudiante, sizeof(unEstudiante),1,archivo);
		//fwrite (& direccion donde esta el registro, 
		//tamaño de registro, cantidaad de registros, archivo
	}
	//poner el puntero al principio del archivo
	fseek(archivo,0,SEEK_SET);
	for (i=0; i<3; i++){
		fread (&unEstudiante, sizeof(unEstudiante),1,archivo);
		cout <<"Nombre: "<<unEstudiante.nombre <<" Edad: "<<unEstudiante.edad<< endl;
	}
	*/
	fread (unEstudiante,sizeof(estudiante),3,archivo);
	for (i=0; i<3; i++){
		cout<<unEstudiante[i].nombre<<unEstudiante[i].edad<<endl;
	}
	fclose(archivo);
	return 0;
}
