#pragma once
#include <iostream>
using namespace std;

class Pessoa
{
  public:
    Pessoa();
    Pessoa(string nomeCompleto, int i);
    virtual void exibir() = 0;

    void setNomeCompleto(string n);
    void setIdade(int i);
    string getNomeCompleto();
    int getIdade();

  protected:
    string nomeCompleto;
    int idade;
};
