#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    cout << "****************************************************" <<  endl;
    cout << "******    Bem vindo ao jogo de adivinhação    ******" <<  endl;
    cout << "****************************************************" <<  endl;

    cout << "Escolha o seu nível de dificuldade:  " << endl;
    cout << "Fácil (F), Médio (M) ou Difícil (D)" << endl;
    char dificuldade;
    cin >> dificuldade;

    while(dificuldade != 'F' and dificuldade != 'M' and dificuldade != 'D'){
        cout << "Você digitou errado, tente novamente: " << endl;
        cin >> dificuldade;
    }

    int numero_de_tentativas;
    if(dificuldade == 'F') {
        numero_de_tentativas = 15;
    }
    else if(dificuldade == 'M') {
        numero_de_tentativas = 10;
    }
    else{
        numero_de_tentativas = 5;
    }

    srand(time(0));
    const int NUMERO_SECRETO = rand()%100;
    int tentativas = 1;

    double pontos = 1000.0;

    for(tentativas; tentativas <= numero_de_tentativas; tentativas++){
        int chute;
        cout << "Tentativa: " << tentativas << endl;
        cout << "Qual o seu chute: ";
        cin >> chute;

        bool acertou = chute == NUMERO_SECRETO;
        bool maior = chute > NUMERO_SECRETO;

        if(acertou) {
            cout << "Parabéns! Você acertou o número secreto." << endl;
            cout.precision(2);
            cout << fixed;
            cout << "Sua pontução foi de: " << pontos << endl;
            break;
        }
        else if (maior)
        {
            cout << "O número que você chutou é maior que o número secreto" << endl << endl;
        }
        else {
            cout << "O número que você chutou é menor que o número secreto" << endl << endl;
        }
        pontos = pontos - abs(chute - NUMERO_SECRETO)/2.0;
    }
    if(tentativas > numero_de_tentativas){
        cout << "você perdeu! Tente novamente" << endl;
    }
    cout << "Fim de jogo!" << endl;
}