#include <iostream>

using namespace std;

void incrementa(int & val){
    val++;
}

int main(){
    int outro = 2;
    incrementa(outro);
    cout << outro << endl;
    return 0;
}
