#include <stdio.h>
#include <stdlib.h>

void calculo_soma(int numero,int *som);

int main(){
	int vali,num,soma=0;
	
	printf("esse programa a soma dos numeros positivos até um dado numero\n digite o numero:\n");
	
	do{
	
	vali=scanf("%d",&num);
	
	if(vali!=1 || num<=0){
		
		printf("entrada invalida,digite um numero inteiro positivo:\n");
		int c;
		while((c=getchar())!='\n' && c!=EOF);
	
		}
	
	}while(vali!=1 || num<=0);
	
	calculo_soma(num,&soma);
	
	printf("a soma dos numeros de 0 a %d  eh: %d\n",num,soma);
	
	return 0;
}

void calculo_soma(int numero, int *som){
	int i;
	*som=0;
	for(i=1;i<=numero;i++){
		
		*som=*som+i;
	}
	
}  
