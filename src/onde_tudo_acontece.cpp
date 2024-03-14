#include <iostream>
#include "../includes/Aluno.h"
#include "../includes/Personal.h"
using namespace std;

int main()
{
    int cargo;

    cout << "------------------------------ Bem-vindo ao CI Trainer ------------------------------" << endl;
    cout << "Você é aluno ou personal? (1 - Personal | 2 - Aluno)" << endl;
    cin >> cargo;

    while(1)
    {
        if (cargo == 1)
        {
            Personal personal;
            personal.menu();

            break;
        }
        else if (cargo == 2)
        {
            Aluno aluno;
            aluno.menu();

            break;
        }
        else
        {
            cout << "Opção inválida!" << endl;
        }
    }
}
