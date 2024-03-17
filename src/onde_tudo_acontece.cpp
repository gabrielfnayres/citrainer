#include <iostream>
#include <fstream>
#include <string>
#include "../includes/Aluno.h"
#include "../includes/Personal.h"
using namespace std;

int main()
{
    int cargo;
    ofstream arquivo("relatorio_personal.txt");
    if(!arquivo.is_open())
    {
      cout << "Falha ao gerar relatório!" << "\n"; 
    }


    cout << "------------------------------ Bem-vindo ao CI Trainer ------------------------------" << endl;

    while(1)
    {
        cout << "Você é Personal ou Aluno? (1 - Personal | 2 - Aluno | 3 - Sair)" << endl;
        cin >> cargo;

        if (cargo ==  1)
        {
            Personal personal;
            personal.menu();
            string relatorio = personal.toString();
            arquivo << relatorio << endl;

        }

        else if (cargo == 2)
        {
            Personal personal;
            int id;

            cout << "Qual seu ID de aluno?" << endl;
            cin >> id;

            Aluno aluno = personal.getAlunoInd(id);
            aluno.menu();
        }

        else if(cargo == 3)
        {
            break;
        }

        else
        {
            cout << "Opção inválida. Insira uma opção válida:" << endl;
        }
    }

    cout << "------------------------------ Obrigado por usar o CI Trainer --------------------------------" << endl;
    arquivo.close();
    return 0;
}
