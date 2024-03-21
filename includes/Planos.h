#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Planos
{
    protected: 
        float valorTotal = 0;
        float valorPlano = 0;
        int quantAnos = 0;
        int quantMeses = 0;

    public:
        Planos();
        virtual void alterarQuantidadeAnos(int quantAnos);
        virtual void alterarQuantidadeMeses(int quantMeses);
        void alterarValor(float valorPlano);
        virtual void calcularValorTotal();
        void exibirValorTotal();
        virtual void exibir(vector<Aluno> als) = 0;
        
        void setValorTotal(float valorTotal);
        void setValorPlano(float valorPlano);
        void setQuantAnos(int quantAnos);
        void setQuantMeses(int quantMeses);
        float getValorTotal();
        float getValorPlano();
        int getQuantAnos();
        int getQuantMeses();
};
