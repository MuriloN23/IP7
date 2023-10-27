#include <iostream>
using namespace std;

void imprimirPadraoA(int altura) {
    for (int i = 1; i <= altura; i++) {
        for (int j = 1; j <= altura; j++) {
            cout << "*   ";
        }
        cout << endl;
    }
}

void imprimirPadraoB(int altura) {
    for (int i = 1; i <= altura; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*   ";
        }
        cout << endl;
    }
}

void imprimirPadraoC(int altura) {
    for (int i = 1; i <= altura; i++) {
        for (int j = 1; j <= altura; j++) {
            if (i == 1 || i == altura || j == 1 || j == altura) {
                cout << "*   ";
            } else {
                cout << "    ";
            }
        }
        cout << endl;
    }
}

int main() {
    int altura;

    cout << "Digite a altura do padrão: ";
    cin >> altura;

    // Padrão a
    cout << "a." << endl;
    imprimirPadraoA(altura);

    cout << endl;

    // Padrão b
    cout << "b." << endl;
    imprimirPadraoB(altura);

    cout << endl;

    // Padrão c
    cout << "c." << endl;
    imprimirPadraoC(altura);

    return 0;
}
