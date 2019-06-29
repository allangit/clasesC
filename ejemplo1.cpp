#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

class Persona{

	private:
		int edad;
		string nombre;
	public:
		Persona(int, string );/* sirve para inicializar*/
		void leer();
		void correr();
};

Persona::Persona(int _edad, string _name){

	edad=_edad;
	nombre=_name;
}

void Persona::leer(){

	cout<<"Hola soy "<<nombre<<" estoy leyendo un libro"<<endl;
}

void Persona::correr() {

	cout<<"Hola soy "<<nombre <<" y tengo "<<edad<<endl;

}

int main(){

	Persona p1=Persona(35, "alan");
	p1.correr();
	p1.leer();

	Persona p2(45,"Maria");
	p2.correr();
	p2.leer();
	return 0;
}
