#include <iostream>
#include <cstddef>
using namespace std;

int main(){

    int var1 = 5;
    int *pont1;

    pont1 =& var1;

    cout << "Valor da variavel 1: " << var1 << endl;
    cout << "Endereço do primeiro byte da variavel: " << pont1 << endl;
    cout << "Valor guardado na memoria: " << *pont1 << endl;

    int var2 = 2;
    var2 = *pont1;

    cout << "Valor atribuido a variavel 2 pelo ponteiro: " << var2 << endl;

    *pont1 = 30;

    cout << "Novo valor da Variavel 1 pelo ponteiro: " << var1 << endl;

    var2 = 50;
    pont1 =& var2;

    cout << "Ponteiro1 aponta para outra variavel agora: " << *pont1 << endl;

    int *pont2;
    pont2 = NULL;
    cout << pont2 << endl;

    int *pont3 = new int;
    *pont3  = 35;

    cout << "Valor depositado dentro da variavel do pont3: " << *pont3 << endl;

    // *pont3 = *pont1; // aqui o *pont3 vira 50, que é o valor do *pont1;
    pont3 = pont1; // MUDANDO O ENDEREÇO!!!

    cout << "Novo valor do pont3: " << *pont3 << endl ;


    // teste

    return EXIT_SUCCESS;
}