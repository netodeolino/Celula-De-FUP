#include <iostream>

using namespace std;

int main()
{
    int dias;
    int total;
    int cont = 0;
    int i = 0;
    cin >> dias;

    while(i < dias){
        if (total < 1000000){
            cont++;
        }
        i++;
        int aux;
        cin >> aux;
        total = aux + total;
    }ope
    cout << cont;


    return 0;
}
