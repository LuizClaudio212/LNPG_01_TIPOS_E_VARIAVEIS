//Algoritmo 2: Verificação de Número Par ou Ímpar
//Crie um programa que peça ao usuário para inserir um número e, em seguida, determine se é par ou ímpar. Exiba a resposta.

#include <stdio.h>

void parouimpar (int a){
    if (a %2 == 0 ){
        printf("O numero %d e par!", a);
        
}   else {
        printf("O numero %d e impar!", a);
        }
}

int main ()
{
    int numero;

    printf("Digite um numero para saber se e par ou impar!: ");
    scanf("%d", &numero);

    parouimpar(numero);

    return 0;


}

