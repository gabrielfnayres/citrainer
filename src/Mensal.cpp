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

string Mensal::exibir()
{
    string str = "------ Plano Mensal ------\nValor do plano: R$ " + to_string(valorPlano) + "\n" + "Quantidade de Meses: " + to_string(quantMeses) + "\n" + "Valor total: R$ " + to_string(valorTotal) + "\n" + "--------------------------\n";
    return str;
}