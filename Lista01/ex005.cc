#include <iostream>
#include <locale>
using namespace std;

void *SomaPonteiros(int *a, int *b, int *resultado){
    *resultado = *a + *b;
    return resultado;
}

int main(){

    locale::global(locale("pt_BR.UTF-8"));

    // Crie uma função que some dois números usando uma função que recebe ponteiros e retorne o resultado como um ponteiro

    int x, y, res;

    cout << "Digite um valor: ";
    cin >> x;
    cout << "Digite um segundo valor: ";
    cin >> y;

    SomaPonteiros(&x, &y, &res);
    cout << res << endl;


    
    return EXIT_SUCCESS;
}