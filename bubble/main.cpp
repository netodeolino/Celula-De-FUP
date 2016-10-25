#include <iostream>

using namespace std;

void bubble(int vet[], int tam){
        for(int i = 0; i < tam - 1; i++)
            if(vet[i] < vet[i+1])
                std::swap(vet[i] , vet[i+1]);
}

void bubble_sort(int vet[], int tam)
{
    for(;tam != 1;tam--)
    {
        bubble(vet, tam);
    }

}

int main(){

    int vet[10] = {3, 7, 4, 1, 8, 89, 45, 23, 3, 2};

    bubble_sort(vet, 10);

    for (int i = 0; i < 10; i++)
        cout << vet[i] << " ";
    return 0;
}
