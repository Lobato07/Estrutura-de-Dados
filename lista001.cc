#include <iostream>
using namespace std;

int main(){

    cout << "1) Declare um inteiro, crie um ponteiro para ele e imprima o valor e o endereço." << endl;
    int a = 5, *pntr = &a;

    cout << "Valor de A: " << a << endl;
    cout<<"Endereco na memoria: " << pntr << endl << endl;
// ------------------------------------------------------------------------------------------------------
    cout << "2) Modifique o valor de uma variável usando seu ponteiro" << endl;
    int b = 3, *pntrb = &b;
    cout<<"Valor de B: " << b << endl;

    *pntrb = 20;
    cout<<"Valor alterado de B: "<< *pntrb << endl << endl;
// ------------------------------------------------------------------------------------------------------
    cout<<"3) Use um ponteiro para ler um valor digitado pelo usuário."<<endl;
    int c, *pntrc = &c;

    cout<<"Digite um valor para o ponteiro: ";
    cin >> *pntrc;

    cout<<"Valor do ponteiro: "<< *pntrc << endl<< endl; 
// ------------------------------------------------------------------------------------------------------
    cout << "4) Crie um array e percorra-o usando ponteiros." << endl;
    int d, array[5] = {7, 4, 2, 1, 9}, *pntrd = &d;

    for (int i = 0; i < 5; i++){
        d = array[i];
        cout<<*pntrd<<endl;
    }
    cout<<endl<<endl;
// ------------------------------------------------------------------------------------------------------
    cout<<"5) Crie uma função que some dois números usando uma função que recebe ponteiros e retorne o resultado como um ponteiro"<<endl;

    return EXIT_SUCCESS;
}