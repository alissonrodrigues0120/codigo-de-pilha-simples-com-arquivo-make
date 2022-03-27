#include <iostream>
#include "pilha.h"

pilha::pilha(){
    topo=nullptr;
}

pilha::~pilha(){
    node* aux=topo;
    while(aux!=nullptr){
        node *apagar=aux;
        aux=aux->next;
        delete apagar;
    }
}

void pilha::add(int k){
    if(topo==nullptr){
        node* novo= new node(k, nullptr);
        topo=novo;
    }else{
    node* novo= new node(k, nullptr);
    node* nottopo=topo;
    novo->next=nottopo;
    topo=novo;
   }
}

void pilha::remove(){
    if(topo==nullptr){
        std::cout << "a lista esta vazia" << std::endl;
    }else{
    node* apagar=topo;
    node* aux=topo;
    topo=aux->next;
    delete apagar;
    }
}

void pilha::imprimir(){
    std::cout << "[ ";
    node* gooddays=topo;
    while(gooddays!=nullptr){
        std::cout << gooddays->data << " ";
        gooddays=gooddays->next;
    }

    std::cout << "]"<< std::endl;
}

bool pilha::vazia(){
    return topo==nullptr;
}

int pilha::top(){
    return topo->data;
}

int pilha::tamanho(){
    int i=0;
    node* aux=topo;
    while(aux!=nullptr){
        i++;
        aux=aux->next;
    }

    return i;
}