#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

int main(){
    int qtdalunos = 0, idade = 0, contador = 0;
    float nota;
    string nome;

    ofstream file("alunos.txt");

    cout << "Quantos alunos deseja registrar: ";
    cin >> qtdalunos ;

    file << left << setw(15) << "Aluno" << right << setw(10) << "Idade" << right << setw(10) << "Nota" << endl;

    do{
        cout<< "Digite o nome do aluno: ";
        cin >> nome;
        cout << "Digite a idade do aluno: ";
        cin >> idade;
        cout << "Digite a nota do aluno: ";
        cin >> nota;

        cout << "--------------------------------------" << endl;

        file << left << setw(15) << nome << right << setw(10) << idade << right << setw(10) << nota << endl; 

        contador++;
    }while( contador < qtdalunos);

    file.close();
    return EXIT_SUCCESS;
}