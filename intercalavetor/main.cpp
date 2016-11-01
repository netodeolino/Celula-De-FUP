#include <iostream>

using namespace std;

int main(){
	int vet1[5] = {1, 2, 3, 4, 5};
	int vet2[5] = {6, 7, 8, 9, 10};
	
	int vettotal[10];
	
	int cont = 0;
	for (int i = 0; i < 10; i+=2){
		vettotal[i] = vet1[cont];
		vettotal[i+1] = vet2[cont];
		cont++;
	}
	
	for (int i = 0; i < 10; i++){
		cout << vettotal[i] << " ";
	}
	return 0;
}
