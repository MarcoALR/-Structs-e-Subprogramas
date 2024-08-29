#include <iostream>
#include <string>

using namespace std;

double calcularPesoIdeal(double altura, char sexo) {
    double pesoIdeal;
    if (sexo == 'M' || sexo == 'm') {
        pesoIdeal = 72.7 * altura - 58;
    } else if (sexo == 'F' || sexo == 'f') {

        pesoIdeal = 62.1 * altura - 44.7;
    } else {
        // Sexo invalido
        cout << "Sexo invalido. Use 'M' para masculino ou 'F' para feminino." << endl;
        return -1;
    }
2
    return pesoIdeal;
}

int main() {
    double altura;
    char sexo;


    cout << "Digite a altura (em metros): ";
    cin >> altura;
    cout << "Digite o sexo (M para masculino, F para feminino): ";
    cin >> sexo;


    double pesoIdeal = calcularPesoIdeal(altura, sexo);

    if (pesoIdeal != -1) {
        cout << "O peso ideal para a altura de " << altura << " metros e sexo "
             << (sexo == 'M' || sexo == 'm' ? "masculino" : "feminino") << " e: "
             << pesoIdeal << " kg." << endl;
    }

    return 0;
}