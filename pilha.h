#ifndef PILHA_H
#define PILHA_H
#include "Node.h"
#include <iostream>

struct pilha{
private:
      node* topo;
public:
      pilha();
      ~pilha();
      void add(int k);
      void remove();
      void imprimir();
      bool vazia();
      int top();
      int tamanho();
};



#endif