#include <iostream>
#include <stdlib.h>

using namespace std;

// Função inicial da aplicação
int main() {
    // Opção de qual conversão o usuario deseja
    int opcao;
    // Valor que o usuario deseja converter
    int valor;

    // Apresentação e captura de qual a conversão desejada
    cout << "Seja bem vindo a conversao de bases do Liam" << endl;
    cout << "\n1 - Decimal para hexadecimal" << endl;
    cout << "2 - Hexadecimal para decimal \n" << endl;
    cout << "Digite a opcao desejada: " << endl;
    cin >> opcao;

    // Case 1 conversão de decimal para hexadecimal
    if(opcao == 1) {
        cout << "\nDigite o decimal: " << endl;
        scanf("%d", &valor);
        // Retorna o decimal convertido para hexadecimal
        printf("\n%d para hexadecimal eh: %x\n", valor, valor);
    } 
    // Case 2 conversão de hexadecimal para decimal
    else if(opcao == 2) {
        cout << "\nDigite o hexadecimal: " << endl;
        scanf("%x", &valor);
        // Retorna hexadecimal convertido para decimal
        printf("\n%x para decimal eh: %d\n", valor, valor);
    } 
    // Case opção informada seja invalida
    else {
        printf("\nOpcao informada invalida.");
    }

    system("pause");

    return 0;
}