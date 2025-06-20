int maiorValor(int a, int b, int c) { // Função para encontrar o maior valor entre três números
    int maior = a; // Considera 'a' como maior inicialmente

    if (b > maior) { // Se 'b' for maior que 'a', atualiza
        maior = b;
    }
    if (c > maior) { // Se 'c' for maior que o atual, atualiza
        maior = c;
    }

    return maior; // Retorna o maior valor
}