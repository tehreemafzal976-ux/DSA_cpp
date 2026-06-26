#ifndef SLL_H
#define SLL_H
#include "Node.h"
#include<iostream>
using namespace std;
template<class T>
class LinkedList{
    public:
    //functions to perform
    void pushFront(T);
    void pushBack(T);
    void popFront();
    void popBack();
    void insert(T ,int);
    void print();
    //pointers to track 
    Node<T>* head;
    Node<T>* tail;
    //constructor
    LinkedList();
};
#endif
