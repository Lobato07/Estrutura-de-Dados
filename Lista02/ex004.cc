#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    ofstream entrada;
    entrada.open("entrada.txt");
    
    entrada << "teste" << endl;
    entrada << "pindamonhogaba" << endl;
    entrada.close();

    ifstream leitura("entrada.txt");
    string linha;
    ofstream saida("saida.txt");

    while(getline(leitura,linha)){
        saida << linha << endl;
    }

    entrada.close();
    saida.close();
    return EXIT_SUCCESS;
}