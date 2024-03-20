#include "Gerenciamento.h"
#include <iostream>
#include <iomanip>
#include <iterator>
#include <string>
#include <vector>
#include "Endereco.h"
#include "Medidas.h"
#include "Treino.h"
#include "Personal.h"
#include <fstream>

void Gerenciamento:: setPersonal(Personal personal) 
{
    this->personal = personal;
}
Personal Gerenciamento::getPersonal()
{
    return personal;
}

void Gerenciamento:: abrirArquivo()
{
    string line;
    ifstream arquivo("relatorio_personal.txt");
    
    if(!arquivo.is_open())
    {
        cout << "Não foi possível abrir o arquivo" << endl;
    }
}

void Gerenciamento:: salvarArquivo()
{
    ofstream arquivo;
    arquivo.open("relatorio_personal.txt");

    for(Aluno a : personal.aluno)
    {
        if(a.getNomeCompleto() != "")
        {
            arquivo << a.toStringAluno() << endl;
        }
        else
        {
            break;
        }
    }
}

        void Gerenciamento:: cadastrarAluno(vector<Aluno> &als)
    {
        Aluno criado;
        string n;
        int idade;
        Medidas med;
        Treino tre;
        int numero;
        Endereco end;
        string data, bairro, cep, cidade, rua;
        float peso, altura, cintura, busto, quadril, coxa, panturrilha;
        
        cin.ignore();
        cout << "Informe o nome do aluno: " << "\n";
        getline(cin, n);
        cout << "Informe a idade do aluno: " << "\n";
        cin >> idade;
        cout << "Infome a data de nascimento: " << "\n";
        cin.ignore();
        getline(cin, data);
        cout << "Informe o bairro do aluno: " << "\n";
        
        getline(cin, bairro);
        cout << "Informe a cidade do aluno: " << "\n";
        
        getline(cin, cidade);
        cout << "Informe a rua do aluno: " << "\n";
        
        getline(cin, rua);
        cout << "Informe o número do aluno: " << "\n";
        cin >> numero;
        cout << "Informe o CEP do aluno: " << "\n";
        cin.ignore();
        getline(cin, cep);
        cout << "Informe peso do aluno: " << endl;
        cin >> peso;
        cout << "Informe a altura do aluno: " << endl;
        cin >> altura;
        cout << "Informe a medida da cintura do aluno:" << endl;
        cin >> cintura;
        cout << "Informe a medida do busto do aluno:" << endl;
        cin >> busto;
        cout << "Informe a medida do coxa do aluno: " << endl;
        cin >> coxa;
        cout << "Informe a medida da panturrilha do aluno: " << endl;
        cin >> panturrilha;

        tre.montarTreino();
        criado.setTreino(tre);
        
        end.setBairro(bairro);
        end.setCidade(cidade);
        end.setRua(rua);
        end.setNumero(numero);
        end.setCep(cep);
        criado.setEndereco(end);
        
        criado.setNomeCompleto(n);  
        criado.setIdade(idade);
        criado.setDataDeNascimento(data);
        criado.setEndereco(end);

        med.setPeso(peso);
        med.setAltura(altura);  
        med.setCintura(cintura);
        med.setBusto(busto);
        med.setCoxa(coxa);
        med.setPanturrilha(panturrilha);
        criado.setMedidas(med);
        
        als.push_back(criado);
    }

