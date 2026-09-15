#include <iostream>
using namespace std;

int main(){
    int i = 0, *p =& i;

    int **q =& p;

    cout << "Digite o valor de i: ";
    cin >> i;

    cout << **q << endl;

    
    return EXIT_SUCCESS;
}