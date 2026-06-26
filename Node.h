#ifndef NODE_H
#define NODE_H
#include<iostream>
using namespace std;
//MAKE HYDER FILE OF NODE CLASS 
template <class T>
class Node{
    public:
        T data;
        Node<T>* next;

    Node(T);
};
#endif
