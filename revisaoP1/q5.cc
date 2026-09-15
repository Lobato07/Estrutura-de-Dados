#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

struct Departamento{
    string nome;
    int codigo;
};

struct Funcionario{
    string nome;
    float salario;
    Departamento departamento;
};


int main(){ 
    int option = 0, counter = 0;
    Funcionario func[5];

    do{

        cout << "------ Digite a opcao que desejas ------ " << endl;
        cout << "(1) Cadastrar novo funcionario" << endl;
        cout << "(2) Listar funcionarios." << endl;
        cout << "(3) Buscar por departamento." << endl;
        cout << "(4) Sair." << endl;
        cout << "Qual sua escolha: ";
        cin >> option;

        switch(option){
            case 1:{
                if(counter >= 5){
                    cout << "Limite de funcionarios atingidos!" << endl;
                    break;
                }

                cout << "-----------------------------------------------------------" << endl;
                cout << "------ Cadastrar Funcionario ------" << endl;
                cout << "Digite o nome do funcionario: ";
                cin.ignore();
                getline(cin, func[counter].nome);
                cout << "Digite o salario do funcionario: ";
                cin >> func[counter].salario;
                cout << "Digite o departamento que trabalha: ";
                cin.ignore();
                getline(cin, func[counter].departamento.nome);
                cout << "Digite o codigo do departamento: ";
                cin >> func[counter].departamento.codigo;
                cout << "-----------------------------------------------------------" << endl;

                counter++;
                break;
            }

            case 2:{
                cout << "-----------------------------------------------------------" << endl;
                cout << "------ Listar Funcionarios ------" << endl;

                for (int i = 0; i < counter; i++){
                    cout << "Nome: " << func[i].nome << endl;
                    cout << "Salario: " << func[i].salario << endl;
                    cout << "Departamento: " << func[i].departamento.nome << "(codigo " << func[i].departamento.codigo << ")"<< endl << endl; 
                }
                cout << "-----------------------------------------------------------" << endl;

                break;
            }

            case 3:{
                string deptoBusca;

                cout << "-----------------------------------------------------------" << endl;
                cout << "------ Buscar por Departamento ------" << endl;
                cout << "Digite o nome do departamento: ";
                cin.ignore();
                getline(cin, deptoBusca);

                float somaSalarios = 0;
                int quantidade = 0;

                for (int i = 0; i < counter; i++){
                    if (func[i].departamento.nome == deptoBusca){
                        cout << "Nome: " << func[i].nome << "- Salario: " << func[i].salario << endl;
                        somaSalarios += func[i].salario;
                        quantidade++;
                    }
                }

                if (quantidade > 0){
                    float media = somaSalarios / quantidade;
                    cout << "Media salarial do departamento: " << media << endl;
                }
                else{
                    cout << "Nenhum funcionario encontrado nesse departamento." << endl;
                }

                cout << "-----------------------------------------------------------" << endl;
                break;
            }

            case 4:{
                cout << "Saindo..." << endl;
                break;
            }

            default:{
                cout << "Valor invalido!" << endl;
                break;
            }
        }

    }while (option != 4);
    
    return EXIT_SUCCESS;
}