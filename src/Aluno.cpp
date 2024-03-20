#include <iostream>
#include "../includes/Aluno.h"
#include "../includes/Treino.h"
#include "../includes/Medidas.h"
#include "../includes/Endereco.h"
#include <iomanip>

using namespace std;

Aluno::Aluno()
{
  nomeCompleto = "";
  idade = 0;
  dataDeNascimento = "";
  medidas = Medidas();
  treinos = Treino();
}

Aluno::~Aluno(){}

Aluno::Aluno(string nomeCompleto, int idade, string data, Endereco endereco, Medidas medidas, Treino treinos):Pessoa(nomeCompleto, idade, data, endereco)
{
  this->medidas = medidas;
  this->treinos = treinos;
}

void Aluno::exibir()
{
  cout << "------- Dados Pessoais -------\n";
  cout << "Nome: " << nomeCompleto << endl;
  cout << "Idade: " << idade << endl;
  cout << "Data de nascimento: " << dataDeNascimento << endl;
  endereco.exibirEndereco();
  medidas.exibir();
  treinos.exibir();
}

void Aluno::setNomeCompleto(string n)
{
  nomeCompleto = n;
}

void Aluno::setIdade(int i)
{
  idade = i;
}

void Aluno::setDataDeNascimento(string d)
{
  dataDeNascimento = d;
}

void Aluno::setEndereco(Endereco e)
{
  endereco = e;
}

string Aluno::getNomeCompleto()
{
  return nomeCompleto;
}

int Aluno::getIdade()
{
  return idade;
}

string Aluno::getDataDeNascimento()
{
  return dataDeNascimento;
}

Medidas Aluno::getMedidas()
{
  return medidas;
}

void Aluno::setMedidas(Medidas medidas)
{
  this->medidas = medidas;
}

Treino Aluno::getTreino()
{
  return treinos;
}
  
void Aluno::setTreino(Treino treinos)
{
  this->treinos = treinos;
}

void Aluno::menu()
{
  int escolha;
  
  while(1)
  {
    
    cout << setw(40) << "MENU PRINCIPAL" << endl;
    cout << "---------------------------" << endl;

    cout << "   1 - Ver treinos"     << endl;
    cout << "   2 - Ver informações" << endl;
    cout << "   3 - Concluir treino" << endl;
    cout << "   4 - Sair"            << endl;

    cout << "---------------------------" << endl;

    cin >> escolha;

    if(escolha == 1){
      treinos.exibir();
    }

    else if(escolha == 2){
      cout << endl;
      cout << "------ Dados Pessoais -----" << endl;

      exibir();
      medidas.exibir();

      cout << endl;
    }
    
    else if(escolha == 3){

      if(treinoDoDia == 2)
        treinoDoDia = 0;

      else 
        treinoDoDia++;
        
      cout << "Muito bem! Esse é o treino de amanhã." << endl;
      treinos.treinoDoDia(treinoDoDia);
    }

    else if(escolha == 4){
        return;
    }

    else{
      cout << "Opção inválida. Insira uma opção válida." << endl;
    }
  }
}

string Aluno:: toStringAluno()
{
  string staluno = medidas.toStringMedidas() + "," + treinos.toStringTreino();
  cout << staluno;

  return staluno;  
}