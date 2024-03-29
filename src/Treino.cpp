#include "../includes/Treino.h"
#include <iostream>
using namespace std;

Treino::Treino()
{
    A = tipo();
    B = tipo();
    C = tipo();
}
Treino::~Treino(){}

Treino::Treino(tipo a, tipo b, tipo c)
{
    A = a;
    B = b;
    C = c;
}

void Treino::montarTreino()
{
    int e;

    cout << "\nTreino A:\n" << endl;
    cout << "Quantos exercícios: ";
    cin >> e;

    for(int i= 0; i<e; i++)
    {
        cout << "\nExercício: ";
        cin.ignore();
        getline(cin, A.exercicio[i].descricao);
        cout << "Repetições: ";
        cin >> A.exercicio[i].repeticoes;
        cout << "Séries: ";
        cin >> A.exercicio[i].series;
        cout << "Descanso(seg): ";
        cin >> A.exercicio[i].descanso;
    }

    cout << "\nTreino B:\n" << endl;
    cout << "Quantos exercícios: ";
    cin >> e;

    for(int i= 0; i<e; i++)
    {
        cout << "\nExercício: ";
        cin.ignore();
        getline(cin, B.exercicio[i].descricao);
        cout << "Repetições: ";
        cin >> B.exercicio[i].repeticoes;
        cout << "Séries: ";
        cin >> B.exercicio[i].series;
        cout << "Descanso(seg): ";
        cin >> B.exercicio[i].descanso;
    }

    cout << "\nTreino C:\n" << endl;
    cout << "Quantos exercícios: ";
    cin >> e;

    for(int i= 0; i<e; i++)
    {
        cout << "Exercício: ";
        cin.ignore();
        getline(cin, C.exercicio[i].descricao);
        cout << "Repetições: ";
        cin >> C.exercicio[i].repeticoes;
        cout << "Séries: ";
        cin >> C.exercicio[i].series;
        cout << "Descanso(seg): ";
        cin >> C.exercicio[i].descanso;
    }
}

void Treino::exibirTreinoA()
{
    if(A.exercicio[0].repeticoes == 0)
    {
        cout << "Treino A não cadastrado\n" << endl;
        return;
    }

    else 
    {
        cout << "--------- Treino A ---------\n" << endl;

        for(int i = 0; i<15; i++)
        {
            if(A.exercicio[i].repeticoes == 0)
            {
                cout << "----------------------------\n" << endl;
                break;
            }
            else
            {
                cout << i+1 << " - " << A.exercicio[i].descricao << endl;
                cout << "Repeticoes: " << A.exercicio[i].repeticoes << "       " << "Series: " << A.exercicio[i].series << "       " << "Descanso: " << A.exercicio[i].descanso << "seg\n" << endl;

            }
        }
    }
}

void Treino::exibirTreinoB()
{
    if(B.exercicio[0].repeticoes == 0)
    {
        cout << "Treino B não cadastrado\n" << endl;
        return;
    }

    else 
    {
        cout << "--------- Treino B ---------\n" << endl;

        for(int i = 0; i<15; i++)
        {
            if(B.exercicio[i].repeticoes == 0)
            {
                cout << "----------------------------\n" << endl;
                break;
            }
            else
            {
                cout << i+1 << " - " << B.exercicio[i].descricao << endl;
                cout << "Repeticoes: " << B.exercicio[i].repeticoes << "       " << "Series: " << B.exercicio[i].series << "       " << "Descanso: " << B.exercicio[i].descanso << "seg\n" << endl;

            }
        }
    }
}

void Treino::exibirTreinoC()
{
    if(C.exercicio[0].repeticoes == 0)
    {
        cout << "Treino C não cadastrado\n" << endl;
        return;
    }

    else 
    {
        cout << "--------- Treino C ---------\n" << endl;

        for(int i = 0; i<15; i++)
        {
            if(C.exercicio[i].repeticoes == 0)
            {
                break;
            }
            else
            {
                cout << i+1 << " - " << C.exercicio[i].descricao << endl;
                cout << "Repeticoes: " << C.exercicio[i].repeticoes << "       " << "Series: " << C.exercicio[i].series << "       " << "Descanso: " << C.exercicio[i].descanso << "seg\n" << endl;

            }
        }
    }
}

