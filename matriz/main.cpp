#include <iostream>

using namespace std;

const int lin = 4;
const int col = 4;

void zerar(int mat[lin][col]){
    for(int l = 0; l < lin; l++){
        for(int c = 0; c < col; c++){
            if(c == 2){
                mat[l][c] = 1;
            }else{
                mat[l][c] = 0;
            }
        }
    }
}

void imprimir(int mat[lin][col]){
    for(int l = 0; l < lin; l++){
        for(int c = 0; c < col; c++){
            cout << mat[l][c] << " ";
        }
    }
}

int soma(int mat[lin][col]){
    int soma = 0;
    for(int l = 0; l < lin; l++){
        for(int c = 0; c < col; c++){
            soma += mat[l][c];
        }
    }
    return soma;
}

int main(){
    int matriz[lin][col];
    zerar(matriz);
    imprimir(matriz);

    cout << endl;

    cout << soma(matriz) << endl;

    cout << endl;
    return 0;
}
