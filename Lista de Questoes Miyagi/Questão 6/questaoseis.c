int media (int numeros[5]){
	int soma = 0, i; // Declaração dos inteiros usados nos blocos de código //
	
	for( i = 0; i < 5; i++){ // Laço de repetição: "enquanto não houverem menos que 5 entradas, adicione a entrada atual ao inteiro SOMA" // 
		soma += numeros[i]; // Soma a entrada do usuário ao inteiro "soma" //
	}
	
	return soma / 5; // Divide o valor total das entradas (que foram aglomeradas no inteiro "soma") e os divide por 5, tendo a média como resultado//
}