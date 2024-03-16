#pragma once
#include <iostream>
#include <string>
using namespace std;


class Endereco{
protected:
  string bairro;
  string cidade;
  string CEP;
  string rua;
  int numero;

public:
  Endereco();
  Endereco(string bairro, string cidade, string CEP, string rua, int numero);
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
