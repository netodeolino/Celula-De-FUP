#include <iostream>

using namespace std;
void select(int vet[], int inicio, int fim){
    int menor = inicio;
    for (int i = inicio; i < fim; i++){
        if (vet[i] < vet[menor]){
            menor = i;
        }
    }
    std::swap(vet[inicio], vet[menor]);
}

void select_sort(int vet[], int tam){
    for (int i = 0; i < tam; i++){
        select(vet, i, tam);
    }
}

int main()
{
    int vet[10] = {3, 7, 4, 1, 8, 89, 45, 23, 3, 2};

    select_sort(vet, 10);

    for (int i = 0; i < 10; i++)
        cout << vet[i] << " ";
    return 0;
}
