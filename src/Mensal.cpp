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

void Mensal::calcularValorTotal()
{
    valorTotal = valorPlano * quantMeses;
}

void Mensal::exibir(vector<Aluno> als)
{
    vector<Aluno>::iterator it;
    for(it != als.begin(); it != als.end(); it++){
        cout << "--------- Planos ----------\n";

        cout << "Valor do plano: R$ " << valorPlano << "\n";
        cout << "Quantidade de Meses: " << quantMeses << "\n";
        cout << "Valor total: R$ " << valorTotal << "\n";

        cout << "---------------------------\n";
    }
}