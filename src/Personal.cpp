#include "../includes/Personal.h"


Personal::Personal(){}

Personal::Personal(Aluno aluno[])
{
  this->aluno = aluno;
}


Aluno Personal::getAluno()
{
  return aluno;
}

void  Personal::setAluno(Aluno aluno)
{
  this->aluno = aluno;
}


void Personal::cadastrarAluno() : Pessoa(string nomeCompleto, int idade)
{
  string n;
  int idade;
  Aluno aluno;
  
}

void Personal::alterarAluno(){}

void Personal::verAluno(){}

void Personal::removerAluno(){}

void Personal::exibir(){}

void Personal::menu()
{
  int escolha;
  while(escolha){  
    cout << "-----------------------------" <<endl;

    cout << "   1 - Adicionar aluno    " << endl;
    cout << "   2 - Alterar aluno    " << endl;
    cout << "   3 - Buscar aluno     " << endl; 
    cout << "   3 - Lista de alunos" << endl;
    cout << "   4 - Remover aluno" << endl;
    cout << "   5 - Sair" << endl;

    cout << "----------------------------" << endl;

    cin >> escolha;

    if(escolha == 1)
    {
      
    }
  }


}
