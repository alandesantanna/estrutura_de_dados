#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, vetA[25], vetB[25], vetC[25];
    
    for( i=0; i < 25; i++){
        printf("Digite o valor do elemento %i no vetor A: ", i);
        scanf("%i", &vetA[i]);
    }

    for(i=0 ; i < 25; i++){
        printf("Digite o valor do elemento %i no vetor B: ", i);
        scanf("%i", &vetB[i]);
    }

    for(i=0; i < 25; i++){
        vetC[i] = vetA[i] + vetB[i];
    }
    
    printf("\nElementos do vetor A: \n");

    for(i = 0; i<25; i++){
        printf("%i ", vetA[i]);
    }

    printf("\nElementos do vetor B: \n");

    for(i = 0; i<25; i++){
        printf("%d ", vetB[i]);
    }

    printf("\n\nElementos do vetor C: \n");

    for(i=0; i<25; i++){
        printf("%d ", vetC[i]);
    }
     

   return 0;
}

