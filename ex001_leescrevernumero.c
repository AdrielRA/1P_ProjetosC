#include <stdio.h>
#include <stdlib.h>

int main()
{

 int numero; // isto � uma vari�vel
 printf("Entre com um numero: "); //imprime uma frase
 scanf("%d",&numero); //l� um n�mero do usu�rio
 getchar(); // limpa o buffer do teclado
 printf("O numero digitado foi: %d", numero);

 printf("\n\n");
 system("PAUSE");
 return 0;
}
