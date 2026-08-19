#include <iostream>
using namespace std;

int tamanho(string texto){
    int *ptr = new int;
    for (*ptr = 0; texto[*ptr] != '\0'; (*ptr)++);
    int tamanho = *ptr;
    delete ptr;
    return tamanho;
}

int main(){
    string teste;

    cout << "7) Crie uma funcao que usando ponteiros e nao utilizando nenhuma outra funcao retorne o tamanho de uma string" << endl << endl;

    cout << "Digite uma palavra: ";
    cin >> teste;


    int *ponteiro = new int;
    *ponteiro = tamanho(teste);

    cout << "Tamanho da string:" << *ponteiro << endl;

    delete ponteiro;

    return EXIT_SUCCESS;
}