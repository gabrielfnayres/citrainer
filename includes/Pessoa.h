#pragma once
#include <iostream>
#include "Endereco.h"
using namespace std;

class Pessoa
{
  public:
    Pessoa();
    Pessoa(string nomeCompleto, int idade, string data, Endereco endereco);
    virtual void exibir() = 0;

    void setNomeCompleto(string n);
    void setIdade(int i);
    void setDataDeNascimento(string d);
    void setEndereco(Endereco e);
    string getNomeCompleto();
    int getIdade();
    string getDataDeNascimento();
    Endereco getEndereco();

  protected:
    string nomeCompleto;
    int idade;
    string dataDeNascimento;
    Endereco endereco;
};
