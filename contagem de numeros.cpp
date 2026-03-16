#include <stdio.h>
#include <stdlib.h>
//Mostre todos os números de 1 até 50.

int main(){
	int cont,n,i;
	printf("bem vindo ao contador de numeros,vc quer uma contagem progressiva ou regressiva?\n");
	printf("1.progressiva \n2.regressiva\n");
	scanf("%d", &cont);
	printf("qual o numero final?");
	scanf("%d", &n);
	
	switch(cont){
		case 1:
			for(i=1;i<=n;i++){
				printf("%d, ",i);
			}
			break;
		case 2:
			for(i=n;i>=1;i=i-1){
				printf("%d, ", i);
			}
			break;
	}
	return 0;
}