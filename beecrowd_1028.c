/*
Brincadeira de trocar figurinhas. Regras:
	1. Conta a quantidade de figurinhas que tem
	2. Dividir as figurinhas em pilhas do mesmo tamanho, no tamanho máximo possível
	3. Cada escolhia uma pilha do amigo para receber
Entrada: 
	1. Quantidade de caso de teste em valor inteiro.
	2. Quantidade de figurinhas de Ricardo e Vicente respectivamente, em valores inteiros
Saida: 
	1. Cada caso de teste = valor saída que é o tamanho máximo da pilha que poderá ser trocado
		a. divisor inteiro em comum entre as quantidades de figurinhas

*/

#include <stdio.h>

int main () {
    int teste;  

    scanf("%d", &teste);

    int R[teste], V[teste];
    
    for (int i = 0; i < teste; i++)
    {
        scanf("%d", &R[i]);
        scanf("%d", &V[i]);
    }

   for (int i = 0; i < teste; i++)
   {
    while (V[i] != 0)
    {
        int temp = V[i];
        V[i] = R[i] % V[i];
        R[i] = temp;
    }
    printf("%d\n", R[i]);
   }
    
}