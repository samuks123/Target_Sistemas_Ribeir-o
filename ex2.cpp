#include <iostream>
#include <string>

using namespace std;

int main() {
    string inputString;
    int countA = 0; // Contador para a letra 'a'

    // Entrada do usuário
    cout << "Digite uma string: ";
    getline(cin, inputString);

    // Verifica a existência e conta a quantidade de 'a' e 'A'
    for (char c : inputString) {
        if (c == 'a' || c == 'A') {
            countA++; // Incrementa o contador
        }
    }

    // Verifica e imprime os resultados
    if (countA > 0) {
        cout << "A letra 'a' (maiúscula ou minúscula) foi encontrada " << countA << " vez(es) na string." << endl;
    } else {
        cout << "A letra 'a' não foi encontrada na string." << endl;
    }

    return 0;
}