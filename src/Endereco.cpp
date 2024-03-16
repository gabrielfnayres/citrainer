#include <iostream>
#include "Endereco.h"


Endereco::Endereco(){

}

Endereco::Endereco(string b, string c, string r, string cep, int n){
    bairro=b;
    cidade=c;
    rua=r;
    CEP=cep;
    numero=n;
}

void Endereco :: setBairro(string b){
    bairro=b;
}

void Endereco :: setRua(string r){
    rua=r;
}

void Endereco :: setCep(string cep){
    CEP=cep;
}

void Endereco :: setCidade(string c){
    cidade=c;
}

void Endereco :: setNumero(int n){
    numero=n;
}

string Endereco:: getBairro(){
    return bairro;
}

string Endereco:: getRua(){
    return rua;
}

string Endereco:: getCidade(){
    return cidade;
}

string Endereco:: getCep(){
    return CEP;
}

int Endereco:: getNumero(){
    return numero;
}

void Endereco:: exibirEndereco(){
    cout << "CEP: " << CEP << endl;
    cout << "Cidade: "<< cidade<< endl;
    cout << "Rua: "<< rua<< endl;
    cout << "Bairro: "<< bairro<< endl;
    cout << "Número: "<< numero << endl;
}