#include <iostream>
#include <cstdlib>

#define renan cout << "Renan";
using namespace std;

int main(){

    int n1, n2, res;
    char opc;

    renan
    inicio:
    system("cls");
    cout << "Digite o valor da nota 1:";
    cin >> n1;
    cout << "Digite o valor da nota 2:";
    cin >> n2;

    res=n1+n2;

    if(res >= 60){
        cout << "\nAluno Aprovado\n";

    }else if(res >= 40){
        cout << "\nAluno em Recupera��o\n";
    }else{
        cout << "\nAluno Reprovado\n";
    }

    cout << "\nDigitar outras notas?[s/n]: ";
    cin >> opc;

    if(opc == 's' or opc=='S'){
        goto inicio;
    }

    return 0;
}

