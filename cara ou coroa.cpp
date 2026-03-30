#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int gerar_lado(void);

void resultado(int x);

int continuar(void);

void contagem(int l,int *co, int *ca);

int main(void)
{
	int lado,proximo;
	int cara=0,coroa=0;
	
	srand(time(NULL));
	
	printf("cara ou coroa");
	
	do
	{		
		lado=1+gerar_lado();
		resultado(lado);
		proximo=continuar();
		contagem(lado,&coroa,&cara);
		
	}while(proximo==1);
	
	printf("quantidade: \n caras:%d \ncoroas:%d",cara,coroa);
}

int gerar_lado(void){
	int l=rand()%2;
	return l;
}

void resultado(int x){
	switch(x)
	{
		case 1:
			printf("\n resultado:cara \n");
		break;
		
		case 2:
			printf("\nresultado:coroa \n");
			break;
	}
}

int continuar(void){
	int c;
	printf("deseja continuar?\n");
	printf("\n 1.sim     2.nao");
	scanf("%d",&c);
	return c;
}

void contagem(int l,int *co, int *ca){
	switch(l){
		case 1:
			*ca=*ca+1;
		break;
		
		case 2:
			*co=*co+1;
		break;
	}
}