#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int n;
    cout << "Digite o tamanho do vetor: ";
    cin >> n;
    int* v = new int[n];

    for (int i = 0; i < n; i++){
        cout <<"Digite a posicao"<<i+1<<": ";
        cin >> v[i];
    }

    for (int i = 0; i < n; i++){
        cout<< "v[" << i << "] = " << v[i] << endl;
    }

    delete [] v;
    return EXIT_SUCCESS;
}