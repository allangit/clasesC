#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

class Rectangulo{


	private:
		float largo,ancho;
	public:
		Rectangulo(float, float);
		void area();
		void perimetro();
};

Rectangulo::Rectangulo(float _largo, float _ancho){


	largo=_largo;
	ancho=_ancho;
}

void Rectangulo::area(){

	float area;
	area=largo*ancho;
	cout<<"El area es::"<<area<<"\n";

}

void Rectangulo::perimetro(){

	float peri;
	peri=2*(largo+ancho);
	cout<<"El perimetro es::"<<peri<<endl;
}


int main(){

	Rectangulo r1= Rectangulo(4.5,65);
	r1.area();
	r1.perimetro();

	return 0;
}
