#include "../includes/Personal.h"


Personal::Personal(){}

Personal::Personal(int trainerID, Aluno aluno[])
{
  this->trainerID = trainerID;
  this->aluno = aluno;
}

int Personal::getTrainerID()
{
  return trainerID;
}

Aluno Personal::getAluno()
{
  return aluno;
}

void  Personal::setAluno(Aluno aluno)
{
  this->aluno = aluno;
}

void Personal::setTrainerID(int trainerID)
{
  this->trainerID = trainerID;
}

void Personal::cadastrarAluno()
{
  
}

void Personal::alterarAluno(){}

void Personal::verAluno(){}

void Personal::removerAluno(){}

void Personal::exibir(){}


