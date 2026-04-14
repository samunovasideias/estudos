package org.example;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;
import java.util.Scanner;
//TIP To <b>Run</b> code, press <shortcut actionId="Run"/>
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    static void main(String[] args ) throws SQLException {
        Connection conn= DriverManager.getConnection("jdbc:postgresql://localhost:5432/pessoas",
                "postgres",
                "sambm1409") ;
        Scanner ler= new Scanner(System.in);

        boolean tam,digito=false;

        do{System.out.println(" seu cpf ");

        String numero=ler.nextLine();
        tam=Validar.tamanho(numero);
        if(tam==false) {
            System.out.println("numero de tamanh diferente de um cpf, tente novamente");

        }else{
        digito=Validar.dv(numero);
        if(digito==false) {
            System.out.println("cpf invalido");
        }
        }
        }while (tam==false || digito==false);
    System.out.println("cpf valido");
    }
}
