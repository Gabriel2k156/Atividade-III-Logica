#include <stdio.h>

int main(){
int a, b, resultado	;

printf("Digite dois numeros\n");
scanf("%d %d", &a, &b);

resultado = soma(a, b);

printf("O resultado da soma e %d", resultado);

return 0;

}
