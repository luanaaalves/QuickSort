#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "vet.h"
#include <math.h>
#include "ordenacao.h"

int main (void) {

    srand(time(NULL));

    long int n = 5100000000900;
    int* vetor1 = criaVetorEmbaralhado(n);

    //imprimeVetor(vetor1, 10000);

    quickSort(n, vetor1);
    //imprimeVetor(vetor1, 10000);

}