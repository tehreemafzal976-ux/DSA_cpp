#ifndef CLL_H
#define CLL_H
#include <iostream>
#include "CllNode.h"
using namespace std;
template <class T>
class CircularList{
    private:
        Node<T>* head;
        Node<T>* tail;
    public:
        CircularList();
        void sethead(Node<T>*);
        Node<T>* gethead();
        void settail(Node<T>*);
        Node<T>* gettail();
        void pushfront(T);
        void pushback(T);
        void popfront();
        void popback();
        void addelement(T ,int);
        void deleteNode(T);
        void print();
};

#endif