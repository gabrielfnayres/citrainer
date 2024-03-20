#include "../includes/Pessoa.h"

using namespace std;

Pessoa::Pessoa()
{
    int idade = 0;
}

Pessoa::~Pessoa(){}

Pessoa::Pessoa(string n, int i, string d, Endereco e)
{
    nomeCompleto = n;
    idade = i;
    dataDeNascimento = d;
    endereco = e;
}

void Pessoa::exibir(){}

string Pessoa::toStringPessoa()
{
    return "------- Dados Pessoais -------\nNome: " + nomeCompleto + "\nIdade: " + to_string(idade) + "\nData de Nascimento: " + dataDeNascimento + endereco.toStringEndereco();
}

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

void Pessoa:: setDataDeNascimento(string data)
{
    dataDeNascimento=data;
}

string Pessoa:: getDataDeNascimento()
{
    return dataDeNascimento;
}