#include <iostream>
using namespace std;

int main(){

    int d, array[5] = {2, 7, 1, 3, 9}, *pont;
    pont =& d;

    for (int i = 0; i < 5; i++ ){
        d = array[i];
        cout << *pont << endl;
    }

    return EXIT_SUCCESS;
}