#pragma once
#include <iostream>
using namespace std;

class Pessoa
{
  public:
    Pessoa();
    Pessoa(string nomeCompleto, int i, string data);
    virtual void exibir() = 0;

    void setNomeCompleto(string n);
    void setIdade(int i);
    string getNomeCompleto();
    int getIdade();
    void setDataDeNascimento(string data);
    string getDataDeNascimento();

  protected:
    string nomeCompleto;
    int idade;
    string dataDeNascimento;
};
