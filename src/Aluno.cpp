#include <iostream>
#include "../includes/Aluno.h"
#include "../includes/Treino.h"
#include "../includes/Medidas.h"

using namespace std;

Aluno::Aluno(){}

Aluno::Aluno(string nomeCompleto, int idade, Medidas medidas, Treino treinos) : Pessoa(nomeCompleto, idade)
{
  this->medidas = medidas;
  this-> treinos = treinos;
}

void Aluno::exibir()
{
  cout << "Nome: " << nomeCompleto << endl;
  cout << "Idade: " << idade << endl;
}

void Aluno::menu()
{
  int escolha;

  while(1){

    cout << "-----------------------------" <<endl;

    cout << "   1 - Ver treino    " << endl;
    cout << "   2 - Ver informações    " << endl;
    cout << "   3 - Concluir treino    " << endl;
    cout << "   4 - Sair" << endl;

    cout << "----------------------------" << endl;

      cin >> escolha;

      if(escolha == 1){
        status = false;
        treinos.exibir();
      }

      else if(escolha == 2){
        exibir();
        medidas.exibir();
      }

      else if(escolha == 3){
        status = true;
        cout << "Treino concluído" << endl;
      }

      else if(escolha == 4){
          return;
    }
  }
}
