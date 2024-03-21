#include "../includes/Mensal.h"
#include <iostream>
#include <string>
using namespace std;

Mensal::Mensal(){}

void Mensal::alterarQuantidadeAnos(int quantAnos)
{
    quantAnos = 0;
}

void Mensal:: alterarQuantidadeMeses(int quantMeses)
{
    this -> quantMeses = quantMeses;
}

void Mensal::calcularValorTotal()
{
    valorTotal = valorPlano * quantMeses;
}
