#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main (){
    ifstream arq;
    arq.open("dados.txt");
    
    if (!arq){
        cout<<"Erro ao abrir o arquivo!"<<endl;
    }

    string linha;
    while (getline(arq, linha)){
        cout<<linha<<endl;
    }

    return EXIT_SUCCESS;
}