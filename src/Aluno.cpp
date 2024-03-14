#include "../includes/Aluno.h"

#include <iostream>



using namespace std;

Aluno:: Aluno(){

}

Aluno::Aluno(string nomeCompleto, int idade, Medidas medidas, Treino treinos):Pessoa(nomeCompleto, idade){
this->medidas = medidas;
this-> treinos = treinos;
}



void Aluno:: exibir(){

cout<<"Nome: "<<nomeCompleto << endl;
cout<<"Idade: "<<idade<< endl;
medidas.exibir();
treinos.exibir();

}
