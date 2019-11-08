#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DIM 20

typedef struct contact
{
    /* data */
    char name[DIM];
    int number;
    struct contact* next;
}Contact;

int main(int argc, char const *argv[])
{
    Contact giovanni;
    strcpy(giovanni.name, "giovanni");
    giovanni.number = 11;
    giovanni.next = NULL;

    Contact mamma;
    strcpy(mamma.name, "mamma");
    mamma.number = 12;
    mamma.next= &giovanni;

    Contact io;
    strcpy(io.name, "io");
    io.number = 12;
    io.next= &giovanni;

    mamma.next= &io;

    Contact* support = &mamma;

    do
    {
        printf("Name: %s\tNumber: %d\n", support->name, support->number);
        support = support->next;
    } while (support->next != NULL);

    printf("Name: %s\tNumber: %d\n", support->name, support->number);

    return 0;
}
