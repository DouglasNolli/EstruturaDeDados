#include <stdio.h>

int main() {

    char nome[30];
    int dia,mes,ano;
    float peso, altura;
    char cpf[11];
    char sexo[1];


    printf("Digite seu nome: ");
    scanf("%s:" , &nome);

    printf("Digite o dia do seu nascimento: ");
    scanf("%d:" , &dia);

    printf("Digite o mes do seu nascimento: ");
    scanf("%d:" , &mes);

    printf("Digite o ano do seu nascimento: ");
    scanf("%d:" , &ano);

    printf("Digite seu peso: ");
    scanf("%f:" , &peso);

    printf("Digite sua altura: ");
    scanf("%f:" , &altura);

    printf("Digite seu cpf: ");
    scanf("%s:" , &cpf);

    printf("Digite seu sexo: ");
    scanf("%c:" , &sexo);


    printf("nome: \n", nome);
    printf("dia: \n", dia, "mes: ",mes,"ano: ",ano);
    printf("peso:\n", peso);
    printf("altura:\n", altura);
    printf("cpf:\n", cpf);
    printf("sexo:\n", sexo);

    return 0;
}
