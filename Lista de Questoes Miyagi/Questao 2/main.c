#include <stdio.h> 

int main() {
    int valor;  // Declaração da variável chamada valor //

    printf("Digite um numero inteiro: ");
    scanf("%d", &valor);  // Lê o número fornecido pelo usuário //

    
    if (Ehprimo(valor)) { // Verifica se o número é primo usando a função ehprimo//
        printf("É primo\n");  // Se a função retornar 1, o número é primo //
    } else {
        printf("Não é primo\n");  // Se a função retornar 0, o número não é primo //
    }

    return 0;
}