/*========= IMPLEMENTACAO DAS FUNCOES =========*/
#include <stdio.h>
#include <stdlib.h>
#include "ordenacao.h"
#include "vet.h"

/*=========================  quickSort  =========================*/
int particiona(int a, int b, int* v) {
    int c = v[a];
    while(a < b) {
        while(v[a] < c)
            a++;
        while(v[b] > c)
            b--;    
        troca(v, a, b);    
    }
    return a;
}

void QuickSort(int a, int b, int* v){
    if(a < b) {
        int pivo = particiona(a, b, v);
        QuickSort(a, pivo - 1, v);
        QuickSort(pivo + 1, b, v);
    }
}

void quickSort(int n, int* v) {
    QuickSort(0, n - 1, v);
}