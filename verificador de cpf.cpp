#include <stdio.h>
#include <stdlib.h>

//vetores(arrays)-cpf
 int main(){
 	char cpf[12];
 	int resto,resto2,soma,soma2,i,verify1,verify2;
 	printf("bem vindo ao validador de cpf,digite o cpf:\n");
  fgets(cpf,12, stdin);
 	soma=0;
 	soma2=0;
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
	 	printf("cpf valido");
	 }else{
	 	printf("cpf invalido");
	 }
	 return 0;
 }
