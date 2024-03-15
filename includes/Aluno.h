#pragma once
#include <iostream>
#include "Pessoa.h"
#include "Medidas.h"
#include "Treino.h"

class Aluno: public Pessoa
{
    private:
        Medidas medidas;
        Treino treinos;

    public:
        bool status;
        Aluno();
        Aluno(string nomeCompleto, int idade, Medidas medidas, Treino treinos);
        void exibir();
        void menu();
};
