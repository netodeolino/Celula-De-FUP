#include <iostream>

using namespace std;

void imprime(int vet[], int tam){
    int menor = vet[tam-1];
    for(int i = 0; i < tam; i++){
        if(vet[i] < menor){
            menor = vet[i];
        }
    }
    //cout << menor << endl;
    for(int j = 0; j < tam; j++){
        if(vet[j] == menor){
            cout << j << " ";
        }
    }
}

int main()
{
    int vet[7] = {4, 6, 5, 4, 7, 99, 4};
    imprime(vet, 7);
    return 0;
}
