#ifndef DOUBLYLIST_H
#define DOUBLYLIST_H
#include<iostream>
#include "dllNode.h"
using namespace std;
template <class T>
class DoublyList{
    public:
    Node<T>* head;
    Node<T>* tail;
    //constructor
    DoublyList();
    //functions 
    void pushFront(T);
    void pushBack(T);
    void popFront();
    void popBack();
    void insert(T, int);
    void deleteNode(T);
    void Print();
};
#endif