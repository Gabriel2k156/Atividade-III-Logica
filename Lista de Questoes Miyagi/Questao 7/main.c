#include <stdio.h>

int contaVogais(char frase[]); // Protótipo da função

int main() {
    char frase[100]; // Declaração da string que irá armazenar a frase

    printf("Digite uma frase:\n"); // Exibe mensagem
    fgets(frase, 100, stdin); // Lê a frase digitada pelo usuário (aceita espaços)

    int total = contaVogais(frase); // Chama a função e armazena o resultado
    printf("A quantidade de vogais na frase eh: %d\n", total); // Exibe o resultado

    return 0; // Finaliza o programa
}