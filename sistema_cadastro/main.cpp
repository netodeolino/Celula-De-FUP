#include <iostream>
#include <vector>
using namespace std;

struct aluno {
    string nome;
    int idade;
    string curso;
    int matricula;
};

void procurar_aluno(vector <aluno> turma){
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

void imprimir_alunos(vector <aluno> turma){
    for(int i = 0; i < turma.size(); i++){
        cout << turma[i].nome << endl;
    }
}

aluno salvar_aluno(){
    aluno alu;
    cout << "qual teu nome mah?"<< endl;
    cin >> alu.nome;
    cout << "qual a tua idade?"<< endl;
    cin >> alu.idade;
    cout << "qual seu numero de matricula?" << endl;
    cin >> alu.matricula;
    cout << "faz o que da vida na ufc?" << endl;
    cin >> alu.curso;

    return alu;
}

int main()
{
    int numero_pessoas;
    cout <<"quantas pessoas voce quer salvar na lista?" << endl;
    cin >> numero_pessoas;

    vector <aluno> turma;

    for(int i = 0 ; i < numero_pessoas ; i++){
        turma.push_back(salvar_aluno());
    }
    imprimir_alunos(turma);
    procurar_aluno(turma);

    return 0;
}
