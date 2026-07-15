#ifndef STACKNODE_H
#define STACKNODE_H
#include<iostream>
using namespace std;
template <class T>
class Node{
    private:
        T data;
        Node<T>* next;
    public:
        Node(T);
        void setData(T);
        T  getData() const;
        void setNext(Node<T>*);
        Node<T>* getNext() const;

};
#endif