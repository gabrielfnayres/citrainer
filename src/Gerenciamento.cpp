#include "../includes/Gerenciamento.h"
#include "../includes/Endereco.h"
#include "../includes/Aluno.h"
#include "../includes/Treino.h"
#include "../includes/Personal.h"
#include <iostream>
#include <iomanip>
#include <iterator>
#include <string>
#include <vector>
#include <cstdlib>
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

void Gerenciamento::lerArquivo()
{
    ifstream lendo("relatorio_personal.txt", ios::in);

    if(!lendo.is_open())
    {
        cout << "Falha ao abrir o arquivo!" << "\n";
    }

    string linha;

    if(lendo.good())
    {
        getline(lendo, linha);

    }

    while(getline(lendo, linha))
    {
        string  dadosBasicos;
        stringstream inter(linha);

        getline(inter, dadosBasicos, ';')
    }

}

void Gerenciamento:: salvarArquivo()
{
    ofstream arquivo;
    arquivo.open("relatorio_personal.txt");
    arquivo << personal.toStringPersonal() << endl;
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
    cout << "Informe a medida do quadril do aluno: " << endl;
    cin >> quadril;
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
    med.setQuadril(quadril);
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
    cin.ignore();

    if(alter == 1)
    {
        cout << "Informe o novo nome:" << "\n";
        string nom;
        vector<Aluno>::iterator it;
        getline(cin, nom);
    
        for(it = als.begin(); it != als.end(); it++)
        {
            
            if(it->getNomeCompleto()  == nome)
            {
                it->setNomeCompleto(nom);
                break;
            }
        }
    }
    else if(alter == 2)
    {
        cout << "Informe a idade do aluno: \n";
        int ida;
        vector<Aluno>::iterator it;
        cin >> ida;

        for(it = als.begin(); it != als.end(); it++)
        {
            if(it->getNomeCompleto() == nome)
            {
                it->setIdade(ida);
                break;
            }
        }
        
    }
    else if(alter == 3)
    {
        cout << "Informe a nova data: " << endl;
        string novaData;
        getline(cin, novaData);
        vector<Aluno>::iterator it;
        for(it = als.begin(); it != als.end(); it++)
        {
            if(it->getNomeCompleto() == nome)
            {
                it->setDataDeNascimento(novaData);
                break;
            }
        }
    }
    else if(alter == 4)
    {
        alterarMedidas(als, nome);
    }
    else if(alter == 5)
    {
        
        int bo;
        
    
        cout << "Informe as alterações do treino do aluno:" << endl;
        cout << " -------------------------------------- " << endl;
        cout << " 1 - Alterar treino" << endl;
        cout << " 2 - Adicionar exercicio" << endl;
        cin >> bo;
        if(bo == 1)
        {
            vector<Aluno>::iterator it;
            for(it = als.begin(); it != als.end(); it++)
            {
                if(it->getNomeCompleto() == nome)
                {
                Treino aux = it->getTreino();
                aux.alterarTreino();
                it->setTreino(aux);
                cout << "Treino alterado com sucesso!" << endl;
                break;
                }
            }
        }
        else if(bo == 2)
        {
            vector<Aluno>::iterator it;
            for(it = als.begin(); it != als.end(); it++)
            {
                if(it->getNomeCompleto() == nome)
                {
                    Treino aux = it->getTreino();
                    aux.adicionarExercicio();
                    it->setTreino(aux);
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


void Gerenciamento :: removerAluno(string nome,vector<Aluno> &als)
{
    
    vector<Aluno>::iterator it;
    for(it = als.begin(); it != als.end(); it++)
    {
        if(it->getNomeCompleto() == nome)
        {
            als.erase(it);
            break;
        }
    }
}

void Gerenciamento::alterarMedidas(vector<Aluno> &als,string m)
{
    int esc;
        vector<Aluno>::iterator it; 
    
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

        if(esc == 1)
        {
            cout << "Informe o peso do aluno: " << "\n";
            for(it = als.begin(); it != als.end(); it++)
            {
                if(it->getNomeCompleto() == m)
                {
                    float newPeso;
                    cin >> newPeso;
                    Medidas aux;
                    aux = it->getMedidas();
                    aux.setPeso(newPeso);
                    it->setMedidas(aux);
                    cout << "Peso alterado com sucesso!" << "\n";
                    break;
                }
            }
        }
        else if(esc == 2)
        {
            cout << "Informe a altura do aluno:" << "\n";
            for(it = als.begin(); it != als.end(); it++)
            {
                if(it->getNomeCompleto() == m)
                {
                    float newAltura;
                    cin >> newAltura;
                    Medidas aux;
                    aux = it->getMedidas();
                    aux.setAltura(newAltura);
                    it->setMedidas(aux);
                    cout << "Altura alterada com sucesso!" << "\n";
                }
            }
        }    
        else if(esc == 3)
        {
            cout << "Informe a cintura do aluno: " << "\n";
            for(it = als.begin(); it != als.end(); it++)
            {
                if(it->getNomeCompleto() == m)
                {
                    float newCintura;
                    cin >> newCintura;
                    Medidas aux;
                    aux = it->getMedidas();
                    aux.setCintura(newCintura);
                    it->setMedidas(aux);
                    cout << "Cintura alterada com sucesso! " << "\n";
                    break;
                }
            }
        }
        else if(esc == 4)
        {
            cout << "Informe o busto do aluno:" << "\n";
            for(it = als.begin(); it != als.end(); it++)
            {
                if(it->getNomeCompleto() == m)
                {
                    float newBusto;
                    cin >> newBusto;
                    Medidas aux;
                    aux = it->getMedidas();
                    aux.setBusto(newBusto);
                    it->setMedidas(aux);
                    cout << "Busto alterado com sucesso!" << "\n";
                    break;
                }
            }
        }
        else if(esc == 5)
        {
            cout << "Informe o quadril do aluno: " << "\n";
            for(it = als.begin(); it != als.end(); it++)
            {
                if(it->getNomeCompleto() == m)
                {
                    float newQuadril;
                    cin >> newQuadril;
                    Medidas aux;
                    aux = it->getMedidas();
                    aux.setQuadril(newQuadril);
                    it->setMedidas(aux);
                    cout << "Quadril alterado com sucesso!" << "\n";
                    break;
                }
            }
        }
        else if(esc == 6)
        {
            cout << "Informe a coxa do aluno: " << "\n";
            for(it = als.begin(); it != als.end(); it++)
            {
                if(it->getNomeCompleto() == m)
                {
                    float newCoxa;
                    cin >> newCoxa;
                    Medidas aux;
                    aux = it->getMedidas();
                    aux.setCoxa(newCoxa);
                    it->setMedidas(aux);
                    cout << "Coxa alterada com sucesso!" << "\n";
                    break;
                }
            }
        }
        else if(esc == 7)
        {
            cout << "Informe a panturrilha do aluno: " << "\n";
            for(it = als.begin(); it != als.end(); it++)
            {
                float newPant;
                cin >> newPant;
                Medidas aux;
                aux = it->getMedidas();
                aux.setPanturrilha(newPant);
                it->setMedidas(aux);
                cout << "Panturrilha alterada com sucesso!" << "\n";
                break;
            }
        }
        else
        {
            cout << "Informação inválida" << "\n";
            return;
        }
}

void Gerenciamento :: menu()
{
    int escolha;

    while(1)
    {          
        cout << "\n" << setw(15) << "MENU" << endl;
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
            removerAluno(remo, personal.aluno);
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
