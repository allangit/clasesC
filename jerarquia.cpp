#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;


class Pais{

	private:
		string nombre;
		int limites;
	public:
		Pais(string,int);
		void mostrarPais();
};

class provincia:public Pais{


	private:
		string provin;
		int ciudadanos;

	public:
		provincia(string _nombre, int _limites, string _provin, int _ciudadanos);
		void mostrarprovincia();

};


class habitantes:public provincia{


	private:
		int id;
		string name;

	public:
		habitantes(string,int, string,int, string, int);
		void mostrarhabitantes();

};


Pais::Pais(string _nombre, int _limites){


	nombre=_nombre;
	limites=_limites;

}

void Pais::mostrarPais() {


	cout<<nombre<<"\t"<<limites<<endl;


}


provincia::provincia(string _nombre, int _limites, string _provin, int _ciudadanos):Pais(_nombre,_limites) {


	provin=_provin;
	ciudadanos=_ciudadanos;

}


void provincia::mostrarprovincia() {

	mostrarPais();
	cout<<provin<<endl;
	cout<<ciudadanos<<endl;

}


habitantes::habitantes(string _nombre,int _limites, string _provin,int _ciudadanos, string _name, int _id):provincia(_nombre, _limites, _provin, _ciudadanos){


	name=_name;
	id=_id;
}


void habitantes::mostrarhabitantes(){

	mostrarprovincia();
	cout<<name<<endl;
	cout<<id<<endl;
}


int main(){


	habitantes h1("Costa Rica",700000,"San jose",12000,"alan",503380285);
	h1.mostrarhabitantes();



	return 0;
}
