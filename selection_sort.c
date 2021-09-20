	#include <stdio.h>
	#include <time.h>
	#include <stdbool.h>
	
	/* Selection Sort é um algoritmo de ordenação que passa
	o menor valor de um vetor para a primeira posicao (ou o contrario, 
	dependendo da ordem de execucao), depois o segundo menor valor 
	para a segunda posicao, e assim é feito sucessivamente com todos os valores restante. 
	*/
	
	/*
	@autor Felizberto Macedo, João Carvalho; Karlisson Breno
	*/
	
	void selection_sort (int vetor[], int max) {
	
	int i, j, min, aux;
	for (i = 0; i < (max - 1); i++) {
	min = i;
	for (j = i+1; j < max; j++) {
	  if (vetor[j] < vetor[min]) { //Se tiver algum numero menor no vetor que a posicao atual, ele faz a troca.
	min = j;
	  }
	}
	if (i != min) { //Se o primeiro numero for diferente do menor numero, ele faz a troca.
	  aux = vetor[i];
	  vetor[i] = vetor[min];
	  vetor[min] = aux;
	}
	}
	for (i = 0; i < max; i++) { //Imprime o vetor ordenado 
	printf ("%d|",vetor[i]);
	}
	printf ("\n");
	}
	
	void selection_sort_inverse(int vetor[], int max){
	
	int i, j, min, aux;
	for (i = 0; i < (max - 1); i++) {
	min = i;
	for (j = i+1; j < max; j++) {
	  if (vetor[j] > vetor[min]) { //Se tiver algum numero menor no vetor que a posicao atual, ele faz a troca.
	min = j;
	  }
	}
	if (i != min) { //Se o primeiro numero for diferente do menor numero, ele faz a troca.
	  aux = vetor[i];
	  vetor[i] = vetor[min];
	  vetor[min] = aux;
	}
	}
	for (i = 0; i < max; i++) { //Imprime o vetor ordenado 
	printf ("%d|",vetor[i]);
	}
	printf ("\n");
	}
	
	void aleatory_shuffle(int vetor[], int max){
	int i, j, min, aux;
	for (i = 0; i < (max - 1); i++) {
	min = i;
	}
	for (i = 0; i < max; i++) { //Imprime o vetor ordenado 
	printf ("%d|",vetor[i]);
	}
	printf ("\n");
	}
	
	
	/* ------------------------- método main -------------------------------------------------------------- */
	int main () {
	int op;
	
	
	do {
		
		printf("Digite a opcao desejada\n\n");
		printf("1 - Ordenar em ordem crescente\n");
		printf("2 - Ordenar em ordem decrescente\n");
		printf("3 - Ordenar aleatoriamente\n");
		printf("0 - Sair");
		scanf("%d", &op);
		switch(op) {
			case 1:{
			
				  int i, max;
	
	printf("Digite o tamanho do vetor: ");
	scanf ("%d", &max); //Tamanho do vetor a ser atribuido
	
	int vetor[max]; //vetor recebe o tamanho da variavel max, que fora anterior mente atribuido
	srand(time(NULL)); // Gera numeros randomicamente ate chegar na quantidade especificada pelo usuario (ainda esta repetindo os numeros)
	for (i = 0; i < max; i++) {
	vetor[i] = rand() % max + 1;
	printf("Quantidade de numeros inseridos -> %i : %i", i+1, vetor[i]);
	printf("\n");
	}
	
	selection_sort (vetor, max);
			break;
		}
		case 2:{
			
				  int i, max;
	  
	  printf("Digite o tamanho do vetor: ");
	  scanf ("%d", &max); //Tamanho do vetor a ser atribuido
	  
	  int vetor[max]; //vetor recebe o tamanho da variavel max, que fora anterior mente atribuido
	  srand(time(NULL)); // Gera numeros randomicamente ate chegar na quantidade especificada pelo usuario (ainda esta repetindo os numeros)
	  for (i = 0; i < max; i++) {
	    vetor[i] = rand() % max + 1;
	    printf("Quantidade de numeros inseridos -> %i : %i", i+1, vetor[i]);
	    printf("\n");
	  }
	  
	  selection_sort_inverse(vetor, max);
			
			break;
		}
		case 3:{
			
			int i, max;
	
	printf("Digite o tamanho do vetor: ");
	scanf ("%d", &max); //Tamanho do vetor a ser atribuido
	
	int vetor[max]; //vetor recebe o tamanho da variavel max, que fora anterior mente atribuido
	srand(time(NULL)); // Gera numeros randomicamente ate chegar na quantidade especificada pelo usuario (ainda esta repetindo os numeros)
	for (i = 0; i < max; i++) {
	vetor[i] = rand() % max + 1;
	printf("Quantidade de numeros inseridos -> %i : %i", i+1, vetor[i]);
	printf("\n");
	}
	
	aleatory_shuffle(vetor, max);
			
			break;
		}
	default:{
		printf("Obrigado por usar!\n");
		break;
	}
	}
	} while(op!=0);
	
	
}
