#include <stdio.h>
#include <iostream>
#include <stdio.h>
using namespace std;

class persona{

	private:
		int edad;
		string nombre;
	public:
		persona(string, int);
		void mostrarpersona();
};

class empleado:public persona{

	private:
		float salario;
	public:
		empleado(string,int,float);
		void mostrarempleado();
};


class gerente:public empleado{

	private:
		int id;
	public:
		gerente(string,int,float,int);
		void mostrargerente();
};

persona::persona(string _nombre, int _edad){


	nombre=_nombre;
	edad=_edad;
}

void persona::mostrarpersona(){


	cout<<nombre<<endl;
	cout<<edad<<endl;

}

empleado::empleado(string _name, int _edad, float _salario):persona(_name, _edad){


	salario=_salario;

}

void empleado::mostrarempleado(){


	mostrarpersona();
	cout<<salario<<endl;

}

gerente::gerente(string _nombre, int _edad, float _salario, int _id):empleado(_nombre,_edad,_salario){


	id=_id;

}

void gerente::mostrargerente(){


	mostrarempleado();
	cout<<id<<endl;

}


int main(){


	gerente newgerente("alan",35,700000,503380285);

	newgerente.mostrargerente();


	return 0;


}
