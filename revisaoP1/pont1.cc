#include <iostream>
using namespace std;

void frac(float num, int *inteiro, float *frac){

    *inteiro = (int) num;
    *frac = num - (*inteiro);

}

int main(){

    float num = 7.35, nfloat = 0;
    int nint = 0;

    frac(num, &nint, &nfloat);

    cout << nint << endl << nfloat ;
    
    return EXIT_SUCCESS;
}