#include <iostream>
#include <vector>
#include "Aluno.h"
using namespace std;

class Personal
  {
  private:
      vector<Aluno> aluno = vector<Aluno>(10);
  public:
      Personal();
      
      vector<Aluno> getAluno();
      Aluno getAlunoInd(int index);
      void setAluno(Aluno aluno, int index);

      void cadastrarAluno(vector<Aluno> &als);
      void alterarAluno(string nomeAluno, vector<Aluno> &als);
      Aluno buscarAluno(string nomeAluno, vector<Aluno> als);
      void exibirTodosAlunos();
      void removerAluno(string nomeAluno, vector<Aluno> &als);
      void menu();
      string toString();
  };
