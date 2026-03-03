#include <stdio.h>

   void lerNome(void);
    int lerIdade(void);
    float lerNotas(void);
    float calcularMedia(float num1, float num2, float num3);
    int selecaNumeros();

int main() {

    lerNome();
    int idade = lerIdade();
    float media = lerNotas();
    int selecaoNumeros();

    return 0;
}

void lerNome(void) {
    
    char nome[50];

    printf("digite seu nome:");
    scanf("%s", nome);

    printf("Ola %s\n",nome);
}

int lerIdade () {
    int idade = 0;

    

    while (idade <= 0){
        if (idade <= 0) {
            printf("a idade nao pode ser menor ou igual a zero!\n");
            printf("Digite sua idade:");
            scanf("%d", &idade);
        } else {
            idade = 1;
        }       
    }

    return idade;
} 

float lerNotas() {
    
    float num1,num2,num3;
    
    printf("digite a nota 1: ");
    scanf("%f", &num1);

    printf("digite a nota 2: ");
    scanf("%f", &num2);

    printf("digite a nota 3: ");
    scanf("%f", &num3);

    return calcularMedia(num1, num2, num3);
}

float calcularMedia(float num1, float num2, float num3) {
    
    float media = ((num1+num2+num3)/3);

    printf("A media do aluno e: %.2f\n", media);

    if (media >=7) {
        printf("Aprovado! \n");
    } else if (media >= 5 && media < 7) {
        printf("Voce esta de recuperacao! \n");
    } else{
        printf("Recuperacao! \n");
    }

    return media;

}

int selecaoNumeros() {

    int vetor[5];
    int maiorValor, somaVetor;
    
    for (int i = 0; i <= 4; i++){
        printf("numero %d: ", i + 1);
        scanf("%d", &vetor[i]);

        if(i == 0 || vetor[i] > maiorValor);
            maiorValor = vetor[i];

        somaVetor += vetor[i];
    }
    printf("soma do vetor: %d\n", somaVetor);
    return 0;
}
