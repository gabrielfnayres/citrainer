#pragma once
#include <iostream>
#include <string>
#include "Pessoa.h"
using namespace std;

class Endereco
{
  protected:
    string rua;
    string bairro;
    string cidade;
    string CEP;
    int numero;

  public:
    Endereco();
    ~Endereco();
    Endereco(string b, string c, string r, string cep, int n);
    string toStringEndereco();
    void exibirEndereco();

    void setBairro(string b);
    void setCidade(string c);
    void setCep(string cep);
    void setRua(string r);
    void setNumero(int n);
    string getBairro();
    string getCidade();
    string getCep();
    string getRua();
    int getNumero();
};
