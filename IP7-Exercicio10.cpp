#include <iostream>
#include <cmath>
using namespace std;

int contarDigitos(int numero) {
    int contagem = 0;
    while (numero > 0) {
        numero /= 10;
        contagem++;
    }
    return contagem;
}

bool eNumeroArmstrong(int numero) {
    int original = numero;
    int soma = 0;
    int numDigitos = contarDigitos(numero);

    while (numero > 0) {
        int digito = numero % 10;
        soma += pow(digito, numDigitos);
        numero /= 10;
    }

    return (soma == original);
}

int main() {
    int numero;

    cout << "Digite um número inteiro: ";
    cin >> numero;

    if (eNumeroArmstrong(numero)) {
        cout << numero << " é um número de Armstrong." << endl;
    } else {
        cout << numero << " não é um número de Armstrong." << endl;
    }

    return 0;
}
