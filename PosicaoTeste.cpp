#include <iostream>
using namespace std;

const int TAM = 10;
typedef int vetInt[TAM];

int posicaoWhile(vetInt vet, int pos){
    int aux = vet[pos];
    int i = pos - 1;

    while((i >= 0) && (vet[i] > aux)) {
        i--;
    }

    return i + 1;
}

int posicaoFor(vetInt vet, int pos){
    int aux = vet[pos];
    int i;

    cout << "Numero a ser comparado: " << aux << endl;

    for (i = pos - 1; (i >= 0) && (vet[i] > aux); i--){
        cout << "Resultado da comparação: " << vet[i] << " > " << aux << " = verdadeiro" << endl;
    }

    if (i == -1) {
        cout << "Indice menor que zero" << endl;
    } else {
        cout << "Resultado da comparacao: " << vet[i] << " > " << aux << " = falso" << endl;
    }

    cout << "Valor Retornado: " << i + 1 << endl;

    return i + 1;
}

int mostrarVetor(vetInt vet){
    for (int i = 0; i < TAM; i++){
        cout << vet[i] << " ";
    }
    cout << endl;
}

int main(){
    vetInt vet = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

    cout << "Vetor: "; mostrarVetor(vet);
    posicaoFor(vet, 9);
}