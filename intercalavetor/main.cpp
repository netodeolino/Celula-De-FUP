#include <iostream>

using namespace std;

int main()
{
    int vet1[5] = {1, 2, 3, 4, 5};
    int vet2[5] = {6, 7, 8, 9, 10};

    int vetnovo[10];

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 10; j++){
            vetnovo[j] = vet1[i];
            vetnovo[j+1] = vet2[i];
        }
    }

    for(int k = 0; k < 10; k++){
        cout << vetnovo[k] << endl;
    }

    return 0;
}
