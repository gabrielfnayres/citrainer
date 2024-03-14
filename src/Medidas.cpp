#include "../includes/Medidas.h"
#include <iostream>
using namespace std;

Medidas::Medidas(){

}

Medidas:: Medidas(float peso, float altura, float cintura, float busto, float quadril, float coxa, float panturrilha){
this->peso=peso;
this->altura=altura;
this->cintura=cintura;
this->busto=busto;
this->quadril=quadril;
this->coxa=coxa;
this->panturrilha=panturrilha;

}

float Medidas:: calculaIMC(){
return peso/(altura * altura);
}

void Medidas:: setPeso(float peso){
this->peso = peso;


}
void Medidas::setAltura(float altura){
this-> altura = altura;
}

void Medidas :: setCintura(float cintura){
this-> cintura = cintura;
}

void Medidas:: setBusto(float busto){
this->busto = busto;

}
void Medidas :: setQuadril(float quadril){
this->quadril = quadril;
}


void Medidas:: setCoxa(float coxa){
this->coxa = coxa;
}

void Medidas:: setPanturrilha(float panturrilha){
this->panturrilha = panturrilha;
}


float Medidas:: getPeso(){
return peso;
}

float Medidas:: getAltura(){
return altura;
}

float Medidas:: getCintura(){
return cintura;
}

float Medidas:: getBusto(){
return busto;
}

float Medidas:: getQuadril(){
return quadril;
}

float Medidas:: getCoxa(){
return coxa;
}

float Medidas:: getPanturrilha(){
return panturrilha;
}



void Medidas:: exibir(){
cout<<"Medidas:" << endl;
cout<<"Peso: " << peso <<endl;
cout<<"Altura: "<< altura << endl;
cout<<"Cintura: "<< cintura<< endl;
cout<<"Busto: "<< busto<<endl;
cout<<"Quadril: "<< quadril<< endl;
cout<<"Coxa: "<< coxa << endl;
cout<<"Panturrilha: "<< panturrilha<< endl;
}


