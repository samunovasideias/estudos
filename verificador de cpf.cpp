#include <stdlib.h>
#include <string.h>

//vetores verificar cpf
 int main(){
 	char cpf[12];
 	int resto,resto2,soma,soma2,i,verify1,verify2;
 	printf("bem vindo ao validador de cpf,digite o cpf:\n");
 	fgets(cpf,12,stdin);
 	cpf[strcspn(cpf,"\n")]='\0';  //o fgets le o \n,enter, junto com a entrada do usuário,o strcspn é um comando que pesquisa até encontrar o dado solicitado e retorna a posição dele,o ='\0' faz que ,a posição em que se encontre o \n agora seja o final do vetor
  if(strlen(cpf)!=11){  // validação de tamanho da entrada, strlen(cpf) me retorna o tamanho do vetor
  	printf(" --cpf invalido");
  	return(1);
  }
  soma=0;
	soma2=0;
	for(i=0;i<10;i++){     
		if(cpf[i]<'0' || cpf[i]>'9'){
 		 	printf(" -cpf invalido");
			return(1);
		  }//validação para excluir caracteres que nao sejam inteiros,na tabela asc,os numeros int seguem a sequencia de '0' a '9' 
	}
 	
 	for(i=0;i<=8;i++){
 		soma=soma+((cpf[i]-'0')*(10-i));
 		
	 }
	
	 for(i=0;i<=9;i++){
 		soma2=soma2+((cpf[i]-'0')*(11-i));
	 }
	 resto=soma%11;
	 if(resto==0 || resto==1){
	 	verify1=0;
	 }else{
	 	verify1=11-resto;
	 }
	 
	 resto2=soma2%11;
	 if(resto2==0 || resto2==1){
	 	verify2=0;
	 }else{
	 	verify2=11-resto2;
	 }
	 if((cpf[9]-'0')==verify1 && (cpf[10]-'0')==verify2 ){
	 	printf("cpf valido %d %d", verify1, verify2);
	 }else{
	 	printf("cpf invalido %d %d", verify1, resto);
	 }
	 return 0;
 }
