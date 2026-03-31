#include <stdio.h>

int main() {

    int fila[5];
    int tamanho = 0;
    int i;

    //inserção ao fim por ser fila

    fila[tamanho] = 10;
    tamanho++;

    fila[tamanho] = 20;
    tamanho++;

    fila[tamanho] = 30;
    tamanho++;

    printf("Fila antes da remoção: ");
    for (i = 0; i <tamanho; i++){
        printf("%d ", fila[i]);
    }

    printf("\n");

    printf("Removido do inicio: $d\n", fila[0]);

    for(i = 0; i < tamanho-1; i++){
        fila[i] = fila[i + i];

    }

    tamanho--;

        printf("Fila apos a remoção: ");
    for (i = 0; i <tamanho; i++){
        printf("%d ", fila[i]);
    }

    printf("\n");
    
    return 0;
}