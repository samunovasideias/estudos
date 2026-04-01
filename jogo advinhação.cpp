#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define maior 2
#define igual 1
#define menor 0

struct jogada{  //armazena os dados dos numeros digitados pelo usuario
	int rodada;
	char analise[7];
	int numero;
	
};
typedef struct jogada jogada;

int definir_num(void);
int examinar_num(int numero, int entrada,char *anal);
int prosseguir(void);
int validar_entrada(int num,int num1);

int main(){
	//declaração de variaveis e inicialização do rand
	jogada tentativa[200];
	int continuar=0, num,ana,val_entrada;
	srand(time(NULL));
	
	
	do{
		int i=0;
		printf("advinhe o numero, ");
		num=definir_num();
		
		do{
			do{
			printf("digite um numero de 1 a 100:\n");
			val_entrada=scanf("%d",&tentativa[i].numero);
			if(validar_entrada(val_entrada,tentativa[i].numero)!=1){
				int c=0;
				while((c=getchar())!='\n' && c!=EOF);
			}
			}while(validar_entrada(val_entrada,tentativa[i].numero)!=1);
			
			tentativa[i].rodada=i+1;
			ana=examinar_num(num,tentativa[i].numero,tentativa[i].analise);
			printf("%d é %s \n",tentativa[i].numero,tentativa[i].analise);
			i++;
			
			
		}while(ana!=igual);
		continuar=prosseguir();
		printf("numero de tentativas: %d",i);
		
		}while(continuar==1);
}

int validar_entrada(int num,int num1){
	if(num!=1 || num1>100 || num1<1 ){
		printf("numero invalido,digite novamente");
		return 0;
		
	}
	return 1;
}
int definir_num(void){
  return 1+rand()%100;
}

int examinar_num(int numero, int entrada,char *anal){
	if(entrada>numero){
		strcpy(anal,"maior");
		return maior;
	}else 
	if(entrada<numero){
		strcpy(anal,"menor");
		return menor;
	}else{
		strcpy(anal,"igual");
		return igual;
	}
	
}

int prosseguir(void){
	int continua=0;
	do{
	
	printf("\ndeseja jogar novamente? \n1.sim \n2.nao\n");
	scanf("%d",&continua);
	if(continua!=1 && continua!= 2){
		printf("digite uma alternativa valida\n");
	}
	}while(continua!=1 && continua!= 2);
	
	switch  (continua){
		
		case 1:
			return 1;
			
		case 2:
			
			return 0;
	}

		
	
}
