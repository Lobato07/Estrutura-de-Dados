#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){

    ifstream arquivoEntrada("lista.txt");
    ofstream arquivoSaida("Lista_filtrada.txt");

    if (!arquivoEntrada.is_open()){
        cout << "Erro ao abrir lista.txt" << endl;
    }

    string palavraChave, linha;
    cout << "Digite a palavra a ser removida: ";
    cin >> palavraChave;

    while (getline(arquivoEntrada, linha)){
        if (linha.find(palavraChave) == string::npos){ // npos = No Position
            arquivoSaida << linha << endl;
        }
    }

    arquivoEntrada.close();
    arquivoSaida.close();

    cout << "Arquivo filtrado gerado com sucesso!" << endl;


    return EXIT_SUCCESS;
}