// Desenvolva um programa que converta uma temperatura de Celsius para Fahrenheit. Solicite a entrada do usuário e exiba o resultado da conversão.

#include <stdio.h>

float celsius_para_fahrenheit(float a)
{
    return a * 1.8 + 32;
}


int main ()
{
    float numero;


    printf("Digite a temperatura em Celsius para ser converdita para Fahremheit!: ");
    scanf("%f", &numero);

    printf("Convertendo %.2f Celsius para Fahrenheit o valor obtido e: %.2f Fahremheit",numero, celsius_para_fahrenheit(numero));

    return 0;


}