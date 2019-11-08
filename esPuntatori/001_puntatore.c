/******Gabutti Irene******/
#include <stdio.h>
#include <stdlib.h>

#define LUNG 20   //dimensione massima vettore

int main()
{
    int dim = 0;
    float *vet1;
    int i;
    printf("Quanti elementi? ");
    scanf("%d", &dim);
    printf("\n");

    //utilizzo la funzione malloc per allocare l'array in memoria
    vet1 = (float*)malloc(dim * (sizeof(float)));

    //carico il vettore
    for(i=0; i<dim; i++)
    {
        printf("elemento %d: ", i);
        scanf("%f", vet1+i);
    }

    /*stampo gli elementi del vettore utilizzando il puntatore * che
    restituisce l'argomento della cella a cui mi riferisco*/
    for(i=0; i<dim; i++)
    {
      printf(" %f ",*(vet1+i));
    }

    return 0;
}
