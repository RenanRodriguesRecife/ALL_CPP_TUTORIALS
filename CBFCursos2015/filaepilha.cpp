#include <iostream>
#include <stack>
#include <queue>
#include <list>

using namespace std;

int main(){

    list<int> aula;
    int tam;
    list<int>::iterator it;

    tam=10;
    for(int i=0; i<tam; i++){
        aula.push_back(i);
    }

    it=aula.begin();
    advance(it,5);

    aula.insert(it,0);

    cout << "tamanho da lista: " << aula.size() <<"\n\n";

    tam=aula.size();
    for(int i=0; i<tam; i++){
        aula.front();
        cout << aula.front() << "\n";
        aula.pop_front();
    }
    system("calc");
/*
    queue <string> cartas;
    cartas.push("rei");
    cartas.push("rainha");
    cartas.push("pricesa");
    cartas.push("clérigo");


    cout <<"Tamnaho da fila: " << cartas.size() << "\n";
    cout << "Primeira carta: " << cartas.front() << "\n";
    cout << "Ultima carta: " << cartas.back() << "\n";

    while(!cartas.empty()){
        cout << "Primeira carta: " << cartas.front() << "\n";
        cartas.pop();
    }


/*
    stack <string> cartas;
    cartas.push("rei");
    cartas.push("sobrinho");
    cartas.push("tio");
    cartas.push("neto");

    cout << "tamanho da pilha: " << cartas.size() << "\n";
    cout << "carta do topo: " << cartas.top() << "\n";


    cartas.pop();
    cartas.pop();

    cout << cartas.top();
    cout << "A pilha está vazio: " << cartas.empty();
    while(!cartas.empty()){
        cartas.pop();
    }
     cout << "A pilha está vazio: " << cartas.empty();

  */
    return 0;

}
