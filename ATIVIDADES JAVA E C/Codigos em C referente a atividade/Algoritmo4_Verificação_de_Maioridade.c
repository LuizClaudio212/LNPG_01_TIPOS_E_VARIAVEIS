//Peça ao usuário para inserir sua idade e informe se ele é maior de idade ou não.

#include <stdio.h>

void verificar_idade (int a){
    if (a >= 18){
        printf("voce ja e maior de idade!");

}   else{
        printf("voce nao e maior de idade!");

}



}



int main ()
{
    int idade;



    printf("Informe sua idade: ");
    scanf("%d", &idade);

    verificar_idade(idade);

    return 0;


}