#include <stdio.h>

int main(){

    int numero;
    
    printf("Digite um numero inteiro positivo\n");
    
    scanf("%d", &numero); // Capta a entrada do usuário //
    
	int resultado = fatorial(numero);// chama a função
        printf("%d fatorial = %d\n", numero, resultado);
        
return 0;
}