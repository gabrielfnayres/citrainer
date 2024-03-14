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
      Personal(int trainerID, Aluno aluno[]);
      
      Aluno getAluno();
      
      void setAluno(Aluno aluno);

      void cadastrarAluno();
      void alterarAluno();
      void removerAluno();
      void verAluno();
      void exibir();
      void gerarID();
       void menu();
  };