void Treino::alterarTreino()
{
    string t;
    int e;

    cout << "Qual treino deseja alterar? (A, B ou C)\n";
    getline(cin, t);
    cout << endl;

    while(1)
    {
        if((t == "A")||(t == "a"))
        {
            exibirTreinoA();

            cout << "\nQual exercício deseja alterar? (Índice)" << endl;
            cin >> e;

            if((e<=0)||(e>15))
            {
                cout << "Exercício inválido ou inexistente. Insira um exercício válido: ";
                cin >> e;
            }

            cout << "\n\nNovo Exercício: ";
            cin.ignore();
            getline(cin,A.exercicio[e-1].descricao);

            cout << "\nRepetições: ";
            cin >> A.exercicio[e-1].repeticoes;

            cout << "\nSeries: ";
            cin >> A.exercicio[e-1].series;

            cout << "\nDescanso: ";
            cin >> A.exercicio[e-1].descanso;

            break;
        }

        else if((t == "B")||(t == "b"))
        {
            exibirTreinoB();

            cout << "\nQual exercício deseja alterar? (Índice)" << endl;
            cin >> e;

            if((e<=0)||(e>15))
            {
                cout << "Exercício inválido ou inexistente. Insira um exercício válido: ";
                cin >> e;
            }

            cout << "\n\nNovo Exercício: ";
            cin.ignore();
            getline(cin,B.exercicio[e-1].descricao);

            cout << "\nRepetições: ";
            cin >> B.exercicio[e-1].repeticoes;

            cout << "\nSeries: ";
            cin >> B.exercicio[e-1].series;

            cout << "\nDescanso: ";
            cin >> B.exercicio[e-1].descanso;

            break;
        }

        else if((t == "C")||(t == "c"))
        {
            exibirTreinoB();

            cout << "\nQual exercício deseja alterar? (Índice)" << endl;
            cin >> e;

            if((e<=0)||(e>15))
            {
                cout << "Exercício inválido ou inexistente. Insira um exercício válido: ";
                cin >> e;
            }

            cout << "\n\nNovo Exercício: ";
            cin.ignore();
            getline(cin,C.exercicio[e-1].descricao);

            cout << "\nRepetições: ";
            cin >> C.exercicio[e-1].repeticoes;

            cout << "\nSeries: ";
            cin >> C.exercicio[e-1].series;

            cout << "\nDescanso: ";
            cin >> C.exercicio[e-1].descanso;

            break;
        }

        else
        {
            cout << "Treino inválido ou inexistente. Insira um treino válido (A,B ou C):" << endl;
            getline(cin, t);
        }
    }

    cout << "Alteração realizada com sucesso!" << endl;
}

void Treino::adicionarExercicio()
{
    string t;

    cout << "Em qual treino você deseja adicionar um exercício? (A, B ou C)" << endl;
    getline(cin, t);
    cout << endl;

    while(((t == "A")||(t == "a"))&&((t == "A")||(t == "a"))&&((t == "A")||(t == "a")))
    {
        cout << "Treino inválido ou inexistente. Insira um treino válido (A,B ou C):" << endl;
        getline(cin, t);
    }

    if((t == "A")||(t == "a"))
    {
        for(int i = 0; i<15; i++)
        {
            if(A.exercicio[i].repeticoes == 0)
            {
                cout << "\nExercício: ";
                getline(cin,A.exercicio[i].descricao);

                cout << "\nRepetições: ";
                cin >> A.exercicio[i].repeticoes;

                cout << "\nSeries: ";
                cin >> A.exercicio[i].series;

                cout << "\nDescanso: ";
                cin >> A.exercicio[i].descanso;

                break;
            }
        }
    }

    else if((t == "B")||(t == "b"))
    {
        for(int i = 0; i<15; i++)
        {
            if(A.exercicio[i].repeticoes == 0)
            {
                cout << "\nExercício: ";
                getline(cin,B.exercicio[i].descricao);

                cout << "\nRepetições: ";
                cin >> B.exercicio[i].repeticoes;

                cout << "\nSeries: ";
                cin >> B.exercicio[i].series;

                cout << "\nDescanso: ";
                cin >> B.exercicio[i].descanso;

                break;
            }
        }
    }

    else if((t == "C")||(t == "c"))
    {
        for(int i = 0; i<15; i++)
        {
            if(A.exercicio[i].repeticoes == 0)
            {
                cout << "\nExercício: ";
                getline(cin,C.exercicio[i].descricao);

                cout << "\nRepetições: ";
                cin >> C.exercicio[i].repeticoes;

                cout << "\nSeries: ";
                cin >> C.exercicio[i].series;

                cout << "\nDescanso: ";
                cin >> C.exercicio[i].descanso;

                break;
            }
        }
    }
}

