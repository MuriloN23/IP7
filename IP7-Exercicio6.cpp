#include <iostream>
using namespace std;

int main() {
    char continuar;
    
    do {
        int matricula;
        float nota1, nota2, nota3, media;
        
        cout << "Digite a matrícula do aluno: ";
        cin >> matricula;
        
        cout << "Digite a nota 1: ";
        cin >> nota1;
        
        cout << "Digite a nota 2: ";
        cin >> nota2;
        
        cout << "Digite a nota 3: ";
        cin >> nota3;
        
        media = (nota1 + nota2 + nota3) / 3.0;
        
        cout << "MATRICULA NOTA1 NOTA2 NOTA3 MEDIA" << endl;
        cout << "===================================" << endl;
        cout << "   "<< matricula << "     " << nota1 << "     " << nota2 << "     " << nota3 << "    " << media << endl;
        
        cout << "Deseja cadastrar outro aluno? (S/N): ";
        cin >> continuar;
        
    } while (continuar == 'S' || continuar == 's');
    
    return 0;
}
