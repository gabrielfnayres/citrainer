#include <iostream>
#include <vector>
#include "Aluno.h"
using namespace std;

class Personal
  {
  private:
      vector<Aluno> aluno = vector<Aluno>(15);

  public:
      Personal();
      
      vector<Aluno> getAluno();
      Aluno getAlunoInd(int index);
      void setAluno(Aluno aluno, int index);

      void cadastrarAluno();
      void alterarAluno();
      Aluno buscarAluno(string nomeAluno, vector<Aluno> als);
      void exibirTodosAlunos();
      void removerAluno(string nomeAluno, vector<Aluno> als);
      void exibir();
      void gerarID();
      void menu();
  };
