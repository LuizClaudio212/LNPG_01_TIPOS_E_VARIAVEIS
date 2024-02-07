/*Implemente um programa que solicite dois números do usuário e realize as quatro operações básicas (adição, subtração, multiplicação e divisão), exibindo os resultados.*/
import java.util.Scanner;

public class calculadora {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Digite o primeiro número: ");
        double numero1 = scanner.nextDouble();
        
        System.out.print("Digite o segundo número: ");
        double numero2 = scanner.nextDouble();
        
        double soma = numero1 + numero2;
        double subtracao = numero1 - numero2;
        double multiplicacao = numero1 * numero2;
        
       
        double divisao = (numero2 != 0) ? (numero1 / numero2) : Double.NaN;
        
        System.out.println("Resultado da adição: " + soma);
        System.out.println("Resultado da subtração: " + subtracao);
        System.out.println("Resultado da multiplicação: " + multiplicacao);
        
        
        if (!Double.isNaN(divisao)) {
            System.out.println("Resultado da divisão: " + divisao);
        } else {
            System.out.println("Não é possível dividir por zero.");
        }
        
        scanner.close();
    }
}