void Gerenciamento:: alterarAluno(string nome, vector<Aluno> &als)
{
    cout << " O que deseja alterar no seu aluno? " << "\n";
    int alter;
    cout << " ------------------" << "\n";
    cout << " 1-Nome" << "\n";
    cout << " 2-Idade" << "\n";
    cout << " 3-Data de nascimento" << "\n";
    cout << " 4-Medidas" << "\n";
    cout << " 5-Treino" << "\n";

    cin >> alter;

    if(alter == 1)
    {
        cout << "Informe o novo nome:" << "\n";
        string nom;
        cin.ignore();
        getline(cin, nom);
        
        for(Aluno a : als)
        {
            
            if(a.getNomeCompleto() == nome)
            {
                cout << "aqui" << endl;
                a.setNomeCompleto(nom);
                break;
            }
        }
    }
    else if(alter == 2)
    {
        cout << "Informe a idade do aluno: \n";
        int ida;
        
        cin >> ida;

        for(Aluno a : als)
        {
            if(a.getNomeCompleto() == nome)
            {
                a.setIdade(ida);
                break;
            }
        }
    }
    else if(alter == 3)
    {
        cout << "Informe a nova data: " << endl;
        string novaData;
        getline(cin, novaData);
        for(Aluno a : als)
        {
            if(a.getNomeCompleto() == nome)
            {
                a.setDataDeNascimento(novaData);
                break;
            }
        }
    }
    else if(alter == 4)
    {
        int esc;
        Medidas tempo;
    
        cout << "Informe informe a medida que deseja alterar: " << "\n";
        cout << " --------------------------------------- " << "\n";
        cout << " 1 - Peso" << "\n";
        cout << " 2 - Altura" << "\n";
        cout << " 3 - Cintura" << "\n";
        cout << " 4 - Busto" << "\n";
        cout << " 5 - Quadril" << "\n";
        cout << " 6 - Coxa" << "\n";
        cout << " 7 - Panturrilha" << "\n";

        cin >> esc;
        switch(esc)
        {
        case 1:
            cout << "Informe o peso do aluno: " << "\n";
            for(Aluno a : als)
            {
            if(a.getNomeCompleto() == nome){
                Medidas tempo = a.getMedidas();
                float newPeso;
                cin >> newPeso;
                tempo.setPeso(newPeso);
                cout << "Peso alterado com sucesso!" << "\n";
                break;
            }
            }
        case 2:
            cout << "Informe a altura do aluno:" << "\n";
            for(Aluno a : als)
            {
                if(a.getNomeCompleto() == nome)
                {
                    Medidas tempo = a.getMedidas();
                    float newAltura;
                    cin >> newAltura;
                    tempo.setAltura(newAltura);
                    cout << "Altura alterada com sucesso!" << "\n";
                    break;
                }
            }
        case 3:
            cout << "Informe a cintura do aluno: " << "\n";
            for(Aluno a : als)
            {
                if(a.getNomeCompleto() == nome)
                {
                    float newCintura;
                    Medidas tempo = a.getMedidas();
                    cin >> newCintura;
                    tempo.setCintura(newCintura);
                    cout << "Cintura alterada com sucesso! " << "\n";
                    break;
                }
            }
        case 4:
            cout << "Informe o busto do aluno:" << "\n";
            for(Aluno a : als)
            {
                if(a.getNomeCompleto() == nome)
                {
                    float newBusto;
                    Medidas tempo = a.getMedidas();
                    cin >> newBusto;
                    tempo.setBusto(newBusto);
                    cout << "Busto alterado com sucesso!" << "\n";
                    break;
                }
            }
        case 5:
            cout << "Informe o quadril do aluno: " << "\n";
            for(Aluno a : als)
            {
                if(a.getNomeCompleto() == nome)
                {
                    float newQuadril;
                    Medidas tempo = a.getMedidas();
                    cin >> newQuadril;
                    tempo.setQuadril(newQuadril);
                    cout << "Quadril alterado com sucesso!" << "\n";
                    break;
                }
            }
        case 6:
            cout << "Informe a coxa do aluno: " << "\n";
            for(Aluno a : als)
            {
                if(a.getNomeCompleto() == nome)
                {
                    float newCoxa;
                    Medidas tempo = a.getMedidas();
                    cin >> newCoxa;
                    tempo.setCoxa(newCoxa);
                    cout << "Coxa alterada com sucesso!" << "\n";
                    break;
                }
            }
        case 7:
            cout << "Informe a panturrilha do aluno: " << "\n";
            for(Aluno a : als)
            {
                float newPant;
                Medidas tempo = a.getMedidas();
                cin >> newPant;
                tempo.setPanturrilha(newPant);
                cout << "Panturrilha alterada com sucesso!" << "\n";
                break;
            }
        default:
            cout << "Informaçã inválida" << "\n";
        }
    }
    else if(alter == 5)
    {
        int escolha;
        cin >> escolha;
    
        cout << "Informe as alterações do treino do aluno:" << endl;
        cout << " -------------------------------------- " << endl;
        cout << " 1 - Alterar treino" << endl;
        cout << " 2 - Adicionar exercicio" << endl;
        if(escolha == 1)
        {
            for(Aluno a : als)
            {
                if(a.getNomeCompleto() == nome)
                {
                Treino t = a.getTreino();
                t.alterarTreino();
                cout << "Treino alterado com sucesso!" << endl;
                break;
                }
            }
        }
        else if(escolha == 2)
        {
            for(Aluno a : als)
            {
                if(a.getNomeCompleto() == nome)
                {
                    Treino t = a.getTreino();
                    t.adicionarExercicio();
                    cout << "Execício adicionado com sucesso!" << endl;
                    break;
                }
            }
        }
    }
}

