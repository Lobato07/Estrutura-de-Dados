#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream arquivo;
    arquivo.open("dados.txt");

    if (!arquivo){
        cout << "Erro ao escrever o arquivo" << endl;
    }

    arquivo << "Boa noite!" << endl;
    arquivo << "Meu nome é Gustavo Lobato" << endl;
    arquivo << "Estou na TSI" << endl;
    
    cout << "Arquivo Criado com sucesso!" << endl ;

    arquivo.close();
    return EXIT_SUCCESS;
}