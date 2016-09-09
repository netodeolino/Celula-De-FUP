#include <ctime>
#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

/*
 * JOGO DE CARTAS SEM DIFERENCIAR OS NIPES
*/

/*
 * É definido o numero máximo de cartas na mao do jodagor,
 * o jogador e a máquina para ajuda a diferenciar as jogadas no jogo
*/
const int N_CARTAS = 9;
const int JOGADOR = 0;
const int MAQUINA = 1; // Ou outro jogador

/*
 * Sorteia uma 1 entre as 13 diferentes do baralho
*/
string sortearCarta(vector<string> cartas){
    int num = rand()%13;
    return cartas[num];
}

/*
 * Dentre as 13 cartas existentes é pegado 9 aleatoriamente,
 * depois é adicionado a um vector e retornado
*/
vector<string> pegarCartas(vector<string> cartas){
    vector<string> cart;
    for(int i = 0; i < N_CARTAS; i++){
        cart.push_back(sortearCarta(cartas));
    }
    return cart;
}

/*
 * Função simples somente para imprimir na tela as cartas
 * que estao em mãos em um determinado momento do jogo
*/
void imprimeMao(vector<string> cartasMao){
    cout << "Suas cartas são: ";
    for(int i = 0; i < N_CARTAS; i++){
        cout << cartasMao[i] << " ";
    }
    cout << endl;
}

/*
 * Nesta função sorteamos uma carta aleatória simulando "puxar uma carta",
 * depois de mostrar ao usuário perguntamos ao mesmo se deseja pegar a carta
 * ou descartar, caso queira pegar ele escolhe uma das que estão em mãos
 * para saírem e a nova é incluída, caso contrário só retornamos as antigas
 * cartas que já estava em mãos
*/
vector<string> puxarUmaCarta(vector<string> cartas, vector<string> cartasMao){
    int opcao, cartaParaTirar;

    string cartaPuxada = sortearCarta(cartas);
    vector<string> novo {cartaPuxada};

    cout << "A carta puxada é: " << cartaPuxada << endl;
    cout << "Deseja ficar com a carta? 1-SIM, 2-NÃO" << endl;
    cin >> opcao;

    if(opcao == 1){
        cout << "Digite a posição da carta que deseja tirar da Mão" << endl;
        cin >> cartaParaTirar;

        /* Funçao que faz a troca entre a carta escolha da mao para sair
         * com a carta puxada */
        iter_swap(cartasMao.begin()+cartaParaTirar-1, novo.begin());

        return cartasMao;
    }
    return cartasMao;
}

int main(){
    srand(time(NULL));

    /* Vetor com todas as cartas do jogo */
    vector<string> cartas {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};

    /* Vetor com as cartas que 1 jogador tem em mãos */
    vector<string> minha = pegarCartas(cartas);

    imprimeMao(minha);

    /* Puxa uma carta e atualiza ou não as cartas que estão em mãos */
    minha = puxarUmaCarta(cartas, minha);

    imprimeMao(minha);

    return 0;
}
