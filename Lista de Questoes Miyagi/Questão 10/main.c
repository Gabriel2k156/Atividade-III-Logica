#include <stdio.h>
int main(){
	int a, b, resultado;
	char tipodeoperacao; // Cria uma string chamada "tipodeoperacao" //

	printf("Qual operacao deseja fazer?\n");
	printf("+ para adicao\n- para subtracao\n* para multiplicacao\n/ para divisao\n\n");
	scanf("%c", &tipodeoperacao); // Capta a entrada do usuario e associa a string "tipodeoperacao"
	
	switch(tipodeoperacao){
		case '+':	
		printf("Digite dois valores\n");
		scanf("%d %d", &a, &b);	// Registra a entrada do usuário //
		resultado = adicao(a, b); // Chama a função "resultado" //
		printf("O resultado da adicao e %d", resultado);
		break; // Impede que o próximo case seja executado //
		
		case '-':			
		printf("Digite dois valores\n");
		scanf("%d %d", &a, &b);	// Registra a entrada do usuário //
		resultado = subtracao(a, b); // Chama a função "resultado" //
		printf("O resultado da subtracao e %d", resultado);
		break; // Impede que o próximo case seja executado //
		
		case '*':			
		printf("Digite dois valores\n");
		scanf("%d %d", &a, &b);	// Registra a entrada do usuário //
		resultado = multiplicacao(a, b); // Chama a função "resultado" //
		printf("O resultado da multiplicacao e %d", resultado);
		break; // Impede que o próximo case seja executado //
		
		case '/':			
		printf("Digite dois valores\n");
		scanf("%d %d", &a, &b);	// Registra a entrada do usuário //
		resultado = divisao(a, b); // Chama a função "resultado" //
		printf("O resultado da divisao e %d", resultado);
		break;	// Impede que o próximo case seja executado //

		default: printf("Digite uma opcao valida\n"); // Impede que o usuário insira algo que não está listado nas opções do menu //
	}
	
	return 0;
}
