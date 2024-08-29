#include <iostream>
using namespace std;
int idadeEmDias(int anos, int meses, int dias) {
    int diasTotais = anos * 365 + meses * 30 + dias;
    return diasTotais;
}
int main() {
    int anos, meses, dias;
    cout << "Digite a idade em anos: ";
    cin >> anos;
    cout << "Digite a idade em meses: ";
    cin >> meses;
    cout << "Digite a idade em dias: ";
    cin >> dias;
    int totalDias = idadeEmDias(anos, meses, dias);
    cout << "A idade total em dias e: " << totalDias << " dias." << endl;
    return 0;
}