#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int verificarnum(char numero[]){
	int i,tam=strlen(numero);
	if( numero[0]=='\0'){
		return 1;
	}
	for(i=0;i<tam;i++){
		if(numero[i]<'0' || numero[i]>'9'){
			return 1;
		}
	}
	return 0;
}
int main(){
	char numero[100];
	int n;
	do{
		printf("digite um numero");
		fgets(numero,100,stdin);
		numero[strcspn(numero,"\n")]='\0';
		n=verificarnum(numero);
		if(n!=0){
			printf("numero invalido");
		}
	}while(n!=0);
	printf("numero valido"); 
}
