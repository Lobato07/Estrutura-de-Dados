//Hello wolrd!
// #include <iostream> // Biblioteca padrão do c++, não precisa mais do stdio.h, usa cout e cin (respectivamente printf e scanf)
// using namespace std;
// o using namespace std faz com que o compilador entenda a biblioteca que está usando, sendo a std a padrão.
// caso nao use, terias de digitar std::cout
// isso conta pra qualquer biblioteca!!!

// int main(){
//     cout << "Hello world!" << endl; // -> endl é o \n

//     return 0;
// }


// Algoritmo de soma:
// #include <iostream>
// using namespace std;

// int main(){
//     int numero1, numero2, soma;

//     cout << "Digite o primeiro numero: " << endl; // cout - printf
//     cin >> numero1; // cin - scanf
//     cout << "Digite o segundo numero: " << endl;
//     cin >> numero2;
// formula cin: cin (recolhendo) >> variavel;

//     soma = numero1+numero2;

//     cout << "A soma eh: " << soma << endl;
// para cout a formula é simples: cout (pra fora) << "qualquer texto" (se for texto, tem que estar entre aspas) << variavel (se quiser adicionar uma variavel) << "outro texto" << endl (pra finalizar e quebrar a linha)

// OBS: lembrar dos símbolos de << e >>. DICA: cout sempre aponta pra FORA (<<) e cin pra DENTRO (>>)
// E NAO PRECISA MAIS DECLARAR QUE TIPO DE VALOR VAI ENTRAR NA VARIÁVEL!!!! ELE IDENTIFICA SÓZINHO :D


//     return EXIT_SUCCESS; // -> isso é o return 0 do C++
// }


// Algoritmo que calcula o maior valor de uma lista:
// #include <iostream>
// using namespace std;

// int main(){
//     int maximo = INT_MIN, tam, v[1000];

//     cout<<"Digite o tamanho do vetor: "<<endl;
//     cin>>tam;
    
//     for (int i = 0; i < tam; i++){
//         cout<<"Digite o valor da posicao: "<<i+1<<endl;
//         cin>> v[i];

//         if(v[i] > maximo){
//             maximo = v[i];
//         }
//     }
//     cout<<"O valor maximo é: "<<maximo<<endl;
    
//     return EXIT_SUCCESS;
// }

// Exemplo de namespace
// #include <iostream>
// using namespace std;
// namespace first_space{
//     void func(){
//         cout<<"Inside first_space"<<endl;
//     }
// }
// namespace second_space{
//     void func(){
//         cout<<"Inside second_space"<<endl;
//     }
// }
// using namespace first_space; // definine o namespace padrão.

// int main(){
//     // first_space::func(); // Chama a função do primeiro namespace
//     // second_space::func(); // Chama a função do segundo namespace

//     func(); // aqui ta chamando a função do primeiro namespace!

//     return EXIT_SUCCESS;
// }

//Tipagem automática:
// #include <iostream>
// #include <typeinfo> // biblioteca para usar o typeid
// using namespace std;

// int main(){

//     auto a = 1 + 2; // assume int
//     cout<<"tipo de a: "<< typeid(a).name()<<endl;
//     auto b = 1 + 1.2; // assume float
//     cout<<"tipo de a: "<< typeid(b).name()<<endl;
//     auto c = "s"; // assume char
//     cout<<"tipo de a: "<< typeid(c).name()<<endl;
    
//     return EXIT_SUCCESS;
// }

// No C++ pode-se utilizar and no lugar de && e or no lugar de ||
// if ( (a>3)and(b>2)or(b>10) ) Idêntico a ( (a>3)&&(b>2) || (b>10) )


// (nota >= 6? r="aprovado" :r ="Reprovado");
//  condição de teste / caso verdadeiro / caso falso