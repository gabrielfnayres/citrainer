#pragma once
#include <string>
#include "Pessoa.h"

class Academia
{
    protected:
        string nomeAcademia, telefoneAcademia;

    public: 
        Academia();
        ~Academia();
        Academia(string nomeCompleto, int idade, string dataDeNascimento, string nomeAcademia, string telefoneAcademia);
        string toStringAcademia();
        void exibirEndereco();

        void setNomeAcademia(string n);
        void setTelefoneAcademia(string t);
        string getNomeAcademia();
        string getTelefoneAcademia();
};