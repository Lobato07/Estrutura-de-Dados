#include <iostream>
#include <string>
using namespace std;

struct Produto{
    int id;
    string nome;
    float preco;
};

int main(){

    int option = 0;

    do{

        cout << "------ Digite a opcao que desejas ------ " << endl;
        cout << "(1) Inserir produto." << endl;
        cout << "(2) Listar todos." << endl;
        cout << "(3) Buscar por nome." << endl;
        cout << "(4) Sair." << endl;
        cout << "Qual sua escolha: ";
        cin >> option;

        switch(option){
            case 1:
                cout << "Inserir produto" << endl;
                break;
            
            case 2:
                cout << "Listar todos" << endl;
                break;
            
            case 3:
                cout << "Buscar por nome" << endl;
                break;
            
            case 4:
                cout << "Saindo..." << endl;
                break;

            default:
                cout << "Valor invalido!" << endl;
                break;
        }

    }while (option != 4);
    

    return EXIT_SUCCESS;
}