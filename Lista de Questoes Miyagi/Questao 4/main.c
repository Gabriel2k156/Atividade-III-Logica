#include <stdio.h>

int maiorValor(int a, int b, int c); // Protótipo da função

int main() {
    int num1, num2, num3; // Declaração das variáveis

    printf("Digite 3 numeros inteiros\n"); // Exibe mensagem
    scanf("%d %d %d", &num1, &num2, &num3); // Recebe os 3 números digitados

    int maior = maiorValor(num1, num2, num3); // Chama a função maiorValor e armazena o resultado
    printf("Maior valor eh: %d\n", maior); // Exibe o maior valor encontrado

    return 0; // Finaliza o programa
}