#include "../includes/Endereco.h"

Endereco::Endereco(){}
Endereco::~Endereco(){}

Endereco::Endereco(string bairro, string cidade, string rua, string cep, int numero)
{
    bairro = bairro;
    cidade = cidade;
    rua = rua;
    CEP = cep;
    numero = numero;
}

string Endereco::toStringEndereco()
{
    string stendereco;
    stendereco = CEP + "," + cidade + "," + rua + "," + bairro + "," + to_string(numero);

    cout << stendereco;
    return stendereco;

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
    cout << "---------- Endereco ----------\n";
    cout << "CEP: " << CEP << endl;
    cout << "Cidade: "<< cidade<< endl;
    cout << "Rua: "<< rua<< endl;
    cout << "Bairro: "<< bairro<< endl;
    cout << "Número: "<< numero << endl;
}
