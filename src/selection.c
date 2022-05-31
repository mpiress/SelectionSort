#include "selection.h"


void Initialize(Vector *v){
	
	//Porque 42? Leia o guia definitivo do mochileiro das galáxias :).
	srand(42); 
    
    v->itens = (int*)malloc(MAXSIZE*sizeof(int));
	for(int i=0; i<MAXSIZE; i++)
		v->itens[i] = rand()%100;
	v->swap = 0;
}

void Swap(int *a, int *b){
	int aux = *a;
	*a = *b;
	*b = aux;
}

void Imprime(Vector *v){
	for(int i=0; i<MAXSIZE; i++)
		printf("%d\t", v->itens[i]);
	printf("\n");
}


void SelectionSort(Vector *v){
	int min;
	for(int i=0; i<MAXSIZE-1; i++){
		
		min = i;	
		for(int j=i+1; j<MAXSIZE; j++)
			if(v->itens[min] > v->itens[j])
				min=j;
		
		Swap(&v->itens[min], &v->itens[i]);
		v->swap ++;
		
		Imprime(v);
	}
}


