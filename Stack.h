#ifndef STACK_H
#define STACK_H
#include <iostream>
#include "Stacknode.h"
using namespace std;
template <class T>
class Stack{
    private:
      Node<T>* head;
    public:
    Stack();
    ~Stack();
    void push(T);
    T pop();
    T peek();
    bool isEmpty();
    void print();
};
#endif