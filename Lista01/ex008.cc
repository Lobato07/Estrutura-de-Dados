#include <iostream>
#include <cstring>
using namespace std;

void inverte(char* entrada, char* saida){
    int tam = strlen(entrada); // Para usar o "strlen", preciso incluir o cstring
    for (int i = 0; i < tam; i++){
        saida[tam-1-i] = entrada[i];
    }
    saida[tam] = entrada[tam]; // copia o '\0'
}

int main(){
    char entrada[100], saida [100];
    cout<< "Digite a entrada: ";
    cin >> entrada;

    inverte(entrada,saida);
    cout << "A saida invertida eh: " << saida << endl;
}