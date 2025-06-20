#include <ctype.h> // Biblioteca para tratar letras maiúsculas e minúsculas

int contaVogais(char frase[]) { // Função que conta as vogais da string
    int i = 0, contador = 0; // Declaração das variáveis

    while (frase[i] != '\0') { // Laço que percorre toda a string até o final
        char letra = tolower(frase[i]); // Converte a letra para minúscula

        if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') { // Verifica se é vogal
            contador++; // Se for vogal, incrementa o contador
        }

        i++; // Avança para a próxima letra
    }

    return contador; // Retorna o total de vogais encontradas
}