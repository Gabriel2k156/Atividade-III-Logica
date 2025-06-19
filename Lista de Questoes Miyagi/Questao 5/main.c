#include "questaodois.h"
#include <stdio.h>

int main(){
	float C, F; // C = Celsius, F = Fahrenheit//
	
	printf("Digite o valor em Celsius\n");
	scanf("%f", &C); // Capta o valor em Celsius para conversão //
	
	F = celsiusParaFahrenheit(C, F); // Chama a função do cálculo da conversão de temperatura //
	
	printf("Resultado e %.2f", F); // Informa o resultado ao usuário //
	
	return 0;
}
