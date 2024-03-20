#pragma once
#include <iostream>
#include <vector>
#include "Aluno.h"

using namespace std;

class Personal
{
  public:
      Personal();
      ~Personal();
      vector<Aluno> aluno = vector<Aluno>(10);
      Aluno  getAlunoIndPersonal(int index);
      void setAlunoPersonal(Aluno aluno, int index);

      /*void cadastrarAluno(vector<Aluno> &als);
      void alterarAluno(string nomeAluno, vector<Aluno> &als);
      Aluno buscarAluno(string nomeAluno, vector<Aluno> als);
      void exibirTodosAlunos();
      void removerAluno(string nomeAluno, vector<Aluno> &als);

      void menuPersonal(Gerenciamento* crud);*/
      string toStringPersonal();
  };
