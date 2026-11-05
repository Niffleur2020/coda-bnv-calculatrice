#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int nombre_1;
    int nombre_2;
    char operateur;

    printf("Bonjour !\n");

    printf("Choisissez un operateur (+, -, *, /, %%): ");
    scanf(" %c", &operateur);

    printf("Choisissez le premier nombre : ");
    scanf("%d", &nombre_1);

    printf("Choisissez le second nombre : ");
    scanf("%d", &nombre_2);

    if (operateur == '+')
    {
        int resultat = nombre_1 + nombre_2;
        printf("Resultat : %d\n", resultat);
    }
    else if (operateur == '-')
    {
        int resultat = nombre_1 - nombre_2;
        printf("Resultat : %d\n", resultat);
    }
    else if (operateur == '*')
    {
        int resultat = nombre_1 * nombre_2;
        printf("Resultat : %d\n", resultat);
    }
    else if (operateur == '/')
    {
        if (nombre_2 == 0)
        {
            printf("Impossible de diviser par 0\n");
        }
        else
        {
            float resultat = (float) nombre_1 / nombre_2;
            printf("Resultat : %.2f\n", resultat);
        }
    }
    else if (operateur == '%')
    {
        if (nombre_2 == 0)
        {
            printf("Impossible de faire un modulo par 0\n");
        }
        else
        {
            int resultat = nombre_1 % nombre_2;
            printf("Resultat : %d\n", resultat);
        }
    }
    else
    {
        printf("Operateur non reconnu\n");
    }

    return 0;
}
