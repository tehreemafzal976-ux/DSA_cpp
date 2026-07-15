#ifndef PRIORITYQUEUENODE_H
#define PRIORITYQUEUENODE_H
#include<iostream>
using namespace std;
template <class T>
class Pnode{
    private:
        T data;
        int priority;
        Pnode<T>* next;
    public:
    Pnode(T,int);
    void setPr(int);
    int getPr() const;
    void setData(T);
    T getData() const;
    void setNext(Pnode<T>*);
    Pnode<T>* getNext() const;
};
#endif