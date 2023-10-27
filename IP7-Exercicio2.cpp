#include <iostream>

using namespace std;

int main() {
    int numero, numeroOriginal, numeroInvertido = 0, resto;

    cout << "Digite um número inteiro: ";
    cin >> numero;

    numeroOriginal = numero;

    while (numero > 0) {
        resto = numero % 10;
        numeroInvertido = numeroInvertido * 10 + resto;
        numero /= 10;
    }

    if (numeroOriginal == numeroInvertido) {
        cout << numeroOriginal << " é um número palíndromo." << endl;
    } else {
        cout << numeroOriginal << " não é um número palíndromo." << endl;
    }

    return 0;
}

