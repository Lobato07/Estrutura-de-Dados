#include <iostream>
#include <locale>
using namespace std;

int main(){

    locale::global(locale("pt_BR.UTF-8"));

    // Declare um inteiro, crie um ponteiro para ele e imprima o valor e o endereço.

    int var1 = 10;
    int *pont;
    
    pont =& var1;

    cout << "Valor do ponteiro: " << *pont << endl;
    cout << "Endereço na memoria do ponteiro: " << pont << endl;
    
    return EXIT_SUCCESS;
}