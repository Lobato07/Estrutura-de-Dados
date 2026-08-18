#include <iostream>
using namespace std;

int main(){

    cout << "1) Declare um inteiro, crie um ponteiro para ele e imprima o valor e o endereço." << endl;
    int a = 5, *pntr = &a;

    cout << "Valor de A: " << a << endl;
    cout<<"Endereco na memoria: " << pntr << endl << endl;

    return EXIT_SUCCESS;
}
