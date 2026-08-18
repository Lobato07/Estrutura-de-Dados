#include <iostream>
using namespace std;

int main(){
    cout<<"3) Use um ponteiro para ler um valor digitado pelo usuario."<<endl;
    int c, *pntrc = &c;

    cout<<"Digite um valor para o ponteiro: ";
    cin >> *pntrc;

    cout<<"Valor do ponteiro: "<< *pntrc << endl<< endl; 
    
    return EXIT_SUCCESS;
}