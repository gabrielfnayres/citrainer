#pragma once
#include "../includes/Pessoa.h"
#include <iostream>
using namespace std;

struct exercicios
{
    string descricao;
    int repeticoes = 0;
    int series = 0;
    int descanso = 0;
};

struct tipo
{
    exercicios exercicio[15];
};

class Treino
{
    public:
        Treino();
        ~Treino();
        Treino(tipo a, tipo b, tipo c);
        void montarTreino();
        void exibirTreinoA();
        void exibirTreinoB();
        void exibirTreinoC();
        void exibir();
        void alterarTreino();
        void adicionarExercicio();
        void removerExercicio();
        void treinoDoDia(int n);
        string toStringTreino();

        void setTreinoA(tipo a);
        void setTreinoB(tipo b);
        void setTreinoC(tipo c);
        tipo getTreinoA();
        tipo getTreinoB();
        tipo getTreinoC();

    private:
        tipo A, B, C;
};
