#include <iostream>

using namespace std;

string title(string F){

    for(int i = 0 ; i < F.size() ; i++){
        if(F[0] >= 'a' && F[0] <= 'z' ){
           F[0] = F[0] - 32;
        }
        if(F[i] == ' ' && F[i+1] >= 'a' && F[i+1] <= 'z'){
            F[i+1] -= 32;
        }
        if(F[i-1] != ' ' && F[i] >= 'A' && F[i] <='Z'){
            F[i] += 32;
        }

    }
    return F;

}

int main(){
    string F;

    getline(cin, F);

    cout<<title(F)<<"\n";
    return 0;
}
