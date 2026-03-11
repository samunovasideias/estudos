#include <stdio.h>
#include <stdlib.h>

//comando da questão:crie uma calculadora simples usando switch
int main(int argc, char *argv[]) {
	int n1,op,qt,i;
	float n2;
	printf("bem vindo a calculadora,quantos numeros vc pretende utilizar?\n");
	scanf("%d",&qt);
	printf("qual operação será utilizada? \n");
	printf("(1)adicao \n");
	printf("(2)subtracao \n");
	printf("(3)multiplicacao \n");
	printf("(4)divisao\n");
	scanf("%d",&op);
	switch(op){
		case 1:
		case 2:
			n2=0;
			break;
		case 3:
		case 4:
			n2=1;
			break;
	}
	for(i=1;i<=qt;i++){
		switch(op){
			case 1:
				printf("digite o numero: \n");
				scanf("%d",&n1);
				n2=n2+n1;
				break;
			case 2:
				printf("digite o numero: \n");
				scanf("%d",&n1);
				n2=n2-n1;
				break;
			case 3:
					printf("digite o numero: \n");
				scanf("%d",&n1);
				n2=n2*n1;
				break;
			case 4:
				printf("digite o numero: \n");
				scanf("%d",&n1);
				n2=n2/n1;
				break;
	}
	}
	
	
	
	printf("o resultado é: %.2f",n2);
	return 0;
}