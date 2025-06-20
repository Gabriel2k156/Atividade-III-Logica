int fatorial (int n){ //Cria uma função chamada fatorial //
    int resultado = 1; // Declaração da variável 'resultado' iniciada com valor 1 //

    for(int i = 1; i <= n; i++){ // Laço de repetição: enquanto "i" for menor ou igual a "n", multiplica "resultado" por "i" e incrementa "i" a cada volta //
        resultado *= i; // Multiplica o valor atual de 'resultado' pelo valor de 'i' //
    }

    return resultado; // Retorna o valor final da variável "resultado" (o fatorial calculado) //
}
