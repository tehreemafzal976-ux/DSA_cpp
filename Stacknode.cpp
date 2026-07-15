#include "Stacknode.h"
#include<iostream>
using namespace std;
template <class T>
Node<T> ::Node(T val){
    data=val;
    next=NULL;
}
//setData
template <class T>
void Node<T>::setData(T val) 
{
    data=val;
}
//get data
template <class T>
T Node<T>::getData() const{
    return data;
}
//set ptr
template <class T>
void Node<T>::setNext(Node<T>* ptr)
{
    next=ptr;
}
//getptr
template <class T>
Node<T>* Node<T>::getNext() const{
    return next;
}
