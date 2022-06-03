#include <iostream>
using namespace std;

const int TAM = 10;
typedef int vetInt[TAM];

void mostrarVet(vetInt vet){
    for(int i = 0; i < TAM; i++){
        cout << vet[i] << " ";
    }
    cout << endl;
}

void inserir(vetInt &vet, int de, int para){
    int aux = vet[de];

    cout << "Vetor inicial: "; mostrarVet(vet);

    for (int i = de; i > para; i--){
        vet[i] = vet[i-1];
        cout << "\n"; mostrarVet(vet);
    }

    vet[para] = aux;

    cout << "\nVetor final: "; mostrarVet(vet);
}

int main(){
    vetInt vet = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    inserir(vet, 9, 0);
}