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
        int treinoDoDia = 0;
        Aluno();
        Aluno(string nomeCompleto, int idade, string data, Endereco endereco, Medidas medidas, Treino treinos);
        
        Medidas getMedidas();
        Treino getTreino();

        void setTreino(Treino treinos);
        void setMedidas(Medidas medidas);  
        void exibir();
        void menu();
        string toStringAluno();
};
