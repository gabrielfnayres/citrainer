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
using namespace std;

class Gerenciamento
{
    protected:
        Personal personal;
        
    public:
        void setPersonal(Personal personal);
        Personal getPersonal();
        
        void abrirArquivo();
        void salvarArquivo();
        void lerArquivo();
        void alterarMedidas(vector<Aluno> &als, string nome);
        void cadastrarAluno(vector<Aluno> &als);
        void alterarAluno(string nome, vector<Aluno> &als);
        Aluno buscarAluno(string nomeAluno, vector<Aluno> als);
        void exibirTodosAlunos(vector<Aluno> als);
        void removerAluno(string nome, vector<Aluno> &als);
        void menu();    
};
