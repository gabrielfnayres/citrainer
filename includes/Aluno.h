#pragma once
#include <iostream>
#include "Pessoa.h"
#include "Endereco.h"
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
        ~Aluno();
        Aluno(string nomeCompleto, int idade, string data, Endereco endereco, Medidas medidas, Treino treinos);
        void exibir();
        void menu();
        string toStringAluno();
        
        void setNomeCompleto(string n);
        void setIdade(int i);
        void setDataDeNascimento(string d);
        void setEndereco(Endereco e);
        void setTreino(Treino treinos);
        void setMedidas(Medidas medidas); 
        string getNomeCompleto();
        int getIdade();
        string getDataDeNascimento(); 
        Medidas getMedidas();
        Treino getTreino();
};
