#include<iostream>
using namespace std;

bool es_triangulo(int L1,int L2,int L3){
	if(L1+L2>L3&&L1+L3>L2&&L2+L3>L1){
		return true;
	}else{
		return false;
	}
}

int tipo_de_triangulo(int L1,int L2,int L3){
	if(L1==L2&&L2==L3){
		return 1;
	}else if(L1==L2||L1==L3||L2==L3){
		return 2;
	}else{
		return 3;
	}
}

int main(){
	int L1,L2,L3,tipo;
	bool triangulo;
	cout<<"Ingrese el lado 1:"<<endl;
	cin>>L1;
	cout<<"Ingrese el lado 2:"<<endl;
	cin>>L2;
	cout<<"Ingrese el lado 3:"<<endl;
	cin>>L3;
	triangulo=es_triangulo(L1,L2,L3);
	
	if(triangulo){
		tipo=tipo_de_triangulo(L1,L2,L3);
		cout<<"Es triangulo y es de tipo: ";
		if(tipo==1){
			cout<<"Equilatero"<<endl;
		}else if(tipo==2){
			cout<<"Isoceles"<<endl;
		}else{
			cout<<"Escaleno"<<endl;
		}
	}else{
		cout<<"No es un triangulo";
	}

	return 0;
}
