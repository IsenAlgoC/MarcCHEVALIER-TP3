#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nba, nbb, nbc, nbd;
    printf("saisir adresse IP : ");
    scanf_s("%nbd.%nbd.%nbd.%nbd", &nba, &nbb, &nbc, &nbd);

    printf("MyAdress_W = %d\n", nba);
    printf("MyAdress_X = %d\n", nbb);
    printf("MyAdress_Y = %d\n", nbc);
    printf("MyAdress_Z = %d\n", nbd);

    if (nba > 1 && nba < 127)
    {
        printf("\nclasse A");
        printf("\nadresse reseau:%d.0.0.0", nba);
        printf("\nadresse masque:255.0.0.0");
        printf("\nadresse diffusion:%d.255.255.255\n", nba);
    }
    else if (nba > 127 && nba < 192)
    {
        printf("\nclasse B");
        printf("\nadresse reseau:%d.%d.0.0", nba, nbb);
        printf("\nadresse masque:255.255.0.0");
        printf("\nadresse diffusion:%d.%d.255.255\n", nba, nbb);
    }
    else if (nba > 192 && nba < 223)
    {
        printf("\nclasse C");
        printf("\nadresse reseau:%d.%d.%d.0", nba, nbb, nbc);
        printf("\nadresse masque:255.255.255.0");
        printf("\nadresse diffusion:%d.%d.%d.255\n", nba, nbb, nbc);
    }
    else printf("\nadresse non valide\n");


}