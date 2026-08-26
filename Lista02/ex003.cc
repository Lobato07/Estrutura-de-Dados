#include <iostream>
#include <fstream>
using namespace std;

int main(){

    ifstream arq;
    arq.open("dados.txt");

    if(!arq){
        cout<<"Erro ao abrir o programa!"<<endl;
    }
    else{
        cout<<"Programa aberto com sucesso!"<<endl;
    }

    arq.close();
    return EXIT_SUCCESS;
}