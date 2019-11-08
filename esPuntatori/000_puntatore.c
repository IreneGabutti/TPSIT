/******Gabutti Irene********/


#include <stdio.h>
#include <stdlib.h>

#define LUNG 20   //lunghezza massima vettore

int main()
{
    int dim = 0;
    int *vet1;
    int i;
    int aus = 0;
    printf("Quanti elementi? ");
    scanf("%d", &dim);
    printf("\n");

    //la funzione malloc alloca dinamicamente tot spazio in memoria del tipo di dato che richiedo io
    vet1 = malloc(dim * (sizeof(int)));

    //carico il vettore
    for(i=0; i<dim; i++)
    {
        printf("elemento %d: ", i);
        scanf("%d", &(vet1[i]));
    }

    //cerco l'elemento maggiore
    aus = vet1[0];
    for(i=1; i<dim; i++)
    {
      if(vet1[i]>aus)
      {
        aus = vet1[i];
      }
    }
    printf("Elemento maggiore: %d",aus);

    return 0;
}
