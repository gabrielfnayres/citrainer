#pragma once
#include <iostream>
#include <string>
using namespace std;

class Endereco
{
  protected:
    string bairro;
    string cidade;
    string CEP;
    string rua;
    int numero;

  public:
    Endereco();
    Endereco(string b, string c, string r, string cep, int n);
    string toString();
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
    void exibirEndereco();
};
