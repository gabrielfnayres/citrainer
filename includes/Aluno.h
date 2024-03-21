#pragma once
#include <iostream>
#include "Pessoa.h"
#include "Endereco.h"
#include "Medidas.h"
#include "Treino.h"
#include "Planos.h"

class Aluno: public Pessoa
{
    private:
        Medidas medidas;
        Treino treinos;
        Planos plano;

    public:
        int treinoDoDia = 0;
        Aluno();
        ~Aluno();
        Aluno(string nomeCompleto, int idade, string data, Endereco endereco, Medidas medidas, Treino treinos, Planos plano);
        void exibir();
        void menu();
        string toStringAluno();
        
        void setNomeCompleto(string n);
        void setIdade(int i);
        void setDataDeNascimento(string d);
        void setEndereco(Endereco e);
        void setTreino(Treino treinos);
        void setMedidas(Medidas medidas); 
        void setPlano(Planos plano);
        string getNomeCompleto();
        int getIdade();
        string getDataDeNascimento(); 
        Medidas getMedidas();
        Treino getTreino();
        Planos getPlano();
};
