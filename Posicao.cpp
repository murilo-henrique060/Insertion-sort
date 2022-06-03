#include <iostream>
using namespace std;

const int TAM = 10;
typedef int vetInt[TAM];

int posicaoWhile(vetInt vet, int pos /* Posicao do elemento que vai ser comparado */){
    int aux = vet[pos];
    int i = pos - 1;

    while((i >= 0) && (vet[i] > aux /* Criterio de Selecao */)) {
        i--;
    }

    return i + 1;
}

int posicaoFor(vetInt vet, int pos){
    int aux = vet[pos];
    int i;

    for (i = pos - 1; (i >= 0) && (vet[i] > aux); i--){
    }

    return i + 1;
}