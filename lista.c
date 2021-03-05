#include <stdio.h>
#include <stdlib.h>
#include "lista.h"
const int TAM = 100;

struct Lista{
	int vetor[100];
	int n;
};

TLista* criar(){
	TLista* nova = (TLista *)malloc(sizeof(TLista));
	nova->n = 0;
	return nova;
}

int tamanho(TLista *l){
	return l->n;
}

void inserir(TLista *l, int v){
	if(l->n == TAM) return;
	l->vetor[l->n] = v;
	l->n = l->n + 1;
}

int buscar(TLista *l, int v){
	int i;
	for(i = 0; i < l->n; i++){
		if(l->vetor[i] == v){
			return i;
		}
	}
	
	return -1;
}

int remover(TLista *l, int v){
	int pos = buscar(l, v);
	if(pos == -1) return -1;
	int i;
	for(i = pos + 1; i < l->n - 1; i++){
		l->vetor[i - 1] = l->vetor[i];
	}
	l->n = l->n - 1;
	return pos;
}

void exibe(TLista *l){
	printf("\n");
	int i;
	for(i = 0; i < l->n; i++){
		printf("%d ", l->vetor[i]);
	}
}
/*
void remover_pos(TLista *lista, int valor) {
	char str[20] = "Lista esta Cheia";
    int indiceLista, NumeroTamanho = sizeof(lista);
    //printf("\n%d\n",NumeroTamanho);
    if(lista->n == TAM){
		printf(str);
		return 0;
	}
	
    if(valor < NumeroTamanho) {
	    for(indiceLista = valor + 1; indiceLista < NumeroTamanho; indiceLista++) {
	        lista->vetor[indiceLista - 1] = lista->vetor[indiceLista];
	    }
	    lista->n--;
    } 
    
	else{
		printf("Fim do programa! \n");
		return 0;
    }
    
}*/

// 3 4 5 6
// 2 3
/*
void inserir_pos(TLista *l, int v, int p){
	if(l->n == TAM) return;
	if (p > TAM || p < 0) return; 
	int auxG, aux, aux2;
	int i;
	for (i = p; i < l->n; i = i + 2){		
		if(i == p){
			auxG = l->vetor[i + 1];
			l->vetor[i + 1] = l->vetor[i];
			l->vetor[i] = v;
		}
		else{
			aux2 = l->vetor[i];
			l->vetor[i] = auxG;
			auxG = l->vetor[i + 1];
			l->vetor[i + 1] = aux2;
		}		 
	}
	l->n = l->n + 1;
}*/

void ordena_bin(TLista *l, int v){
	if(v < 0) return;
	int i, aux;
	for(i =0; i < v; i++){
		if(l->vetor[i] > l->vetor[v]){
			aux = l->vetor[v];
			l->vetor[v] = l->vetor[i];
			l->vetor[i] = aux;
		}
	}
	ordena_bin(l, v-1);
}

int impar(int n){
	if(n == 1) 	return 1;	
	else return impar(n-1) + 2;
}

int seq(int n){
	if(n == 1)	           return 1;
	else if(n == 2)	return 1;
	else if(n == 3)          return 1;
	else return seq(n-1) + seq(n-2) + seq(n-3);
}







