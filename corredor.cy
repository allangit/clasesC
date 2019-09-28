#include <stdio.h>
#include <stdlib.h>

int len=3;
struct circuitoserie{

	float corriente,tension;

}c1[3];

void pedir_datos();
void imprimir_datos(struct circuitoserie c1[],int len);



void main() {


	pedir_datos();
	imprimir_datos(c1,3);

}


void pedir_datos(){

	for(int i=0;i<len;i++){

		printf("Digite la corriente=");
		scanf("%f",&c1[i].corriente);
		printf("Digite la tension=");
        	scanf("%f",&c1[i].tension);
	}

}

void imprimir_datos(struct circuitoserie c1[], int len){

	for(int i=0;i<len;i++){

		printf("%f\n%f\n",c1[i].corriente,c1[i].tension);
	}

}
