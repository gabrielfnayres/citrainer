#include "../includes/Mensal.h"
#include "../includes/Aluno.h"
#include <iostream>
#include <string>
#include <vector>
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

float Mensal::calcularValorTotal()
{
    return valorTotal = valorPlano * quantMeses;
}

string Mensal::exibir()
{
    string str = "------ Plano Mensal ------\nValor do plano: R$ " + to_string(valorPlano) + "\n" + "Quantidade de Meses: " + to_string(quantMeses) + "\n" + "Valor total: R$ " + to_string(calcularValorTotal()) + "\n" + "--------------------------\n";
    return str;

}