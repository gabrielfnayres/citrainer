#include "../includes/Academia.h"

Academia::Academia(){}

Academia::~Academia(){}

Academia::Academia(string nomeCompleto, int idade, string dataDeNascimento, string nomeAcademia, string telefoneAcademia):Pessoa(nomeCompleto, idade, dataDeNascimento)
{
    this->nomeAcademia = nomeAcademia;
    this->telefoneAcademia = telefoneAcademia;
}

string Academia::toStringAcademia()
{
    return "Nome da Academia: " + nomeAcademia + "\nTelefone da academia: " + telefoneAcademia;
}

void Academia::exibirAcademia()
{
    cout << toStringAcademia() << endl;
}

void Academia::setNomeAcademia(string n)
{
    nomeAcademia = n;
}

void Academia::setTelefoneAcademia(string t)
{
    telefoneAcademia = t;
}

string Academia::getNomeAcademia()
{
    return nomeAcademia;
}

string Academia::getTelefoneAcademia()
{
    return telefoneAcademia;
}
