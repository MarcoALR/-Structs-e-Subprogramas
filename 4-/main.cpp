#include <iostream>
using namespace std;

double fahrenheitParaCelsius(double fahrenheit) {
    return 5.0 / 9.0 * (fahrenheit - 32);
}

int main() {

    cout << "Fahrenheit\tCelsius\n";
    cout << "------------------------\n";


    for (int fahrenheit = 0; fahrenheit <= 100; ++fahrenheit) {
        double celsius = fahrenheitParaCelsius(fahrenheit);
        cout << fahrenheit << "\t\t" << celsius << "\n";
    }

    return 0;
}