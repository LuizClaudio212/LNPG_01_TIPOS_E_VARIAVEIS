/*Peça ao usuário para inserir sua idade e informe se ele é maior de idade ou não.*/


import java.util.Scanner;




public class verificar_se_e_de_maior {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Informe sua idade para verificar se voce e ou nao de maior: ");
        int idade = scanner.nextInt();

        if (idade >= 18){
            System.out.println("Voce possui " + idade + " anos ja e de maior!");
        }
        else {
            System.out.println("Voce possui " + idade + " anos ainda e de menor!");
        }
        scanner.close();
    }
}
