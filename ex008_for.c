#include <stdio.h>
#include<stdlib.h>

int main()
{
    int i, j;

    printf("___________________________________________\n");
    printf("             TESTANDO LACO FOR             \n");

    for(i = 1; i <= 10; i++)
    {
        printf("___________________________________________\n");
        printf("Linha %d\n", i);
        printf("___________________________________________\n");
        for (j = 1; j <= 5; j++)
        {
            printf("Teste: %d\n", j);
        }
    }

    printf("___________________________________________\n");

    for(i = 10; i >= 1; i--)
    {
        printf("Voltando: %d\n", i);
    }

    printf("___________________________________________\n");
    printf("\n\n");
    system("PAUSE");
    system("CLS");
    return 0;
}
