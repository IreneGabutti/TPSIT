/*****Gabutti Irene*****/

#include <stdlib.h>
#include <stdio.h>

#define LUNG 25     //lunghezza massima vettore di caratteri

int main()
{
    char str[LUNG];
    char *pt;
    int i = 0;

    printf("Inserisci la stringa(senza spazi) di cui vuoi la lunghezza(massimo 24 caratteri): ");
    scanf("%s", str) ;

    pt = str;
    while (*pt != '\0')
    {
        i++;
        pt++;
    }
    printf("Lunghezza della stringa : %d", i);

    return 0;
}
