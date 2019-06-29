#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;


class Punto{

	private:
		int x,y;
	public:
		Punto();
		void setpunto(int _x, int _y);
		int getpuntox();
		int getpuntoy();
};

Punto::Punto(){


}

void Punto::setpunto( int _x, int _y){

	x=_x;
	y=_y;

}

int Punto::getpuntox(){


	return x;

}

int Punto::getpuntoy(){


	return y;
}

int main(){

	Punto punto1;

	punto1.setpunto(12,56);
	cout<<punto1.getpuntox()<<endl;

	return 0;
}
