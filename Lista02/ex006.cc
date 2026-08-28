#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    int contador = 1, numeros = 0;

    ofstream entrada("numeros.txt");
    
    do{
        cout<< "Digite 10 numeros("<< contador << "): ";
        cin >> numeros;

        entrada << numeros << " " ;

        contador++;
    }while(contador <= 10);

    entrada.close();

    ifstream saida("numeros.txt");

    int numeroLido = 0;
    int maior = 0, menor = 0;
    int posicao = 1;

    cout << "\nNumeros lidos do arquivo: ";

    while (saida >> numeroLido) {
        cout << numeroLido << " ";

        if (posicao == 1) {
            maior = numeroLido;
            menor = numeroLido;
        }
        else {
            if (numeroLido > maior) {
                maior = numeroLido;
            }
            if (numeroLido < menor) {
                menor = numeroLido;
            }
        }

        posicao++;
    }

    cout << "\nMaior numero: " << maior << endl;
    cout << "Menor numero: " << menor << endl;

    saida.close();
    return EXIT_SUCCESS;
}
