#include <iostream>

using namespace std;

bool exist(int vet[], int tam, int valor){
    for(int i = 0; i < tam; i++){
        if(vet[i] == valor)
            return true;
    }
    return false;
}

int count(int vet[], int tam, int valor){
    int cont = 0;
    for(int i = 0; i < tam; i++){
        if(vet[i] == valor){
            cont++;
        }
    }
    return cont;
}

int find(int vet[], int inicio, int fim, int valor){
    for(int i = inicio; i < fim; i++){
        if(vet[i] == valor){
            return i;
        }
    }
    return -1;
}

/* Retorna o maior valor */
int max(int vet[], int tam){
    int max = vet[0];
    for(int i = 0; i < tam; i++){
        if(vet[i] > max){
            max = vet[i];
        }
    }
    return max;
}

int main(){
    //int vet[5] = {3, 7, 20, 9, 2};
    //cout << exist(vet, 5, 20) << endl;

    //int vet[5] = {1, 1, 2, 3, 4};
    //cout << count(vet, 5, 1) << endl;

    //int vet[3] = {2, 3, 4};
    //cout << find(vet, 0, 3, 4) << endl;

    //int vet[5] = {1, 2, 3, 4, 5};
    //cout << max(vet, 5) << endl;

    return 0;
}
