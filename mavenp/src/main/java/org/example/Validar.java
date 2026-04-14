package org.example;

public class Validar {
    public static boolean tamanho(String numero){
        if(numero.length() != 11){
            return false;
        }else{
            return true;
        }


    }
    public static boolean dv(String numero){
        int soma=0,soma2=0,dv1,dv2;
        for(int i=0;i<9;i++){

            soma=soma+Character.getNumericValue(numero.charAt(i))*(10-i);

        }
        if(soma%11==0 || soma%11==1){
             dv1=0;
        }else{
             dv1=11-soma%11;
        }

        for(int i=0;i<10;i++){

            soma2= soma2 + Character.getNumericValue(numero.charAt(i))*(11-i);
        }
        if(soma2%11<2){
             dv2=0;
        }else{
             dv2=11-soma2%11;
        }

        if(dv1!=Character.getNumericValue(numero.charAt(9)) || dv2!=Character.getNumericValue(numero.charAt(10))){
            return false;
        }else{
            return true;
        }
    }

}
