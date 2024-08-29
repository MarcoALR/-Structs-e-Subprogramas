//Escreva um programa que utilize um vetor de no máximo 50 alunos, contendo matrícula  e nome,
// que faça a leitura dos dados e os apresente em seguida na tela
// O aluno deve ser  determinado através de um struct e seu nome deve ter no máximo 100 caracteres.

#include <iostream>
using namespace std;

struct Aluno{
    char nome[100];
    int matricula;
};

int main() {
Aluno listaalunos [50];
    for (int i = 0; i < 50; i++) {
        cout << "Escreva o nome do " << i + 1 << "aluno: ";
        fflush(stdin);
        cin.getline(listaalunos[i].nome,size (listaalunos[i].nome));
        cout << "digite a matricula do aluno: ";
        cin >> listaalunos[i].matricula;
    }

    for (int i = 0; i < 502
    ; i++) {
        cout << "O nome do aluno e: " << listaalunos[i].nome << endl;
        cout << "A matricula do aluno e: "<< listaalunos[i].matricula << endl;
        cout << endl;
    }
    return 0;
}
