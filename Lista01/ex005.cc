#include <iostream>
using namespace std;
int somar (int a, int b);

int main(){
    cout<<"5) Crie uma funcao que some dois números usando uma funcao que recebe ponteiros e retorne o resultado como um ponteiro"<<endl;
    int f1 = 0, f2 = 0, f3 = 0, *pntr1 = &f1, *pntr2 = &f2, *pntr3 = &f3;

    cout<<"Digite o valor de A: ";
    cin >> *pntr1;
    cout<<"Digite o valor de B: ";
    cin >> *pntr2;

    f3 = somar(*pntr1, *pntr2);
    
    cout<<"O resultado da soma eh: "<< *pntr3 << endl << endl;
    
    return EXIT_SUCCESS;
}

int somar (int a , int b){
    return a + b;
}