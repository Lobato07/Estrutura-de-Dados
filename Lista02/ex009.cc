#include <stdio.h>
#include <fstream>
#include <string>
#include <locale>
usign namespace std;

int main(){

    locale:global(locale(""));

    int id = 0, opcao = 0;
    float preco = 0;
    string nome;

    ofstream file("produtos.txt");

    do{

        cout << "Escolha uma opção: " << endl;
        cout << "(1) Inserir novo produto" << endl;
        cout << "(2) Listar todos os produtos" << endl;
        cout << "(3) Buscar por nome" << endl;
        cout << "(4) Sair" << endl;
        cout << "-------------------------------------" << endl;
        cout << "Digite o número desejado:"
        cin >> opcao;

        if ( opcao == 1){
            cout 
        }

    }while(opcao != 4);

    cout << "Programa encerrado com sucesso." << endl;
    
    return EXIT_SUCCESS;
}