void Treino::removerExercicio()
{
    string t;

    cout << "Em qual treino você deseja remover um exercício? (A, B ou C)" << endl;
    getline(cin, t);
    cout << endl;

    while(((t == "A")||(t == "a"))&&((t == "A")||(t == "a"))&&((t == "A")||(t == "a")))
    {
        cout << "Treino inválido ou inexistente. Insira um treino válido (A,B ou C):" << endl;
        getline(cin, t);
    }

    if((t == "A")||(t == "a"))
    {
       exibirTreinoA();

        int e;

        cout << "Qual exercício deseja remover? (Índice)" << endl;
        cin >> e;

        while((e<=0)||(e>15))
        {
            cout << "Exercício inválido ou inexistente. Insira um exercício válido: ";
            cin >> e;
        }

        A.exercicio[e-1].descricao = "";
        A.exercicio[e-1].repeticoes = 0;
        A.exercicio[e-1].series = 0;
        A.exercicio[e-1].descanso = 0;
    }

    else if((t == "B")||(t == "b"))
    {
       exibirTreinoB();

        int e;

        cout << "Qual exercício deseja remover? (Índice)" << endl;
        cin >> e;

        while((e<=0)||(e>15))
        {
            cout << "Exercício inválido ou inexistente. Insira um exercício válido: ";
            cin >> e;
        }

        B.exercicio[e-1].descricao = "";
        B.exercicio[e-1].repeticoes = 0;
        B.exercicio[e-1].series = 0;
        B.exercicio[e-1].descanso = 0;
    }

    else if((t == "C")||(t == "c"))
    {
       exibirTreinoC();

        int e;

        cout << "Qual exercício deseja remover? (Índice)" << endl;
        cin >> e;

        while((e<=0)||(e>15))
        {
            cout << "Exercício inválido ou inexistente. Insira um exercício válido: ";
            cin >> e;
        }

        C.exercicio[e-1].descricao = "";
        C.exercicio[e-1].repeticoes = 0;
        C.exercicio[e-1].series = 0;
        C.exercicio[e-1].descanso = 0;
    }
}

void Treino::exibir()
{
    cout << endl;
    exibirTreinoA();
    cout << endl;
    exibirTreinoB();
    cout << endl;
    exibirTreinoC();
}

void Treino::treinoDoDia(int i)
{
    if (i == 0)
        exibirTreinoA();

    else if (i == 1)
        exibirTreinoB();

    else if (i == 2)
        exibirTreinoC(); 
}

string Treino::toStringTreino()
{
    string treino;

    treino = "A";

    for(int i = 0; i<15; i++)
    {
        if(A.exercicio[i].repeticoes == 0)
        {
            break;
        }
        else
        {
            treino += "," + to_string(i+1) + "," + A.exercicio[i].descricao + "," + to_string(A.exercicio[i].repeticoes) + "," + to_string(A.exercicio[i].series) + "," + to_string(A.exercicio[i].descanso);
        }
    }

    treino += ",B";

    for(int i = 0; i<15; i++)
    {
        if(B.exercicio[i].repeticoes == 0)
        {
            break;
        }
        else
        {
            treino += "," + to_string(i+1) + "," + B.exercicio[i].descricao + "," + to_string(B.exercicio[i].repeticoes) + "," + to_string(B.exercicio[i].series) + "," + to_string(B.exercicio[i].descanso);
        }
    }

    treino += ",C";

    for(int i = 0; i<15; i++)
    {
        if(C.exercicio[i].repeticoes == 0)
        {
            break;
        }
        else
        {
            treino += "," + to_string(i+1) + "," + C.exercicio[i].descricao + "," + to_string(C.exercicio[i].repeticoes) + "," + to_string(C.exercicio[i].series) + "," + to_string(C.exercicio[i].descanso);
        }
    }


    return treino;
}

tipo Treino::getTreinoA()
{
    return A;
}

tipo Treino::getTreinoB()
{
    return B;
}

tipo Treino::getTreinoC()
{
    return C;
}

void Treino::setTreinoA(tipo a)
{
    A = a;
}

void Treino::setTreinoB(tipo b)
{
    B = b;
}

void Treino::setTreinoC(tipo c)
{
    C = c;
}
