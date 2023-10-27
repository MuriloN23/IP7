#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    
    srand(time(0));

    int numeroSecreto = (rand() % 100) + 1;
    int palpite;
    int tentativas = 0;

    cout << "Bem-vindo ao Jogo de Adivinhação!" << endl;

    while (true) {
        cout << "Tente adivinhar o número (entre 1 e 100): ";
        cin >> palpite;
        tentativas++;

        if (palpite < numeroSecreto) {
            cout << "Tente um número maior." << endl;
        } else if (palpite > numeroSecreto) {
            cout << "Tente um número menor." << endl;
        } else {
            cout << "Parabéns! Você acertou o número em " << tentativas << " tentativas." << endl;
            break;
        }
    }

    return 0;
}
