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
    Gerenciamento* crud = new class Gerenciamento(); 
    
    crud->abrirArquivo();
    
    

    cout << "------------------------------ Bem-vindo ao CI Trainer ------------------------------" << endl;

    while(1)
    {
        cout << "Olá Personal" << endl;
        cout << "Para iniciar o seu MUX: - digite 1" << endl;
        cout << "Para sair: - digite 2" << endl;
        cin >> cargo;

        if (cargo ==  1)
        {
            
            //personal1.menu();
            //string relatorio = personal1.toString();
            //arquivo << relatorio << endl;
            crud->menu();
        }

   
        else if(cargo == 2)
        {
            
            break;
        }

        else
        {
            cout << "Opção inválida. Insira uma opção válida:" << endl;
        }
    }
    cout << "------------------------------ Obrigado por usar o CI Trainer --------------------------------" << endl;
    
   
    crud->salvarArquivo();


   

    return 0;
}
