#include <stdio.h>
#include <stdlib.h>

int main{
    int i, vetA[5], vetB[5], vetC[5];
    
    for( i=0; i < 5; i++){
        printf("Digite o valor do elemento %i: ", i)
        scanf("&d ", &vetA[i]);
    }

    for(i=0 ; i<5; i++){
        printf("Digite o valor do elemento %i: ", i)
        scanf("&d ", &vetB[i]);
    }

    for(i=0; i<5; i++){
        vetC[i] = vetA[i] + vetB[i];
    }

    printf("\nElementos do vetor A: \n");

    for(i = 0; i<5 ; i++){
        printf("%d ", vetA[i]);
    }

    printf("\n\nElementos do vetor B: \n");

    for(i = 0; i<5 ; i++){
        printf("%d ", vetB[i]);
    }

    printf("\n\nElementos do vetor C: \n");

    for(i=0; i<5; i++){
        printf("%d ", vetC[i]);
    }

    return 0; 
}