Aluno Gerenciamento :: buscarAluno(string nomeAluno, vector<Aluno> als)
{
    string resp;
    Aluno exibido;
    for(Aluno al : als)
    {
        if((al.getNomeCompleto()) == nomeAluno)
        {
        exibido = al;
        break;
        }
    }
    return exibido;
}

void Gerenciamento :: exibirTodosAlunos()
{
    for(Aluno a : personal.aluno)
    {
        a.exibir();
        cout << "\n";
    }
}


void Gerenciamento :: removerAluno( Aluno &als)
{
    als = Aluno();
}

void Gerenciamento :: menu()
{
    int escolha;

    while(1)
    {          
        cout << setw(40) << "MENU PRINCIPAL" << endl;
        cout << "----------------------------" <<endl;

        cout << "   1 - Adicionar aluno    " << endl;
        cout << "   2 - Alterar aluno    " << endl;
        cout << "   3 - Buscar aluno     " << endl;     
        cout << "   4 - Remover aluno" << endl;
        cout << "   5 - Listar alunos" << endl;
        cout << "   6 - Sair" << endl;

        cout << "---------------------------" << endl;
        cin >> escolha;
        
        if(escolha == 1)
        {
            cadastrarAluno(personal.aluno);
        }
        else if(escolha == 3)
        {
            cout << "Informe o nome do aluno: " << "\n";
            string busca;
            cin.ignore();
            getline(cin, busca);
            Aluno busc = buscarAluno(busca, personal.aluno);

            if(busc.getNomeCompleto() == busca)
            {
                cout << busc.getNomeCompleto() << " encontrado" << "\n";
                busc.exibir();
            }
            else
            {
                cout << "Aluno não encontrado" << "\n";
            }
        }
        else if(escolha == 2)
        {
            cout << "Informe o nome o aluno que deseja alterar:  " <<endl;
            string s;
            cin.ignore();
            getline(cin,s);
            alterarAluno(s, personal.aluno);
        }
        else if(escolha == 4)
        {
            string remo;

            cout <<"Informe o aluno que deseja remover: " << "\n";
            cin.ignore();
            getline(cin, remo);
            Aluno a = buscarAluno(remo, personal.aluno);
            removerAluno(a);
            cout << "Aluno " << remo <<  " removido com sucesso!" << "\n";
            exibirTodosAlunos();
        }

        else if(escolha == 5)
        {
            cout << "Aí está a lista dos seus alunos: " << "\n";
            exibirTodosAlunos();
        }

        else if(escolha == 6)
        {
            break;
        }
        else
        {
            cout << "Opção inválida. Insira uma opção válida:" << endl;
        }
    }
}