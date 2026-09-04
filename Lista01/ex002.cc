#include <iostream>
#include <locale>
using namespace std;

int main(){

    locale::global(locale("pt_BR.UTF-8"));

    // Modifique o valor de uma variável usando seu ponteiro.

    int var1 = 5, var2 = 0;
    int *pont;

    pont =& var1;
    var2 = *pont;

    cout << "Valor da variável 2: " << var2 << endl;
    
    return EXIT_SUCCESS;
}