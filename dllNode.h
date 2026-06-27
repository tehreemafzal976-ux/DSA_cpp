#ifndef DLLNODE_H
#define DLLNODE_H
#include <iostream>
using namespace std;
template <class T>
class Node{
    public:
    T data;
    Node<T>* next;
    Node<T>* prev;

    //constructor
    Node(T);
};

#endif