#include <stdio.h>
#include <stdlib.h>
//1 Leia dois números inteiros e mostre qual é o maior.

int main(int argc, char *argv[]) {
	int maior,n1,n2,n3;
	printf("bem vindo,esse programa mostra qual o maior numero entre tres,digite 3 numeros,depois de cada um,tecle enter\n");
	scanf("%d %d %d", &n1, &n2, &n3);
	if(n1>n2 && n1>n3){
		maior=n1;
	}else
	if(n2>n1 && n2>n3){
		maior=n2;
	}else
	if(n3>n2 && n3>n1){
		maior=n3;
	}
	printf("entre %d, %d, %d, o maior numero é %d \n", n1, n2, n3, maior);
	return 0;
}