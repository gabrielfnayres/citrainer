#include "../includes/Personal.h"
#include <iterator>
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
  Aluno al;
  cout << "Informe o nome do aluno: " << "\n";
  cin >> n;
  cout << "Informe a idade do aluno: " << "\n";
  cin >> idade;
  al.setNomeCompleto(n);
  al.setIdade(idade);
  aluno.push_back(al);
}

void Personal::alterarAluno(){}

Aluno Personal::buscarAluno(string nomeAluno, vector<Aluno> als)
{
  string resp;
  Aluno exibido;
  for(Aluno al : als)
  {
    if((al.getNomeCompleto()) == nomeAluno)
    {
      exibido = al;
      break;
    }
  }
  
  return exibido;
}

void Personal::exibirTodosAlunos()
{
  for(Aluno a : aluno)
  {
    a.exibir();
    cout << "\n";
  }
}


void Personal::removerAluno(string nomeAluno, vector<Aluno> als)
{
  vector<Aluno>::iterator a;
  Aluno temp;
  int ind = 0;
  for(Aluno al : als)
  {
    if(al.getNomeCompleto() == nomeAluno)
    {
      temp = al;
      break;
    }
    ind++;
  }

  for(a = als.begin(); a != als.end(); a++)
  {
    if(a->getNomeCompleto() == temp.getNomeCompleto())
    {
      als.erase(a);
    }
  }
}

void Personal::exibir()
{

}

void Personal::menu()
{
  int escolha;
  while(1){  
    cout << "----------------------------" <<endl;

    cout << "   1 - Adicionar aluno    " << endl;
    cout << "   2 - Alterar aluno    " << endl;
    cout << "   3 - Buscar aluno     " << endl; 
    cout << "   3 - Lista de alunos" << endl;
    cout << "   4 - Remover aluno" << endl;
    cout << "   5 - Sair" << endl;

    cout << "---------------------------" << endl;
    cin >> escolha;
    cin.ignore();
    
    if(escolha == 1)
    {
      cadastrarAluno();
    }
    else if(escolha == 3)
    {
      cout << "Informe o nome do aluno: " << "\n";
      string busca;
      getline(cin, busca);
      Aluno busc = buscarAluno(busca, aluno);
      cout << busc.getNomeCompleto() << " encontrado!" << "\n";
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
      removerAluno(remo, aluno);
      cout << "Aluno " << remo <<  " removido com sucesso!" << "\n";
      exibirTodosAlunos();
    }

    else if(escolha == 5)
    {
      break;
    }

    else
    {
      cout << "Opção inválida. Insira uma opção válida." << endl;
    }
  }
}
