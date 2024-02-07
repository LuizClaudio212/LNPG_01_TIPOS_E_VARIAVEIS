// Algoritmo 1: Calculadora Simples
// Implemente um programa que solicite dois números do usuário e realize as quatro operações básicas (adição, subtração, multiplicação e divisão), exibindo os resultados.

#include <stdio.h>




float adicao(float a, float b)
{
    return a + b;
}

float subtracao(float a, float b)
{
    return a - b;
}

float multiplicacao(float a, float b)
{
    return a * b;
}

float divisao(float a, float b)
{
    if (b == 0){
    printf("Nenhum número e divisivel por zero!\n");
    return 0;
    }

    else {
        return a/b;
    }
}

int main()
{

    float numero1, numero2;

    printf("Digite o primeiro numero: ");
    scanf("%f", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%f", &numero2);

    printf("Resultado da adicao: %.2f\n", adicao(numero1, numero2));
    printf("Resultado da subtracao: %.2f\n", subtracao(numero1, numero2));
    printf("Resultado da multiplicacao: %.2f\n", multiplicacao(numero1, numero2));
    printf("Resultado da divisao: %.2f\n", divisao(numero1, numero2));


    return 0;

}