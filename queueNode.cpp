#include<iostream>
#include "queueNode.h"
using namespace std;
//constructor
template <class T>
Node<T>::Node(T val){
    data=val;
    nextptr=NULL;
}
//setData
template<class T>
void Node<T>::setData(T val){
    data=val;
}
//getData
template<class T>
T Node<T>::getData() const{
    return data;
}

//setnextptr 
template <class T>
void Node<T>::setNextptr(Node<T>* ptr){
        nextptr=ptr;
}
//getnextptr
template<class T>
Node<T>* Node<T>::getNextptr()const{
    return nextptr;
}



