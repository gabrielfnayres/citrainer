#include "../includes/Anual.h"
#include <iostream>
#include "../includes/Aluno.h"
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

float Anual::calcularValorTotal()
{
  return valorTotal = valorPlano * quantAnos;
}

string Anual::exibir()
{
  string str = "------- Plano Anual -------\nValor do plano: R$ " + to_string(valorPlano) + "\n" + "Quantidade de Anos: " + to_string(quantAnos) + "\n" + "Valor total: R$ " + to_string(calcularValorTotal()) + "\n" + "---------------------------\n";
  return str;
}