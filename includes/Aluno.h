#pragma once
#include <iostream>
#include "Pessoa.h"
#include "Medidas.h"
#include "Treino.h"

class Aluno: public Endereco
{
    private:
        Medidas medidas;
        Treino treinos;

    public:
        int treinoDoDia = 0;
        Aluno();
        ~Aluno();
        Aluno(string nomeCompleto, int idade, string data, string bairro, string cidade, string rua, string cep, int numero, Medidas medidas, Treino treinos);
        void exibir();
        void menu();
        string toStringAluno();
        
        Medidas getMedidas();
        Treino getTreino();
        void setTreino(Treino treinos);
        void setMedidas(Medidas medidas);  

        

};
