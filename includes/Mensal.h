#pragma once
#include "Planos.h"
#include <iostream>
#include <string>
using namespace std;

class Mensal: public Planos 
{
    public:
        Mensal();
        void alterarQuantidadeAnos(int quantAnos);
        void alterarQuantidadeMeses(int quantMeses);
        void calcularValorTotal();
        void exibir();
};