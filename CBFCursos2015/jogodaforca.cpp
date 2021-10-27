#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main(){

    string nome;
    char letra;
    int i;
    string resposta;

    cout << "Entre com um nome: ";
    cin >> nome;
    system("cls");

    for(i=0; i<nome.size();i++){
        resposta[i] = '_' ;
    }

    do{
        cout << "Entre com uma letra: ";
        cin >> letra;
        //system("cls");

        for(i=0; i< nome.size();i++){
            if(nome[i] == letra){
                resposta[i] = nome[i];
            }
            cout << resposta[i];
        }

        cout << "\n";
    }while(1);

}


