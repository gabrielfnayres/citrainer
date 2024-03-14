#pragma once

#include <iostream>

#include <string>

using namespace std;

class Medidas{
private:
float peso, altura, cintura, busto, quadril, coxa, panturrilha;


public:
Medidas();
Medidas(float peso, float altura, float cintura, float busto, float quadril, float coxa, float panturrilha);
float calculaIMC();
void setPeso(float peso);
void setAltura(float altura);
void setCintura(float cintura);
void setBusto(float busto);
void setQuadril(float quadril);
void setCoxa(float coxa);
void setPanturrilha(float panturrilha);
float getPeso();
float getAltura();
float getCintura();
float getBusto();
float getQuadril();
float getCoxa();
float getPanturrilha();
void exibir();


};

