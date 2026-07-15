#ifndef QUEUE_H
#define QUEUE_H
#include "queueNode.h"
#include "queueNode.cpp"
#include<iostream>
using namespace std;
template <class T>
class Queue{
    private:
    Node<T>* head;
    public:
        void sethead(Node<T>*);
        Node<T>* gethead() const;
        Queue();
        ~Queue();
        void Enqueue(T);
        T dequeue();
        T peek();
        bool isEmpty();
};
#endif