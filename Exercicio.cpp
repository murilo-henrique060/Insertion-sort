#include <iostream>
using namespace std;

const int TAM = 10;
typedef int vetInt[TAM];

int main(){
    int i, j, idade;
    vetInt idades;

    for (i = 0; i < TAM; i++){
        cout << "Digite a " << i + 1 << "a idade: ";
        cin >> idade;

        if (i == 0){
            idades[i] = idade;
        } else {
            for(j = i - 1; (j >= 0) && (idades[j] < idade); j--){
                idades[j+1] = idades[j];
            }

            idades[j + 1] = idade;
        }
    }

    cout << "As idades são: ";
    for (i = 0; i < TAM; i++){
        cout << idades[i] << " ";
    }
}