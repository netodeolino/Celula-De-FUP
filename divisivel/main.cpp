#include <iostream>

using namespace std;

int main(){
    int numero;
    cin >> numero;
    
    int i = 1;

    while(numero >= i){
        /* Se o número não tem resto ele é divisível */
        if(numero % i == 0){
            cout << i << " ";
        }
        i++;
    }
    return 0;
}
