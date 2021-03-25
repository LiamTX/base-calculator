#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    int opcao;
    int valor;

    cout << "Seja bem vindo a conversao de bases do Liam" << endl;
    cout << "\n1 - Decimal para hexadecimal" << endl;
    cout << "2 - Hexadecimal para decimal \n" << endl;
    cout << "Digite a opcao desejada: " << endl;
    cin >> opcao;

    if(opcao == 1) {
        cout << "\nDigite o decimal: " << endl;
        scanf("%d", &valor);
        printf("\n%d para hexadecimal eh: %x\n", valor, valor);
    } else if(opcao == 2) {
        cout << "\nDigite o hexadecimal: " << endl;
        scanf("%x", &valor);
        printf("\n%x para decimal eh: %d\n", valor, valor);
    } else {
        printf("\nOpcao informada invalida.");
    }

    system("pause");

    return 0;
}