#include "../includes/Anual.h"
#include <iostream>
#include <string>
using namespace std;

Anual::Anual(){}

void Anual :: alterarQuantidadeAnos(int quantAnos)
{
  this -> quantAnos = quantAnos;
}

void Anual:: alterarQuantidadeMeses(int quantMeses)
{
  this -> quantMeses = 0;
}

void Anual::calcularValorTotal()
{
valorTotal = valorPlano * quantAnos;
}
