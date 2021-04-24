#include <stdio.h>
#include<stdlib.h>

int main()
{
    int a, b;

    printf("Digite um valor para a: ");
    scanf("%d", &a);
    getchar();
    printf("Digite um valor para b: ");
    scanf("%d", &b);
    getchar();
    printf("\n");

    if(a < b)
    {
        printf("a menor que b.");
    }
    else if (b < a)
    {
        printf("b menor que a.");
    }
    else
    {
        printf("a igual a b.");
    }

    printf("\n\n");
    system("PAUSE");
    return 0;
}
