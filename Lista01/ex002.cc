#include <iostream>
using namespace std;

int main (){
    cout << "2) Modifique o valor de uma variável usando seu ponteiro" << endl;
    int b = 3, *pntrb = &b;
    cout<<"Valor de B: " << b << endl;

    *pntrb = 20;
    cout<<"Valor alterado de B: "<< *pntrb << endl << endl;

    return EXIT_SUCCESS;
}