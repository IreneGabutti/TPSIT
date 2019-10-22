/*******Gabutti Irene*******/

#include <stdio.h>
#include <stdlib.h>

#define LUNG 20   //dimensione massima dell'array

int main()
{
    int dim = 0;
    float *vet1;
    int i;
    float aus;
    printf("Quanti elementi? ");
    scanf("%d", &dim);
    printf("\n");

    //utilizzo la malloc per allocare l'array in memoria
    vet1 = (float*)malloc(dim * (sizeof(float)));

    //carico il vettore
    for(i=0; i<dim; i++)
    {
        printf("elemento %d: ", i);
        scanf("%f", vet1+i);
    }
    //stampo il vettore
    for(i=0; i<dim; i++)
    {
      printf(" %f ",*(vet1+i));
    }
    //cerco il massimo elemento nell'array
    aus = vet1[0];
    for(i=1; i<dim; i++)
    {
      if(*(vet1+i)>aus)
      {
        aus = *(vet1+i);
      }
    }
    printf("Elemento maggiore: %f",aus);

    return 0;
}
