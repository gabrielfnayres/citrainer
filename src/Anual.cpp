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

void Anual::exibir()
{
  cout << "--------- Planos ----------\n";

    cout << "Valor do plano: R$ " << valorPlano << "\n";
    cout << "Quantidade de Meses: " << quantAnos << "\n";
    cout << "Valor total: R$ " << valorTotal << "\n";

    cout << "---------------------------\n";
}