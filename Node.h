#ifndef NODE_H
#define NODE_H
#include <iostream>



struct node{
     int data;
     node* next;

    node(int c, node* n=nullptr){
        data=c;
        next=n;
    };
};
#endif