#include <stdio.h>
#include <stdlib.h>

int len=3;
struct circuitoserie{

	float corriente,tension;

}c[3];

void pedir_datos();
void imprimir_datos(struct circuitoserie c[],int len);



void main() {


	pedir_datos();
	imprimir_datos(c,3);

}


void pedir_datos(){


	for(int i=0;i<len;i++){

		printf("Digite la corriente=");
		scanf("%f",&c[i].corriente);
		printf("Digite la tension=");
        	scanf("%f",&c[i].tension);
	}

}

void imprimir_datos(struct circuitoserie c[], int len){

	printf("corriente\t\ttension\n");


	for(int i=0;i<len;i++){

		printf("%f\t\t%f\n",c[i].corriente,c[i].tension);
	}

}
