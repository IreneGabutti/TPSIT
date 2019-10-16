//Gabutti Irene
//file CSV
//strtok


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define LUNG 200
#define RIGHE 16600
#define COLONNE 11

#define DELIM ","



typedef struct
{
    int Rank;
    char Name[50];
    char Platform[50];
    int Year;
    char Genre[50];
    char Publisher[50];
    float NA_Sales;
    float EU_Sales;
    float JP_Sales;
    float Other_Sales;
    float Global_Sales;
}Struttura;

int main()
{
    Struttura dati[RIGHE];
    int cont = 0;
    int i;
    FILE *fp;
    char buffer[LUNG];
    char* split;
    fp = fopen("giochi.csv","r");
    if(fp == NULL)
    {
        printf("Non esiste il file");
    }
    else
    {
        while(fgets(buffer,LUNG,fp))        //fino a quando ci sono rige nel file legge
                                            //la funzione gets va fino a fine riga, prende anche gli spazi
        {
            if(cont == 0)       //quando il contatore è uguale a 0 vado a stampare la prima riga in cui è contenuta la descizione dei vari campi (una sola volta all'inizio dell'esercizio)
            {
                printf("%s   ", strtok(buffer,DELIM));
                printf("%s   ", strtok(NULL,DELIM));
                printf("%s   ", strtok(NULL,DELIM));
                printf("%s   ", strtok(NULL,DELIM));
                printf("%s   ", strtok(NULL,DELIM));
                printf("%s   ", strtok(NULL,DELIM));
                printf("%s   ", strtok(NULL,DELIM));
                printf("%s   ", strtok(NULL,DELIM));
                printf("%s   ", strtok(NULL,DELIM));
                printf("%s   ", strtok(NULL,DELIM));
                printf("%s   ", strtok(NULL,DELIM));


            }
            else if(cont != 0)
            {
                dati[cont].Rank = atoi(strtok(buffer,DELIM));
                strcpy(dati[cont].Name, strtok(NULL,DELIM));
                strcpy(dati[cont].Platform, strtok(NULL,DELIM));
                dati[cont].Year = atoi(strtok(NULL,DELIM));
                strcpy(dati[cont].Genre, strtok(NULL,DELIM));
                strcpy(dati[cont].Publisher, strtok(NULL,DELIM));
                dati[cont].NA_Sales = atof(strtok(NULL,DELIM));
                dati[cont].EU_Sales = atof(strtok(NULL,DELIM));
                dati[cont].JP_Sales = atof(strtok(NULL,DELIM));
                dati[cont].Other_Sales = atof(strtok(NULL,DELIM));
                dati[cont].Global_Sales = atof(strtok(NULL,DELIM));

            }
            cont++;
        }

        for(i=1; i<RIGHE; i++)
        {
            printf("%d %s %s %d %s %s %f %f %f %f %f", dati[i].Rank, dati[i].Name, dati[i].Platform, dati[i].Year, dati[i].Genre, dati[i].Platform, dati[i].NA_Sales, dati[i].EU_Sales, dati[i].JP_Sales, dati[i].Other_Sales, dati[i].Global_Sales);
            printf("\n");
        }
    }
    fclose(fp);

}
