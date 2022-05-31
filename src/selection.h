#ifndef SELECTION_H 
#define SELECTION_H

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


#define MAXSIZE 10


typedef struct Vector Vector;

struct Vector{
	int *itens;
	int tam;
	int swap;
};

void Initialize(Vector *v);
void Imprime(Vector *v);
void Swap(int *a, int *b);

void SelectionSort(Vector *v);

#endif