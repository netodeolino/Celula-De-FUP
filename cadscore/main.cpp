#include <iostream>

using namespace std;

int main()
{
    int P, N, aux;
    cin >> P;
    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> aux;
        P += aux;
        if(P > 100){
            P = 100;
        }
        if(P < 0){
            P = 0;
        }
    }
    cout << P << endl;
    return 0;
}
