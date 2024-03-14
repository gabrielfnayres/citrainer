#include <iostream>
#include <vector>
#include "Aluno.h"
using namespace std;

class Personal
  {
  private:
      vector<Aluno> aluno = vector<Aluno>(100);

  public:
      Personal();
      
      vector<Aluno> getAluno();
      void setAluno(Aluno aluno, int index);

      void cadastrarAluno();
      void alterarAluno();
      void removerAluno();
      void verAluno();
      void exibir();
      void gerarID();
      void menu();
  };
