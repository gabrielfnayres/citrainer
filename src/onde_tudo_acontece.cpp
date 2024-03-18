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
    ifstream iFile;
    ofstream oFile;
  
    iFile.open("relatorio_personal.txt");
    

    if(!iFile.is_open())
    {
      cout << "Falha ao gerar relatório!" << "\n"; 
    }
    oFile.open("relatorio.txt");
    

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
            oFile << relatorio << endl;

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
    iFile.close();
    return 0;
}
