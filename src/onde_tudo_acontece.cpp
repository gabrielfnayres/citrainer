#include <iostream>
#include <fstream>
#include <iterator>
#include <string>

#include "../includes/Aluno.h"

#include "../includes/Gerenciamento.h"
using namespace std;



int main()
{
    int cargo;
    Gerenciamento* crud = new  Gerenciamento(); 
    
    crud->abrirArquivo();
    
    cout << "------------------------------ Bem-vindo ao MostruMUX ------------------------------" << endl;

    while(1)
    {
        cout << "\nOlá, Personal!\n" << endl;
        cout << "[1] Para acessar o seu MUX" << endl;
        cout << "[2] Para sair do programa" << endl;
        cin >> cargo;

        if (cargo ==  1)
        {
            
            //personal1.menu();
            //string relatorio = personal1.toString();
            //arquivo << relatorio << endl;
            crud->menu();
        }

        else if (cargo == 2)
        {
             break;

        }

    
        else
        {
            cout << "Opção inválida. Insira uma opção válida:" << endl;
        }
    }
    cout << "-------------------------- Obrigado por usar o MostruMUX ---------------------------" << endl;
    
   
    crud->salvarArquivo();


   

    return 0;
}
