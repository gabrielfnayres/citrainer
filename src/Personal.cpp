#include "../includes/Personal.h"

Personal::Personal(){}

vector<Aluno> Personal::getAluno()
{
  return aluno;
}

Aluno Personal::getAlunoInd(int index)
{
  return aluno[index-1];
}

void  Personal::setAluno(Aluno aluno, int index)
{
  this->aluno[index] = aluno;
}

void Personal::cadastrarAluno()
{
  string n;
  int idade;
  Aluno aluno;
  cout << "Informe o nome do aluno: " << "\n";
  cin >> n;
  cout << "Informe a idade do aluno: " << "\n";
  aluno.setNomeCompleto(n);
  aluno.setIdade(idade);
}

void Personal::alterarAluno(){}

void Personal::buscarAluno(string nomeAluno){}

void Personal::verAluno(){}

void Personal::removerAluno(){}

void Personal::exibir(){}

void Personal::menu()
{
  int escolha;
  while(1){  
    cout << "-----------------------------" <<endl;

    cout << "   1 - Adicionar aluno    " << endl;
    cout << "   2 - Alterar aluno    " << endl;
    cout << "   3 - Buscar aluno     " << endl; 
    cout << "   3 - Lista de alunos" << endl;
    cout << "   4 - Remover aluno" << endl;
    cout << "   5 - Sair" << endl;

    cout << "----------------------------" << endl;
    cin >> escolha;
    cin.ignore();
    
    if(escolha == 1)
    {
      alterarAluno();
      
    }
    else if(escolha == 3)
    {
      cout << "Informe o nome do aluno: " << "\n";
      string busca;
      getline(cin, busca);
      buscarAluno(busca);
      
    }
    else if(escolha == 2)
    {
      cout << "O que deseja alterar ?" << "\n";
      cout << "1 - Nome" << "\n";
      cout << "2 - Idade" << "\n";
      cout << "3 - Treino" << "\n";
      
    }
    else if(escolha == 4)
    {
      string remo;

      cout <<"Informe o aluno que deseja remover: " << "\n";
      getline(cin, remo);
      
    }

    else if(escolha == 5)
    {
      break;
    }
  }
}