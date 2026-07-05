#include "CllNode.h"
#include<iostream>
using namespace std;
template <class T>
Node<T> ::Node(T val){
    data=val;
    next=NULL;
}
//setData
template <class T>
void Node<T>::setdata(T val)
{
    data=val;
}
//get data
template <class T>
T Node<T>::getdata(){
    return data;
}
//set ptr
template <class T>
void Node<T>::setptr(Node<T>* ptr)
{
    next=ptr;
}
//getptr
template <class T>
Node<T>* Node<T>::getptr(){
    return next;
}
