#include <iostream>
#include <stdlib.h>

using namespace std;

/* Função inicial da aplicação */
int main()
{
    bool repeat = true;

    cout << "Seja bem vindo a conversao de bases do Liam" << endl;

    while (repeat)
    {
        /* Opção de qual conversão o usuario deseja */
        int opcao;
        /* Valor que o usuario deseja converter */
        int valor;

        /* Captura de qual a conversão desejada */
        cout << "\n1 - Decimal para hexadecimal" << endl;
        cout << "2 - Hexadecimal para decimal \n" << endl;
        cout << "Digite a opcao desejada: " << endl;
        cin >> opcao;

        /* Case 1 conversão de decimal para hexadecimal */
        if (opcao == 1)
        {
            cout << "\nDigite o decimal: " << endl;
            scanf("%d", &valor);
            /* Retorna o decimal convertido para hexadecimal */
            printf("\n%d para hexadecimal eh: %x\n", valor, valor);
        }
        /* Case 2 conversão de hexadecimal para decimal */
        else if (opcao == 2)
        {
            cout << "\nDigite o hexadecimal: " << endl;
            scanf("%x", &valor);
            /* Retorna hexadecimal convertido para decimal */
            printf("\n%x para decimal eh: %d\n", valor, valor);
        }
        /* Case opção informada seja invalida */
        else
        {
            printf("\nOpcao informada invalida.");
        }

        char doRepeat;
        cout << "\nDeseja repetir o process? Digite 's' para sim ou 'n' para nao...\n";
        cin >> doRepeat;

        if (doRepeat == 'n')
        {
            repeat = false;
        }
    }

    cout << "\nObrigado por usar minha calculadora!!\n";
    system("pause");

    return 0;
}