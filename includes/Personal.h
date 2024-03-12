#include <iostream>
#include "Aluno.h"
using namespace std;

class Personal
  {
  private:
    int trainerID;
    Aluno aluno[100];
  public:
    void cadastrarAluno();
    void alterarAluno();
    void verAluno();
    void exibir();
    void gerar();
  };
