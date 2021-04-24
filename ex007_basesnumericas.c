#include <stdio.h>
#include<stdlib.h>

int main()
{
    int OP, N;

    printf("___________________________________________\n");
    printf("        CONVERSOR DE BASES NUMERICAS       \n");
    printf("___________________________________________\n");
    printf("MENU DE OPCOES:\n");
    printf("[ 1 ] Decimal para hexadecimal\n[ 2 ] Hexadecimal para decimal\n\n");
    printf("Sua opcao: ");
    scanf("%d", &OP);
    getchar();
    printf("___________________________________________\n");

    if(OP == 1){
        printf("Informe o valor em decimal: ");
        scanf("%d", &N);
        getchar();
        printf("\n%d em hexadecimal: %x", N, N);
    }
    else if(OP == 2){
        printf("Informe o valor em hexadecimal: ");
        scanf("%x", &N);
        getchar();
        printf("\n%x em decimal: %d", N, N);
    }
    else printf("Opcao invalida!");

    printf("\n___________________________________________\n");
    printf("\n\n");
    system("PAUSE");
    return 0;
}
