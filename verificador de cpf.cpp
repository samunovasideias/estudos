//validador de cpf aprimorado com funÃ§Ãµes separadas
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int validacao(char cpf[]){
    int i;
    if(strlen(cpf)!=11){  //validar tamanho
        return 1;
    }
    for(i=0;i<=10;i++){   //validaÃ§Ã£o de caracteres permitidos
      if(cpf[i]<'0' || cpf[i]>'9'){
        return 2;
      }
    }
    return 0;
  }
  int verificador1(char cpf[]){
      int soma1=0,dv1,i;
      for(i=0;i<=8;i++){
          soma1=soma1+(cpf[i]-'0')*(10-i);
      }
      if(soma1%11==0 || soma1%11==1){
          dv1=0;
      }else{
          dv1=11-(soma1%11);
      }
     
      return dv1;
  }
  int verificador2(char cpf[]){
      int soma1=0,dv2,i;
      for(i=0;i<=9;i++){
          soma1=soma1+(cpf[i]-'0')*(11-i);
      }
      if(soma1%11<2){
          dv2=0;
      }else{
          dv2=11-(soma1%11);
      }
     
      return dv2;
  }
int main(){
    int vali,c,digiv1,digiv2;
    char cpf[12];
    printf("bem vindo ao  validador de cpf\n");
    do{
    printf("digite seu cpf \n");
    fgets(cpf,12,stdin);
    cpf[strcspn(cpf,"\n")]='\0';
    while((c=getchar()) !='\n' && c!=EOF);
    vali=validacao(cpf);
    if(vali==1){
        printf("tamanho do cpf invalido, digite novamente\n");
    }else if(vali==2){
    	printf("cpf invalido,digite apenas numeros\n");
	}else if(vali==0){
	    digiv1=verificador1(cpf);
	    digiv2=verificador2(cpf);
	    
        if(digiv1==(cpf[9]-'0') && digiv2==(cpf[10]-'0')){
        puts("cpf valido");
    }else{
        puts("cpf invalido");
        vali=3;
    }
    }
    }while(vali!=0);
    printf("%d,  %d",digiv1,digiv2);
    
  return 0;
  
