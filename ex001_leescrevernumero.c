#include <stdio.h>
#include <stdlib.h>

int main()
{

 int numero; // isto é uma variável
 printf("Entre com um numero: "); //imprime uma frase
 scanf("%d",&numero); //lê um número do usuário
 getchar(); // limpa o buffer do teclado
 printf("O numero digitado foi: %d", numero);

 printf("\n\n");
 system("PAUSE");
 return 0;
}
