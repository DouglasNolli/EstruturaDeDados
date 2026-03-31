#include <stdio.h>

int a = 10;
int *ptrA = &a;


struct Pessoa {
    char nome[50];
    char sexo;
    char cpf[15];
    int dia,mes,ano;
    float peso,altura;
};

int main() {
    
    struct Pessoa strPessoa;
    
    printf("Digite seu nome: ");
    scanf("%s", strPessoa.nome);

    printf("Digite o dia do seu nascimento: ");
    scanf("%d", &strPessoa.dia);

    printf("Digite o mes do seu nascimento: ");
    scanf("%d", &strPessoa.mes);

    printf("Digite o ano do seu nascimento: ");
    scanf("%d", &strPessoa.ano);

    printf("Digite seu peso: ");
    scanf("%f", &strPessoa.peso);

    printf("Digite sua altura: ");
    scanf("%f", &strPessoa.altura);

    printf("Digite seu cpf: ");
    scanf("%s", strPessoa.cpf);

    printf("Digite seu sexo: ");
    scanf("%c", &strPessoa.sexo);


    printf("nome: \n", strPessoa.nome);
    printf("dia: \n", strPessoa.dia, "mes: ",strPessoa.mes,"ano: ",strPessoa.ano);
    printf("peso:\n", strPessoa.peso);
    printf("altura:\n", strPessoa.altura);
    printf("cpf:\n", strPessoa.cpf);
    printf("sexo:\n", strPessoa. sexo);

    return 0;
}