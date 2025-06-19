#include <stdio.h>
int main(){
	int numeros[5]; // Declaracao de um vetor com um máximo de 5 entradas//
	int resultado; // Declaração de inteiro representando o resultado do cálculo //
	
	printf("Digite cinco valores\n");
	scanf("%d %d %d %d %d", &numeros[0], &numeros[1], &numeros[2], &numeros[3], &numeros[4]); // Capta as entradas do usuário e insere em cada espaço de memória//
	
	resultado = media(numeros); // Atribui a função "media" ao atributo resultado //
	
	printf("A media dos valores digitados e %d", resultado); // Informa a média dos valores ao usuário //
	
	return 0;
}