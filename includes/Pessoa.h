#pragma once
#include <iostream>
#include <string>
#include "Endereco.h"
using namespace std;

class Pessoa
{
  public:
    Pessoa();
    ~Pessoa();
    Pessoa(string nomeCompleto, int idade, string data, Endereco endereco);
    virtual void exibir() = 0;
    string toStringPessoa();

    void setNomeCompleto(string n);
    void setIdade(int i);
    void setDataDeNascimento(string d);
    string getNomeCompleto();
    int getIdade();
    string getDataDeNascimento();

  protected:
    string nomeCompleto;
    int idade;
    string dataDeNascimento;
    Endereco endereco;
};
