/*incluyendo bibliotecas*/
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

class Persona{

	private:
		string nombre;
		int edad;
	public:
		Persona(string,int);
		virtual void mostrar();

};

class Alumno:public Persona{


	private:
		int notafinal;
	public:

		Alumno(string,int, int);
		void mostrar();

};

class Profesor:public Persona{

	private:
		int salario;
	public:
		Profesor(string , int , int);
		void mostrar();

};

Profesor::Profesor(string _nombre, int _edad, int _salario):Persona(_nombre,_edad){

	salario=_salario;

}

void Profesor::mostrar(){

	Persona::mostrar();
	cout<<salario<<endl;

}


Alumno::Alumno(string _nombre, int _edad, int _notafinal):Persona(_nombre, _edad){

	notafinal=_notafinal;

}

void Alumno::mostrar(){

	Persona::mostrar();
	cout<<notafinal<<endl;


}

Persona::Persona(string _nombre, int _edad){

	nombre=_nombre;
	edad=_edad;
}

void Persona::mostrar(){

	cout<<nombre<<edad<<endl;

}


int main(){

	Persona *vector[3];

	vector[0]=new Alumno("alan",35,1600);
	vector[1]=new Alumno("pedro",32,1800);
	vector[2]=new Profesor("AAA",35,435);

	vector[0]->mostrar();
	cout<<"\n";
	vector[1]->mostrar();
	cout<<"\n";
	vector[2]->mostrar();


	return 0;
}
