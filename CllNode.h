#ifndef CLLNODE_H
#define CLLNODE_H
#include<iostream>
using namespace std;
template <class T>
class Node{
    private:
        T data;
        Node<T>* next;
    public:
        Node(T);
        void setdata(T);
        T getdata();
        void setptr(Node<T>*);
        Node<T>* getptr();
};
#endif