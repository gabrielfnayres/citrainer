#include <iostream>
#include "Aluno.h"
using namespace std;

class Personal
  {
  private:
    int trainerID;
    vector<Aluno> aluno(100);
  public:
    Personal();
    Personal(int trainerID, Aluno aluno[]);
    
    int getTrainerID();
    Aluno getAluno();
    
    void setTrainerID(int trainerID);
    void setAluno(Aluno aluno);

    void cadastrarAluno();
    void alterarAluno();
    void verAluno();
    void exibir();
    void gerar();
  };
