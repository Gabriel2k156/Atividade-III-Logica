include <stdio.h>
int main(){
    int base, expoente, resultado;

    printf("digite a base e o expoente\n");
    scanf("%d %d", &base, &expoente);

    resultado = potencia(base, expoente);//chama a função potencia

    printf("%d elevado a %d = %d\n", base, expoente, resultado);

    return 0;
}