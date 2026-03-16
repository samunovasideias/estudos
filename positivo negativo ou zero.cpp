#include <stdio.h>
#include <stdlib.h>

//4 Leia um número e informe se ele é positivo, negativo ou zero.

int main(){
	int n1;
	printf("digite um numero para saber se ele é positivo,negativo ou zero \n");
	scanf("%d", &n1);
	if(n1==0){
		printf("%d é zero ", n1);
	}else if(n1>0){
		printf("%d é positivo ", n1);
	}else if(n1<0){
		printf("%d é negativo " , n1);
	}
	if(n1%2==0){
		printf("e par \n");
	}else{
		printf("e impar\n");
	}
	
	return 0;
}
