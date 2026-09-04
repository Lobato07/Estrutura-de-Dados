#include <iostream>
#include <locale>
using namespace std;

int main(){

    locale::global(locale("pt_BR.UTF-8"));
    
    // Use um ponteiro para ler um valor digitado pelo usuário.

    int var = 0;
    int *pont;

    cout << "Digite um valor: ";
    cin >> var ;

    pont =& var;

    cout << "Valor digitado: " << *pont << endl;
    
    return EXIT_SUCCESS;
}