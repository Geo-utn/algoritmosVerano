/* Ejercicios unidades 1 a 3. Ejercicio 10
    10. ¿Qué dan como resultado las siguientes expresiones? 
	¿cuáles se consideran verdaderas y cuáles falsas? 
	Razona la respuesta. 
        a. 100>50 True, 1
        b. 100<50 False, 0
        c. 100=50 Error 100 no es ValorL
        d. 100==50 False, 0
        e. !(100>10) || (0 && 10>1) False, 0
        	!(100>10) ==> 100>10 es Falso ==> !(True) es Falso
        	|| operador or requiere al menos uno verdadero y no lo tengo
        	(0 && 10>1) Falseo ya que el primer termino es 0 que es False, 
			no hay forma que se convierta en verdadero.
        f. ‘a’>’b’ False, 0
        	hay que evaluarlos por sus valores ascii a=97 y b=98
        	sin embargo al probarlo da error porque ni a ni b estan definidas
        	el problema estaba dado por el tipo de comillas utilizadas.
        g. (‘a’>’b’) && ( (1<2) || (‘a’<100) ) False, 0
        	(‘a’>’b’) es False && requiere ambos Verdadero asique es Falso
        	((1<2)||('a'<100)) 1 es menoor a 2 y como es or es Verdadero
        */
#include <iostream>
using namespace std;
//Comprobacion

int main(){
cout<<"a. 100>50 es "<<(100>50)? true : false ;
	if (100>50) {cout<<" True"<<endl;
	}else{cout<<" False"<<endl;
	}
cout<<"b. 100<50 es "<<(100<50)?true : false ;
	if (100<50) {cout<<" True"<<endl;
	}else{cout<<" False"<<endl;
	}
cout<<"c. 100=50 es "
	<<" Lin 35 Col 28 [Error] lvalue required as left operand of assignment";
	 // copie el texto del error para permitir la ejecucion
cout<<"d. 100==50 es "<<(100==50)?true : false;
	if (100==50) {cout<<" True"<<endl;
	}else{cout<<" False"<<endl;
	}
cout<<"e. !(100>10) || (0 && 10>1) es "<<(!(100>10) || (0 && 10>1))?true : false;
	if (!(100>10) || (0 && 10>1)) {cout<<" True"<<endl;
	}else{cout<<" False"<<endl;
	}	
cout<<"f. 'a'>'b' es "<<('a'<'b')?true : false;
	if ('a'<'b') {cout<<" True"<<endl;
	}else{cout<<" False"<<endl;
	}
cout<<"g. ('a'>'b') && ( (1<2) || ('a'<100) ) es "
	<<(('a'>'b') && ( (1<2) || ('a'<100)))?true : false;
	if (('a'>'b') && ( (1<2) || ('a'<100))) {cout<<" True"<<endl;
	}else{cout<<" False"<<endl;
	}
	return 0;
}
