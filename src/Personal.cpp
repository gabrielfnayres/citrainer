#include "../includes/Personal.h"


Personal::Personal(){}

Personal::Personal(Aluno aluno[])
{
  this->aluno = aluno;
}


Aluno Personal::getAluno()
{
  return aluno;
}

void  Personal::setAluno(Aluno aluno)
{
  this->aluno = aluno;
}


void Personal::cadastrarAluno() : Pessoa(string nomeCompleto, int idade)
{
  string n;
  int idade;
  Aluno aluno;
  
}

void Personal::alterarAluno(){}

void Personal::verAluno(){}

void Personal::removerAluno(){}

void Personal::exibir(){}


