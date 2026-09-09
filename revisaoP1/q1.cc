#include <iostream>
using namespace std;

int main(){
    int i = 5, *pont =& i;

    cout << *pont << endl;
    cout << pont << endl;
    
    return EXIT_SUCCESS;
}