#include "../includes/Planos.h"
#include <iostream>
#include <string>
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

void Planos::exibir(){}