#include <stdio.h>

int main(){
int a, b, resultado	; // Declaração de variávels //

printf("Digite dois numeros\n");
scanf("%d %d", &a, &b); // Solicita entradas do usuário //

resultado = soma(a, b); // Chama a função "soma" //

printf("O resultado da soma e %d", resultado); // Informa o resultado da soma ao usuário //

return 0;

}
