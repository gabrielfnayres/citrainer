#include "../includes/Personal.h"
#include <iomanip>

Personal::Personal(){}

vector<Aluno> Personal::getAluno()
{
  return aluno;
}

Aluno Personal::getAlunoInd(int index)
{
  return aluno[index-1];
}

void  Personal::setAluno(Aluno aluno, int index)
{
  this->aluno[index] = aluno;
}

void Personal::cadastrarAluno(vector<Aluno> &als) 
{
  Aluno criado;
  string n;
  int idade;
  Medidas med;
  Endereco end;
  Treino tre;
  int numero;
  string data, bairro, cep, cidade, rua;
  float peso, altura, cintura, busto, quadril, coxa, panturrilha;
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
  end.setCep(cep);
  end.setCidade(cidade);
  end.setNumero(numero);
  end.setRua(rua);
  
  criado.setEndereco(end);
  
  criado.setNomeCompleto(n);  

  criado.setIdade(idade);
  criado.setDataDeNascimento(data);

  med.setPeso(peso);
  med.setAltura(altura);  
  med.setCintura(cintura);
  med.setBusto(busto);
  med.setCoxa(coxa);
  med.setPanturrilha(panturrilha);

  criado.setMedidas(med);
  
  als.push_back(criado);
}

void Personal::alterarAluno(string nome, vector<Aluno> &als)
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
    cin >> nom;
    
    for(Aluno a : als)
    {
      if(a.getNomeCompleto() == nome)
      {
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
            float newPeso;
            cin >> newPeso;
            a.getMedidas().setPeso(newPeso);
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
            float newAltura;
            cin >> newAltura;
            a.getMedidas().setAltura(newAltura);
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
            cin >> newCintura;
            a.getMedidas().setCintura(newCintura);
            cout << "Cintura alterada com sucesso! " << "\n";
            break;
          }
        }
      case 4:
        cout << "Inforeme o busto do aluno:" << "\n";
        for(Aluno a : als)
        {
          if(a.getNomeCompleto() == nome)
          {
            float newBusto;
            cin >> newBusto;
            a.getMedidas().setBusto(newBusto);
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
            cin >> newQuadril;
            a.getMedidas().setQuadril(newQuadril);
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
            cin >> newCoxa;
            a.getMedidas().setCoxa(newCoxa);
            cout << "Coxa alterada com sucesso!" << "\n";
            break;
          }
        }
      case 7:
        cout << "Informe a panturrilha do aluno: " << "\n";
        for(Aluno a : als)
        {
          float newPant;
          cin >> newPant;
          a.getMedidas().setPanturrilha(newPant);
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
          a.getTreino().alterarTreino();
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
          a.getTreino().adicionarExercicio();
          cout << "Execício adicionado com sucesso!" << endl;
          break;
        }
      }
    }
  }
}

Aluno Personal::buscarAluno(string nomeAluno, vector<Aluno> als)
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

void Personal::exibirTodosAlunos()
{
  for(Aluno a : aluno)
  {
    a.exibir();
    cout << "\n";
  }
}


void Personal::removerAluno(string nomeAluno, vector<Aluno> &als)
{
  vector<Aluno>::iterator a;
  Aluno temp;
  for(Aluno al : als)
  {
    if(al.getNomeCompleto() == nomeAluno)
    {
      temp = al;
      break;
    }
  }

  for(a = als.begin(); a != als.end(); a++)
  {
    if(a->getNomeCompleto() == temp.getNomeCompleto())
    {
      als.erase(a);
    }
  }
}
void Personal :: clearScreen() {
    cout << "\033[2J\033[1;1H";
}

void Personal::menu()
{
  int escolha;
  while(1){  
    clearScreen();
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
      cadastrarAluno(aluno);
    }
    else if(escolha == 3)
    {
      cout << "Informe o nome do aluno: " << "\n";
      string busca;
      getline(cin, busca);
      Aluno busc = buscarAluno(busca, aluno);

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
      alterarAluno(s, aluno);
    }
    else if(escolha == 4)
    {
      string remo;

      cout <<"Informe o aluno que deseja remover: " << "\n";
      cin.ignore();
      getline(cin, remo);
      removerAluno(remo, aluno);
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
  }
}

string Personal::toString()
{
  string str = "----- Alunos Cadastrados -----\n\n";

    for(Aluno a : aluno)
    {
      str += a.toStringPessoa() + "\n" + a.toStringAluno() + "\n";
    }

    str += "\n------------------------------";

  return str;
}
