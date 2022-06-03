#include <iostream>
using namespace std;

const int TAM = 10;
typedef int vetInt[TAM];

void inserir(vetInt &vet, int de /* Posição do elemento que vai ser realocado */, int para /* Posição em que o elemento vai ser inserido */){
    int aux = vet[de];

    for (int i = de; i > para; i--){
        vet[i] = vet[i-1];
    }

    vet[para] = aux;
}