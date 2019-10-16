//creare un vettore, chiedere la dimensione


#include <stdio.h>
#include <stdlib.h>

#define LUNG 20

int main()
{
    int dim = 0;
    float *vet1;
    int i;
    printf("Quanti elementi? ");
    scanf("%d", &dim);
    printf("\n");

    vet1 = (float*)malloc(dim * (sizeof(float)));

    //carico il vettore
    for(i=0; i<dim; i++)
    {
        printf("elemento %d: ", i);
        scanf("%f", vet1+i);
    }

    for(i=0; i<dim; i++)
    {
      printf(" %f ",*vet1+i);
    }

    return 0;
}
