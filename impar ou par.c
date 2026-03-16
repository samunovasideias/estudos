#include <stdio.h>
#include <stdlib.h>

/* 3 Leia um número e informe se ele é par ou ímpar. */

int main(int argc, char *argv[]) {
	int n1;
	printf("esse programa verifica se um numero é par ou impar,digite um numero \n");
	scanf(" %d", &n1);
	if(n1%2==0){
		printf("\n %d é par", n1);
	}else{
		printf("\n %d é impar",n1);
	}
	
	return 0;
}