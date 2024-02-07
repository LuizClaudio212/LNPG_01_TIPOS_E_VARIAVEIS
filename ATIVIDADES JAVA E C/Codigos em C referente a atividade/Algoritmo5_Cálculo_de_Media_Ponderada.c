// Solicite ao usuário para inserir três notas e seus respectivos pesos. Calcule e exiba a média ponderada das notas.

#include <stdio.h>

float calculo_da_media_ponderada(float nota1, float peso1, float nota2, float peso2, float nota3, float peso3)
{
    float somatoria_dos_pesos = peso1 + peso2 + peso3;
    float media_ponderada = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / somatoria_dos_pesos;
    return media_ponderada;
}

int main()
{
    float nota1, nota2, nota3;
    float peso1, peso2, peso3;
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite o peso da primeira nota: ");
    scanf("%f", &peso1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite o peso da segunda nota: ");
    scanf("%f", &peso2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    printf("Digite o peso da terceira nota: ");
    scanf("%f", &peso3);

    float media_ponderada = calculo_da_media_ponderada(nota1, peso1, nota2, peso2, nota3, peso3);
    printf("A media ponderada das notas e: %.2f\n", media_ponderada);

    return 0;


}