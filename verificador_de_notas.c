#include <stdio.h>
#include <string.h>
#include <stdlib.h>


//criacao da entidade aluno
#define tam 50
	int c;
struct dados_aluno{
	float nota;
	char sala[5];
	char nome[tam];	
};

typedef struct dados_aluno dados_aluno;

void leraluno(dados_aluno *aluno,int i1){

 printf("digite o nome do aluno %d",i1+1);
 		fgets(aluno->nome,50,stdin);
 		aluno->nome[strcspn(aluno->nome,"\n")]='\0';
 		
		printf("digite a sala do aluno %d",i1+1);
		scanf("%s",aluno->sala);
		while((c=getchar())!='\n' && c!=EOF);
		
		printf("digite a nota do aluno %d",i1+1);
		scanf("%f",&aluno->nota);
		while((c=getchar())!='\n' && c!=EOF);
}
//verificar se o aluno passou ou nao 
 int analise_nota(dados_aluno aluno){
 	if(aluno.nota>6){
 		return 1;
	 }else{
	 	return 0;
	 }
 	
 }
 int main(){
 	dados_aluno *aluno,*passou,*n_passou;
 	int n,i,pass,preenchidos1=0,preenchidos2=0;
 	
	 printf("quantos alunos ha na sala?");
 	scanf("%d",&n);
 	while((c=getchar())!='\n' && c!=EOF);
 	aluno=(dados_aluno*) malloc(n*sizeof(dados_aluno));
 	passou=(dados_aluno*) malloc(n*sizeof(dados_aluno));
 	n_passou=(dados_aluno*) malloc(n*sizeof(dados_aluno));
 	
	 //verificar malloc
	 if(aluno==NULL || passou==NULL || n_passou==NULL){
 		free(aluno);
 		free(passou);
 		free(n_passou);
 		return 1;
	 }
 	for(i=0;i<n;i++){
 		
 		leraluno(&aluno[i],i);
		pass=analise_nota(aluno[i]);
		if(pass==1){
			passou[preenchidos1]=aluno[i];
			preenchidos1++;
		}else{
			n_passou[preenchidos2]=aluno[i];
			preenchidos2++;
		}
			
 		
	 }
	 for(i=0;i<preenchidos1;i++){
	 	printf("%s  passou de ano\n \n",passou[i].nome);
	 	
	 }
	 for(i=0;i<preenchidos2;i++){
	 	printf("%s n passou de ano\n \n",n_passou[i].nome);
 	
 }
}
