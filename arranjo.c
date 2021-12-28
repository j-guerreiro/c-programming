#include <stdio.h>
#include <stdlib.h>


int main (){

	//array ou arranjo de 3 inteiros
	int x[3];

	//atribuindo valores aos elementos
	x[0] = 1;
	x[1] = 2;
	x[2] = 7;

	//escrevendo seus valores na saida padrao
	printf("x0: %i, x1: %i, x2: %i\n", x[0], x[1], x[2]);

	//escrevendo os enderecos de memoria na saida padrao
	printf("&x: %p, x: %p, *x: %i\n", &x, x, *x);

	return 0;
}
