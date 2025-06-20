#include <stdio.h>

int main() {
    int numero; // Declaração da variável que irá armazenar o número digitado pelo usuário //

    printf("Digite um numero inteiro positivo: "); // Exibe mensagem pedindo ao usuário para digitar um número //
    scanf("%d", &numero); // Capta o número digitado pelo usuário e armazena na variável 'numero' //

    if (numero > 0) { // Verifica se o número digitado é positivo //
        int resultado = somaRecursiva(numero); // Chama a função recursiva e armazena o resultado //
        printf("A soma dos primeiros %d numeros inteiros e: %d\n", numero, resultado); // Exibe o resultado na tela //
    } 
        
	else { // Se o número digitado for menor ou igual a zero, exibe mensagem de erro //
        printf("Digite um numero positivo maior que zero.\n"); 
    }

    return 0; // Finaliza o programa //
}