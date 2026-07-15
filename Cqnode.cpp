#include "Cqnode.h"
#include<iostream>
using namespace std;
template <class T>
Node<T> ::Node(T val){
    data=val;
    nextptr=NULL;
}
//setData
template <class T>
void Node<T>::setData(T val)
{
    data=val;
}
//get data
template <class T>
T Node<T>::getData() const {
    return data;
}
//set ptr
template <class T>
void Node<T>::setNextptr(Node<T>* ptr)
{
    nextptr=ptr;
}
//getptr
template <class T>
Node<T>* Node<T>:: getNextptr() const{
    return nextptr;
}
