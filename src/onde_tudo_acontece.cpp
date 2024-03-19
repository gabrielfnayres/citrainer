#include <iostream>
#include <fstream>
#include <iterator>
#include <string>
#include "../includes/Aluno.h"
#include "../includes/Personal.h"
using namespace std;


int main()
{
    int cargo;
    fstream arquivo;

    arquivo.open("relatorio_personal.txt", ios::out);


    if(!arquivo.is_open())
    {
        cout << "Erro ao abrir o arquivo" << endl;
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
            arquivo.open("relatorio_personal.txt", ios::in);
            string linha;
            while(getline(arquivo, linha))
            {
                cout << linha << endl;
            }
            break;
        }

        else
        {
            cout << "Opção inválida. Insira uma opção válida:" << endl;
        }
    }
    cout << "------------------------------ Obrigado por usar o CI Trainer --------------------------------" << endl;
    
    return 0;
}
