#include<stdio.h>
#include "lista.h"

int seq(int n){
	if(n == 0)	return 0;
	else if(n == 1)	return 1;
	else if(n == 2)	return 1;
	else if(n == 3) return 1;
	else return seq(n-1) + seq(n-2) + seq(n-3);
}

int impar(int n){
	if(n == 1) 	return 1;	
	else return impar(n-1) + 2;
}

int maiorRecursivo(TLista *l, int ini, int fim){
	if(ini == fim) return l->vetor[ini];
	int meio = (ini + fim)/2;
	int maioresq = maiorRecursivo(l, ini, meio);
	int maiordir = maiorRecursivo(l, meio+1, fim);
	if(maioresq > maiordir) return maioresq;
	else return maiordir;
}

int buscaBinaria(TLista *l, int ini, int fim, int x){
	if(ini > fim) return -1;
	int meio = (ini + fim)/2;
	if(l->vetor[meio] == x) return meio;
	if(x < l->vetor[meio] ) return buscaBinaria(l, meio+1, fim, x);
	else return buscaBinaria(l, meio+1, fim, x);
}


