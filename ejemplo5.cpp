#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

class persona{

	private:
		int edad;
		string nombre;

	public:
		persona(int _edad, string _nombre);
		void mostrar();
};

class Alumno: public persona{


	private:
		string codigo;
		float nota;
	public:
		Alumno(int,string,float, string);
		void mostraralumno();

};

Alumno::Alumno(int _edad, string _nombre, float _nota, string _codigo):persona(_edad,_nombre) {

	nota=_nota;
	codigo=_codigo;



}

void Alumno::mostraralumno(){

	mostrar();
	cout<<"codigo::"<<codigo<<endl;
	cout<<"nota::"<<nota<<endl;


}



persona::persona( int _edad, string _nombre){

	edad=_edad;
	nombre=_nombre;

}

void persona::mostrar(){

	cout<<nombre<<endl;
	cout<<edad<<endl;

}

int main(){

	Alumno a1(35,"alan",90,"200236794");
	a1.mostraralumno();

	return 0;
}
