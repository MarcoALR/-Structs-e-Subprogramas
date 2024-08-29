//Construir um programa que na função main leia 3 valores informados pelo usuário  OK!!!
// e  utilize uma função para retornar o maior deles.
// Em seguida, a função main deve  imprimir o resultado.

#include <iostream>

using namespace std;

int Valores (int v1, int v2, int v3) {
    int maior = v1;

    if (maior < v2) {
        maior = v2;
    } else if (maior < v3) {
        maior = v3;
    }
    return maior;
}

void imprimirmaior(int Imprimir) {
    cout << "Valor Maior e: " << Imprimir << endl;
}

int main() {
    int v1, v2, v3;
    cout << "informe um valor: " << endl;
    cin >> v1;
    cout << "informe o segundo valor: " << endl;
    cin >> v2;
    cout << "informe o terceiro valor: " << endl;
    cin >> v3;

    int Imprimir = (v1, v2, v3);

    imprimirmaior(Imprimir);

    return 0;
}
