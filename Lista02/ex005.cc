#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

int main(){
    ifstream arquivo("dados.txt");
    
    if (!arquivo.is_open()) {
        cout << "Erro ao abrir o arquivo!" << endl;
    }

    string linha;
    int totalLinhas = 0;
    int totalPalavras = 0;
    int totalCaracteres = 0;

    while (getline(arquivo, linha)) {
        totalLinhas++;
        totalCaracteres += linha.size();

        istringstream streamLinha(linha);
        string palavra;
        while (streamLinha >> palavra) {
            totalPalavras++;
        }
    }

    arquivo.close();

    cout << "Linhas: " << totalLinhas << endl;
    cout << "Palavras: " << totalPalavras << endl;
    cout << "Caracteres: " << totalCaracteres << endl;

    return 0;
}