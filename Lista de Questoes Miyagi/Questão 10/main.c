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
		scanf("%d %d", &a, &b);	
		resultado = adicao(a, b);
		printf("O resultado da adicao e %d", resultado);
		break;
		
		case '-':			
		printf("Digite dois valores\n");
		scanf("%d %d", &a, &b);	
		resultado = subtracao(a, b);
		printf("O resultado da subtracao e %d", resultado);
		break;
		
		case '*':			
		printf("Digite dois valores\n");
		scanf("%d %d", &a, &b);	
		resultado = multiplicacao(a, b);
		printf("O resultado da multiplicacao e %d", resultado);
		break;
		
		case '/':			
		printf("Digite dois valores\n");
		scanf("%d %d", &a, &b);	
		resultado = divisao(a, b);
		printf("O resultado da divisao e %d", resultado);
		break;	
	}
	
	return 0;
}
