#include <stdio.h>
#include <malloc.h>
#define alturaMaxima 225


//estrutura

typedef struct {
	int peso; // peso em kg
	int altura; //peso em cm
	
} PesoAltura;


int main (){

	PesoAltura* pessoa1 = ( PesoAltura*) malloc(sizeof(PesoAltura));
	pessoa1->peso = 80;
	pessoa1->altura = 185;

	printf("Peso: %i, Altura %i.", pessoa1->peso, pessoa1->altura);
	printf("\n");

	if ( pessoa1->altura > alturaMaxima )
		printf("Altura acima da maxima");
	else
		printf("Altura abaixo da maxima \n");


	return 0;

}
