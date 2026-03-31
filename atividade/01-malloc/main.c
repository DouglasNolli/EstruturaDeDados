#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vetor;
    int i;
    int capacidade = 5;

    vetor = (int*) malloc(sizeof(int) * capacidade);

    if(vetor == NULL){
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    for (i = 0; i < capacidade; i++){
        vetor[i] = (i + 1) * 10;
    }

    printf("conteudo do vetor: ");
    for (i = 0; i < capacidade; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");

    //LEMBRETE: toda memoria alocada com malloc dever ser liberada!
    free(vetor);

    return 0;
}