#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

struct Produto{
    int id;
    string name;
    float price;
};

int main(){

    Produto p1;

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
            case 1:{
                ofstream archive("produtos.txt", ios::app);

                cout << "-----------------------------------------------------------" << endl;
                cout << "------ Inserir produto ------" << endl;
                cout << "Digite o ID do produto: ";
                cin >> p1.id;
                cout << "Digite o nome do produto: ";
                cin.ignore();
                getline(cin, p1.name);
                cout << "Digite o preco do produto: ";
                cin >> p1.price;
                cout << "-----------------------------------------------------------" << endl;

                archive << p1.id << ";" << p1.name << ";" << p1.price << ";" << endl ;
                archive.close();
                break;
            }

            case 2:{
                ifstream archive("produtos.txt");

                cout << "-----------------------------------------------------------" << endl;
                cout << "------ Listar todos ------" << endl;
                string linha;
                while (getline(archive, linha)) {
                    stringstream ss(linha);
                    string idStr, nome, precoStr;
                    getline(ss, idStr, ';');
                    getline(ss, nome, ';');
                    getline(ss, precoStr, ';');
                    cout << idStr << " - " << nome << " - " << precoStr << endl;
                }

                cout << "-----------------------------------------------------------" << endl;
                archive.close();
                break;
            }

            case 3:{
                ifstream archive("produtos.txt");
                string nomeBusca;

                cout << "-----------------------------------------------------------" << endl;
                cout << "------ Buscar por nome ------" << endl;
                cout << "Digite o nome do produto a buscar: ";
                cin.ignore();
                getline(cin, nomeBusca);

                string linha;
                bool encontrado = false;
                while (getline(archive, linha)) {
                    stringstream ss(linha);
                    string idStr, nome, precoStr;
                    getline(ss, idStr, ';');
                    getline(ss, nome, ';');
                    getline(ss, precoStr, ';');

                    if (nome == nomeBusca){
                        cout << "- ID " << idStr << " " << nome << endl;
                        encontrado = true;
                    }
                }

                if (!encontrado){
                    cout << "Produto nao encontrado." << endl;
                }


                cout << "-----------------------------------------------------------" << endl;
                archive.close();
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