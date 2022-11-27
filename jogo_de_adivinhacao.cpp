#include <iostream>
using namespace std;

int main() {
    cout << "****************************************************" <<  endl;
    cout << "******    Bem vindo ao jogo de adivinhação    ******" <<  endl;
    cout << "****************************************************" <<  endl;

    const int NUMERO_SECRETO = 42;
    int tentativas = 1;

    bool nao_acertou = true;

    while(nao_acertou) {
        int chute;
        cout << "Tentativa: " << tentativas << endl;
        cout << "Qual o seu chute: ";
        cin >> chute;

        bool acertou = chute == NUMERO_SECRETO;
        bool maior = chute > NUMERO_SECRETO;

        if(acertou) {
            cout << "Parabéns! Você acertou o número secreto." << endl << endl;
            nao_acertou = false;
        }
        else if (maior)
        {
            cout << "O número que você chutou é maior que o número secreto" << endl << endl;
        }
        else {
            cout << "O número que você chutou é menor que o número secreto" << endl << endl;
        }
        tentativas++;
    }
    cout << "Fim de jogo!" << endl;
}