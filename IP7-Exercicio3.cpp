#include <iostream>

using namespace std;

int main() {
    int numero;

    cout << "Digite um número inteiro: ";
    cin >> numero;

    cout << "Os divisores de " << numero << " são:" << endl;

    for (int i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}
