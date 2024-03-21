#pragma once
#include <iostream>
#include <string>
using namespace std;

class Planos
{
    protected: 
        float valorTotal;
        float valorPlano;
        int quantAnos;
        int quantMeses;

    public:
        Planos();
        virtual void alterarQuantidadeAnos(int quantAnos);
        virtual void alterarQuantidadeMeses(int quantMeses);
        void alterarValor(float valorPlano);
        virtual void calcularValorTotal();
        void exibirValorTotal();
        virtual void exibir();
};