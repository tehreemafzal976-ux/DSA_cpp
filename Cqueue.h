#ifndef CQUEUE_H
#define CQUEUE_H
#include "Cqnode.h"
#include "Cqnode.cpp"
#include<iostream>
using namespace std;
template <class T>
class Queue{
    private:
    Node<T>* head;
    Node<T>* tail;
    public:
        void sethead(Node<T>*);
        Node<T>* gethead() const;
        void settail(Node<T>*);
        Node<T>* gettail() const;
        Queue();
        ~Queue();
        void Enqueue(T);
        T dequeue();
        T peek();
        bool isEmpty();
        void print();
};
#endif