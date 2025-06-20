include <stdio.h>
int main(){
    int base, expoente, resultado; // Declaração das variáveis utilizadas //

    printf("digite a base e o expoente\n");
    scanf("%d %d", &base, &expoente); // Registra as entradas do usuário e os associa às variáveis "base" e "expoente"

    resultado = potencia(base, expoente); // Chama a função "potencia" para calcular o resultado // 
    
    printf("%d elevado a %d = %d\n", base, expoente, resultado); // Informa o resultado ao usuário //

    return 0;
}
