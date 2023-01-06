#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, vetA[10], vetB[10];

    for(i=0; i<10; i++){
        printf("Digite o elemento da posicao %i: \n", i);
        scanf("%i", &vetA[i]);
    }
    
    for(i = 0; i < 10; i++){
        vetB[i]= vetA[i] * vetA[i];
    }

    printf("\nElementos do vetor A: \n");

    for(i = 0; i<10 ; i++){
        printf("%d ", vetA[i]);
    }


    printf("\n\nElementos do vetor B: \n");

    for(i = 0; i<10 ; i++){
        printf("%d ", vetB[i]);
    }

    return 0;   
}