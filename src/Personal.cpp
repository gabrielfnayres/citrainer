#include "../includes/Personal.h"


Personal::Personal()
{

}

vector<Aluno> Personal::getAluno()
{
  return aluno;
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
