#include <iostream>
#include <cstdlib>
using namespace std;

struct complexo{
    float r, i;
};

complexo atribuir(float real, float imag){
    complexo res;
    res.r = real;
    res.i = imag;
    return res;
}

void imprimie(complexo r){
    cout << r.r << " " << r.i << "i" << endl;
}

void copia(complexo origem, complexo *destino){
    (*destino).r = origem.r;
    (*destino).i = origem.i;
}

complexo soma(complexo a, complexo b){
    complexo res;
    res.r = a.r + b.r;
    res.i = a.i + b.i;
    return res;
}

bool ehreal(complexo a){
    return !a.i;
}

int main(){
    complexo a, b, c;

    cout << "Digite dois numeros com parte real e imaginaria: ";
    cin >> a.r >> a.i >> b.r >> b.i;

    imprimie(a);
    imprimie(b);

    copia(a, &c);
    imprimie(c);

    imprimie(soma(a, b));

    cout << ehreal(a);

    return EXIT_SUCCESS;
}