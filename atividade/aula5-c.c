#include <stdio.h>

struct Pessoa {
    char nome[50];
    char sexo;
    char cpf[15];
    int dia, mes, ano;
    float peso, altura;
};

void cadastrarPessoa(struct Pessoa *p) {

    printf("Digite seu nome: ");
    scanf("%s", p->nome);

    printf("Digite o dia do seu nascimento: ");
    scanf("%d", &p->dia);

    printf("Digite o mes do seu nascimento: ");
    scanf("%d", &p->mes);

    printf("Digite o ano do seu nascimento: ");
    scanf("%d", &p->ano);

    printf("Digite seu peso: ");
    scanf("%f", &p->peso);

    printf("Digite sua altura: ");
    scanf("%f", &p->altura);

    printf("Digite seu cpf: ");
    scanf("%s", p->cpf);

    printf("Digite seu sexo: ");
    scanf(" %c", &p->sexo);
}

void mostrarPessoa(struct Pessoa *p) {
    printf("\n=== Dados Cadastrados ===\n");
    printf("Nome: %s\n", p->nome);
    printf("CPF: %s\n", p->cpf);
    printf("Sexo: %c\n", p->sexo);
    printf("Data nascimento: %d/%d/%d\n", p->dia, p->mes, p->ano);
    printf("Peso: %.2f\n", p->peso);
    printf("Altura: %.2f\n", p->altura);
}

int main() {
    struct Pessoa pessoa;

    cadastrarPessoa(&pessoa);
    mostrarPessoa(&pessoa);

    return 0;
}