#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

string pegar_nome(int carta){
    if(carta == 1)
        return "A";
    if(carta > 1 && carta < 11)
        return std::to_string(carta);
    if(carta == 11)
        return "J";
    if(carta == 12)
        return "Q";
    if(carta == 13)
        return "K";
    return "erro";
}

int pegar_valor(int carta){
    if(carta == 1)
        return 11;
    if(carta > 1 && carta < 11)
        return carta;
    return 10;
}

int valor_mao(vector <int> mao){
    int total = 0;
    int num_as = 0;
    for(int i = 0; i < mao.size(); i++){
        total = total + mao[i];
        if(mao[i] == 1)
            num_as = +1;
    }

    while(total > 21 && num_as > 0){
        total = total - 10;
        num_as --;
    }
    return total;
}

int sortear_carta(){
    int num = rand() % 13 + 1;
    return num;
}

void mostrar_maos(vector<int> mao){
    int carta;
    for(int i = 0; i < mao.size(); i++){
        carta = mao[i];
        cout << "CARTA: " << carta << " NOME: " << pegar_nome(carta) << " VALOR: " << pegar_valor(carta) << endl;
    }
}

int main(){
    srand(time(NULL));

    int opcao;

    vector<int> mao_mesa;
    vector<int> mao_jogador;

    int carta = sortear_carta();
    int valor = pegar_valor(carta);
    mao_mesa.push_back(valor);

    mao_jogador.push_back(pegar_valor(sortear_carta()));
    mao_jogador.push_back(pegar_valor(sortear_carta()));

    bool parar = false;
    while(parar == false){
        cout << "MÃOS JOGADOR " << endl;
        mostrar_maos(mao_jogador);

        cout << "Pedir = 1, Parar = 2" << endl;
        cin >> opcao;

        if(opcao == 1){
            mao_jogador.push_back(pegar_valor(sortear_carta()));
        }else{
            parar = true;
        }

        if(valor_mao(mao_jogador) > 21){
            cout << "MESA GANHOU" << endl;
            exit(0);
        }
    }

    while(valor_mao(mao_mesa) < valor_mao(mao_jogador)){
        mao_mesa.push_back(pegar_valor(sortear_carta()));
        cout << "MÃOS MESA" << endl;
        mostrar_maos(mao_mesa);
    }

    if(valor_mao(mao_mesa) <= 21){
        cout << "MESA GANHOU" << endl;
    }else{
        cout << "JOGADOR GANHOU" << endl;
    }
    return 0;
}
