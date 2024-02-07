/*Crie um programa que peça ao usuário para inserir um número e, em seguida, determine se é par ou ímpar. Exiba a resposta.*/


import java.util.Scanner;

public class parouimpar {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.println("Digite o um numero para saber se e par ou impar!: ");
        int numero = scanner.nextInt();

        if (numero % 2 == 0) {
            System.out.println("O numero " + numero + " e par!.");

        } else {
            System.out.println("O numero " + numero + " e impar!.");
        }
        scanner.close();

    }
}
