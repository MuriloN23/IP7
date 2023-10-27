#include <iostream>
using namespace std;

int main() {
    int numero;
    
    cout << "Digite um número inteiro para gerar a sequência de Fibonacci: ";
    cin >> numero;

    int a = 0, b = 1, c;

    cout << "Sequência de Fibonacci até " << numero << ":" << endl;

    if (numero >= 1) {
        cout << a << " ";
    }

    if (numero >= 2) {
        cout << b << " ";
    }

    for (int i = 3; i <= numero; i++) {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }

    cout << endl;

    return 0;
}
