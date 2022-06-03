#include <iostream>
using namespace std;

const int TAM = 10;
typedef int vetInt[TAM];

void inserirOrdenado(vetInt vet){
    int i, j, num;

    for (i = 0; i < TAM; i++){
        cout << "Digite o valor do " << i + 1 << "o. elemento: ";
        cin >> num;

        if (i == 0){
            vet[i] = num;
        } else {
            for(j = i - 1; (j >= 0) && (vet[j] > num); j--){
                vet[j+1] = vet[j];
            }

            vet[j+1] = num;
        }
    }
}