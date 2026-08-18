#include <iostream>
using namespace std;

int main(){
    cout << "4) Crie um array e percorra-o usando ponteiros." << endl;
    int d, array[5] = {7, 4, 2, 1, 9}, *pntrd = &d;

    for (int i = 0; i < 5; i++){
        d = array[i];
        cout<<*pntrd<<endl;
    }
    cout<<endl<<endl;
    
    return EXIT_SUCCESS;
}