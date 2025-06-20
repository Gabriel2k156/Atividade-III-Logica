int somaRecursiva(int n) {
    if (n == 1) { // Caso base: quando o número chegar em 1, retorna 1 e encerra a recursão //
        return 1;
    } else { // Enquanto o número não for 1, a função continua chamando ela mesma subtraindo 1 //
        return n + somaRecursiva(n - 1); // Soma o número atual com a chamada recursiva //
    }
}