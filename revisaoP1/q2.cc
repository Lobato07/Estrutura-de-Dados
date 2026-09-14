#include <iostream>
#include <cmath>
using namespace std;

struct Ponto{

    int x;
    int y;

};

int main(){

    Ponto p1, p2;

    cout << "Digite o valor de X1: ";
    cin >> p1.x;
    cout << "Digite o valor de Y1: ";
    cin >> p1.y;
    cout << "Digite o valor de X2: ";
    cin >> p2.x;
    cout << "Digite o valor de Y2: ";
    cin >> p2.y;

    float result = 0, xFinal = 0, yFinal = 0;

    xFinal = p2.x - p1.x;
    xFinal *= xFinal;

    yFinal = p2.y - p1.y;
    yFinal *= yFinal;

    result = sqrt(xFinal+yFinal);
    
    cout << "A distancia eh: " << result << endl;


    return EXIT_SUCCESS;
}