#include <iostream>
#include <vector>
using namespace std;

struct negada{
    string nome;
    int idade;
    string curso;
    int matricula;
};


void procurar_aluno(vector <negada> turma){
    int matricula_procurada;
    cout << "digite o numero de matricula" << endl;
    cin >> matricula_procurada;
    for(int i = 0 ; i < turma.size(); i++){
        if(turma[i].matricula == matricula_procurada){
            cout << turma[i].nome <<endl;
            cout << turma[i].idade <<endl;
            cout << turma[i].matricula <<endl;
            cout << turma[i].curso <<endl;
        }
    }
}

void imprimir_negada(vector <negada> turma){
    for(int i = 0; i < turma.size(); i++){
        cout << turma[i].nome << endl;
    }
}

negada salvar_negada(){
    negada aluno;
    cout << "qual teu nome mah?"<< endl;
    cin >> aluno.nome;
    cout << "qual a tua idade?"<< endl;
    cin >> aluno.idade;
    cout << "qual seu numero de matricula?" << endl;
    cin >> aluno.matricula;
    cout << "faz o que da vida na ufc?" << endl;
    cin >> aluno.curso;

    return aluno;
}

int main()
{
    int numero_pessoas = 0;
    cout <<"quantas pessoas voce quer salvar na lista?" << endl;
    cin >> numero_pessoas;

    vector <negada> turma;

    for(int i = 0 ; i < numero_pessoas ; i++){
        turma.push_back(salvar_negada());
    }
    imprimir_negada(turma);
    procurar_aluno(turma);

    return 0;
}
