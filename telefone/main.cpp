#include <iostream>

using namespace std;

/* Função que pega uma letra e transfoma-a em um número */
char converter_letra(char caractere){
    if(caractere < 'D'){
        return '2';
    }else if(caractere < 'G' ){
        return '3';
    }else if(caractere < 'J'){
        return '4';
    }else if(caractere < 'M'){
        return '5';
    }else if(caractere < 'P'){
        return'6';
    }else if(caractere < 'T'){
        return '7';
    }else if(caractere < 'W'){
        return '8';
    }else if(caractere <= 'Z')
        return '9';
    else
        return'-';
}

int main(){
	/* Lê o que foi digitado pelo usuário */
    string numero_digitado;
    cin >> numero_digitado;
    
    for(int i = 0; i < numero_digitado.size() ; i++){
		/* Verifica se é uma letra, caso sim a converte em número */
        if(numero_digitado[i] >= 'A' && numero_digitado[i] <= 'Z'){
            cout << converter_letra(numero_digitado[i]);
        }else
			/* Se não é letra só imprime normalmente */
            cout << numero_digitado[i];
    }
    return 0;
}
