/*Desenvolva um programa que converta uma temperatura de Celsius para Fahrenheit. Solicite a entrada do usuário e exiba o resultado da conversão.*/

import java.util.Scanner;

public class Celsius_para_Fahrenheit {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.println("Digite o valor da temperatura em Celsius para ser convertida em Fahrenheit: ");
        float numero = scanner.nextFloat();

        float conversao = numero * 1.8f + 32;

        System.out.println("A temperatura em Fahrenheit e: " +conversao);
        scanner.close();
    }
}
