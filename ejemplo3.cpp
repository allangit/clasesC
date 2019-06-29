#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;



class Fecha{

	private:
		int dia,mes,anio;

	public:
		Fecha(long);
		Fecha(int , int, int);
		void mostrar();


};

Fecha::Fecha(long fecha) {

	anio=int(fecha/10000);
	mes=int((fecha-anio*10000)/100);
	dia=int(fecha-anio*10000-mes*100);

}

Fecha::Fecha(int _dia, int _mes, int _anio){


	dia=_dia;
	mes=_mes;
	anio=_anio;

}

void Fecha::mostrar(){

	cout<<"la fecha es "<<dia <<"/"<<mes<<"/"<<anio<<endl;

}


int main(){

	Fecha hoy(9,1,2017);
	Fecha ayer(20170108);
	hoy.mostrar();
	ayer.mostrar();
	return 0;
}
