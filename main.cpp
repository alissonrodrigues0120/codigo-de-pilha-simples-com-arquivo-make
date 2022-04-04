#include <iostream>
#include "pilha.h"
#include <string>

using namespace std;

int main(){
    pilha stacky;
    cout << "lista de comando: " << endl 
        << "add: adicionar um elemento na pilha"<< endl
        << "remove: remover o primeiro elemento da pilha" << endl
        << "empty: verificar se a pilha esta vazia" << endl
        << "top: retornar o primeiro elemento da pilha" << endl
        << "size: retornar o tamanho da pilha" << endl
        << "imprimir: mostrar a pilha" << endl
        << "sair: acabar o programa" << endl;

    while(true){
        string comando;
        getline(cin, comando);

        if(comando=="add"){
            cout << "Quantos elementos quer adicionar ?"<<endl;
            int k;
            cin >> k;
            int v[k];
            cout << "insira os elementos:" << endl;
            for(int i=0;i<k;i++){
                cin >> v[i];
            }  
            
            for(int i=0;i<k;i++){
                stacky.add(v[i]);
            } 
            cout << "ok"<< endl; 

        }else if(comando=="remove"){
            stacky.remove();
            cout << "ok"<< endl; 

        }else if(comando=="empty"){
            cout << "ok"<< endl; 
            stacky.vazia();

            if(stacky.vazia()==true){
                cout << "a pilha esta vazia" << endl;
            }else {
                cout << "a pilha nao esta vazia" << endl;
            }
        }else if(comando=="top"){
            cout << "ok"<< endl; 
            int a=stacky.top();
            cout << "o primeiro elemento da pilha e: "<< a<< endl;
        }else if(comando=="size"){
            cout << "ok"<< endl<< endl; 
            cout << "o tamanho da pilha e " << stacky.tamanho()<< endl;
        }else if(comando=="sair"){
            break;
        }else if(comando=="imprimir"){
            cout << "ok"<< endl; 
            cout << "a pilha e: "<< endl;
            stacky.imprimir();
        }
    }
    
}
