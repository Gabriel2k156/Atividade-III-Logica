int Ehprimo(int numero) {
    if (numero <= 1) {  // Números menores ou iguais a 1 não são primos
        return 0;  // Retorna 0, indicando ao usuario que o número não é primo //
    }

    
    for (int i = 2; i * i <= numero; i++) { // Laço de repetição: testa divisores de 2 até a raiz quadrada de "numero" //
        if (numero % i == 0) {  // Se houver um divisor exato, o número não é primo //
            return 0;  // Retorna 0, indicando que ao usuário que o número não é primo //
        }
    }

    return 1;  // Retorna 1, indicando que é primo
}
