#include <iostream>
using namespace std;
void dobra (float *a);

int main(){
    cout<<"6) Crie uma funcao dobra que recebe um valor ponteiro de float e dobra seu valor retornando o valor em dobro na mesma variável"<<endl;
    float e, *pntre = &e;

    cout<<"Digite o valor de E: ";
    cin>>*pntre;

    dobra(pntre);

    cout<<"Valor de E duplicado: " << *pntre<< endl << endl;  
    
    return EXIT_SUCCESS;
}

void dobra (float *a){
    *a = *a * 2;
}