#include <iostream>
using namespace std;

const int TAM = 10;
typedef int vetInt[TAM];

int posicao(vetInt vet, int pos){
    int aux = vet[pos];
    int i = pos - 1;

    while((i >= 0) && (vet[i] > aux)){
        i--;
    }

    return i + 1;
}

void inserir(vetInt &vet, int de, int para){
    int aux = vet[de];

    for (int i = de; i > para; i--){
        vet[i] = vet[i-1];
    }

    vet[para] = aux;
}

void insertionSort(vetInt &vet){
    int pos, i;

    for(i = 1; i < TAM; i++){
        pos = posicao(vet, i);
        inserir(vet, i, pos);
    }
}