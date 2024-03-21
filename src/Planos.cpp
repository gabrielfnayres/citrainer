#include "../includes/Planos.h"
#include <iostream>
#include <string>
#include "../includes/Aluno.h"
#include "../includes/Pessoa.h"

using namespace std;

Planos::Planos(){}

void Planos::alterarQuantidadeAnos(int quantAnos){}

void Planos::alterarQuantidadeMeses(int quantMeses){}

void Planos::alterarValor(float valorPlano)
{
    this -> valorPlano = valorPlano;
}
void Planos::calcularValorTotal(){}

void Planos::exibirValorTotal()
{
    cout << "Valor total: " << valorTotal << endl;
}


string Planos::exibir()
{
  return "";

}

void Planos::setValorTotal(float valorTotal)
{
    this -> valorTotal = valorTotal;
}

void Planos::setValorPlano(float valorPlano)
{
    this -> valorPlano = valorPlano;
}

void Planos::setQuantAnos(int quantAnos)
{
    this -> quantAnos = quantAnos;
}

void Planos::setQuantMeses(int quantMeses)
{
    this -> quantMeses = quantMeses;
}

float Planos::getValorTotal()
{
    return valorTotal;
}

float Planos::getValorPlano()
{
    return valorPlano;
}

int Planos::getQuantAnos()
{
    return quantAnos;
}

int Planos::getQuantMeses()
{
    return quantMeses;
}
