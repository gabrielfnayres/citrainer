#include <iostream>
#include <fstream>
#include <iterator>
#include <string>
#include "../includes/Aluno.h"
#include "../includes/Personal.h"
using namespace std;


bool verificarSeAlunoExiste(fstream& arquivo, int id)
{
    string li;
    while(getline(arquivo, li))
    {
        if(li.find("ID: " + to_string(id)) != string::npos)
        {
            return true;
        }
    }
    return false;
}


int main()
{
    int cargo;
    fstream arquivo;
    Personal personal1;

    arquivo.open("relatorio_personal.txt", ios::in | ios::out | ios::app);


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
            
            personal1.menu();
            string relatorio = personal1.toString();
            arquivo << relatorio << endl;

        }

        else if (cargo == 2)
        {
            int id;

            cout << "Qual seu ID de aluno?" << endl;
            cin >> id;

            if(verificarSeAlunoExiste(arquivo, id))
            {
                cout << "Aluno não encontrado" << endl; 
            }
            else
            {
                Aluno aluno = personal1.getAlunoInd(id);
                aluno.menu();
                string relatorio = aluno.toStringAluno();
                arquivo << relatorio << endl;   
            }
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

    arquivo.open("relatorio_personal.txt", ios::in | ios::out | ios::app);
    if(!arquivo.is_open())
    {
        cout << "Erro ao abrir o arquivo" << endl;
        return 1;
    }
    
    arquivo << personal1.toString();


    return 0;
}
