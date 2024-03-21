#pragma once
#include "Planos.h"
#include <iostream>
#include <string>
using namespace std;

class Anual: public Planos 
{
    public:
        Anual();
        void alterarQuantidadeAnos(int quantAnos);
        void alterarQuantidadeMeses(int quantMeses);
        float calcularValorTotal();

        string exibir();

};