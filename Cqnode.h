#ifndef CQNODE_H
#define CQNODE_H
#include<iostream>
using namespace std;
template<class T>
class Node{
    private:
        T data;
        Node<T>* nextptr;
    public:
        Node(T);
        void setData(T);
        T getData() const;
        void setNextptr(Node<T>*);
        Node<T>* getNextptr() const;
};
#endif