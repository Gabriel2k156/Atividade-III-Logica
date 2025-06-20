int potencia(int base, int expoente){
    int resultado = 1;
    for(int i = 0; i < expoente; i++){ // laço de repetição utilizado para fazer o calculo da potência
        resultado *= base;
}
return resultado;
}
