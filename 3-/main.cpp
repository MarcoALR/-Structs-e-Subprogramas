//Supondo que a população de um país "a" seja de 90.000.000 de habitantes,
// com uma  taxa anual de crescimento de 3 porcento,
// e que a população de um país "b" seja,  aproximadamente, de 200.000.000 de habitantes, com uma taxa anual de crescimento de  1,5 porcento.
// Fazer um programa para calcular e mostrar o número de anos necessários  para que a população do país "a" ultrapasse ou seja igual a população do país "b",
// mantidas essas taxas de crescimento.
//O cálculo deve ser realizado por uma função separada que retorna apenas o número de  anos.

#include <iostream>
#include <cmath>

int calcularAnosParaUltrapassar(double popA, double taxaA, double popB, double taxaB) {
    int anos = 0;

    // Converte as taxas percentuais em fatores de crescimento
    double fatorCrescimentoA = 1 + taxaA / 100.0;
    double fatorCrescimentoB = 1 + taxaB / 100.0;

    // Itera ate que a populacao do pais A seja maior ou igual a populacao do pais B
    while (popA < popB) {
        popA *= fatorCrescimentoA;
        popB *= fatorCrescimentoB;
        anos++;
    }

    return anos;
}

int main() {
    double populacaoA = 90000000; // Populacao do pais A
    double taxaCrescimentoA = 3.0; // Taxa de crescimento anual do pais A (em %)
    double populacaoB = 200000000; // Populacao do pais B
    double taxaCrescimentoB = 1.5; // Taxa de crescimento anual do pais B (em %)

    int anosNecessarios = calcularAnosParaUltrapassar(populacaoA, taxaCrescimentoA, populacaoB, taxaCrescimentoB);

    std::cout << "Numero de anos necessarios para a populacao do pais A ultrapassar ou igualar a populacao do pais B: " << anosNecessarios << std::endl;

    return 0;
}