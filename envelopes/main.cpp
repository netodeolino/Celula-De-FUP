#include <iostream>

using namespace std;

int main() {
    int n, menor, x;
    menor = 9999999;
    cin >> n;
    if(n < 1 || n > 1000){
        cin >> n;
    }
    for(int i = 0; i < n; i++){
        cin >> x;
        if(x < menor){
            menor = x;
        }
    }
    cout << menor << endl;
    return 0;
}
