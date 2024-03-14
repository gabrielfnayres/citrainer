#include "../includes/Pessoa.h"
#include <iostream>

using namespace std;

Pessoa::Pessoa()
{
    int idade = 0;
}

Pessoa::Pessoa(string n, int i)
{
    nomeCompleto = n;
    idade = i;
}

void Pessoa::exibir(){}

void Pessoa::setNomeCompleto(string n)
{
    nomeCompleto = n;
}

void Pessoa::setIdade(int i)
{
    idade = i;
}

string Pessoa::getNomeCompleto()
{
    return nomeCompleto;
}

int Pessoa::getIdade()
{
    return idade;
}
