#include "../includes/Medidas.h"
#include <iostream>
#include <string>
using namespace std;

Medidas::Medidas()
{
    peso = 0;
    altura = 0;
    cintura = 0;
    busto = 0;
    quadril = 0;
    coxa = 0;
    panturrilha = 0;
}

Medidas::Medidas(float peso, float altura, float cintura, float busto, float quadril, float coxa, float panturrilha)
{
    this->peso=peso;
    this->altura=altura;
    this->cintura=cintura;
    this->busto=busto;
    this->quadril=quadril;
    this->coxa=coxa;
    this->panturrilha=panturrilha;

}

float Medidas::calculaIMC(){
    return peso/(altura * altura);
}

void Medidas::setPeso(float peso){
    this->peso = peso;
}

void Medidas::setAltura(float altura){
    this-> altura = altura;
}

void Medidas::setCintura(float cintura){
    this-> cintura = cintura;
}

void Medidas::setBusto(float busto){
    this->busto = busto;
}

void Medidas::setQuadril(float quadril){
    this->quadril = quadril;
}

void Medidas::setCoxa(float coxa){
    this->coxa = coxa;
}

void Medidas::setPanturrilha(float panturrilha){
    this->panturrilha = panturrilha;
}

float Medidas::getPeso(){
    return peso;
}

float Medidas::getAltura(){
    return altura;
}

float Medidas::getCintura(){  
    return cintura;
}

float Medidas::getBusto(){
    return busto;
}

float Medidas::getQuadril(){
    return quadril;
}

float Medidas::getCoxa(){
    return coxa;
}

float Medidas::getPanturrilha(){
    return panturrilha;
}

void Medidas::exibir()
{
    cout<<"--------- Medidas ---------" << endl;

    cout<<"Peso(kg): " << peso <<endl;
    cout<<"Altura(m): "<< altura << endl;
    cout<<"Cintura(cm): "<< cintura<< endl;
    cout<<"Busto(cm): "<< busto<<endl;
    cout<<"Quadril(cm): "<< quadril<< endl;
    cout<<"Coxa(cm): "<< coxa << endl;
    cout<<"Panturrilha(cm): "<< panturrilha<< endl;

    cout << "---------------------------" << endl;
}

string Medidas::toStringMedidas(){
    string stmedidas = "---------- Medidas -----------\n";
    stmedidas = "Peso(kg): " + to_string(peso) + "\n" + "Altura(m): " + to_string(altura) + "\n" + "Cintura(cm): " + to_string(cintura) + "\n" + "Busto(cm): " + to_string(busto) + "\n " + "Quadril(cm): " + to_string(quadril) + "\n" + "Coxa(cm): " + to_string(coxa) + "\n" + "Panturrilha(cm): " + to_string(panturrilha) + "------------------------------\n";
    return stmedidas;
}