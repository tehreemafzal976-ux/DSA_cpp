#include "Priorityqueuenode.h"
#include<iostream>
using namespace std;
//constructor
template <class T>
Pnode <T>::Pnode(T a, int b){
    data = a;
    priority=b;
    next=NULL;
}
//setPR
template <class T>
void Pnode<T>::setPr(int a){
    priority=a;
}
//getPr
template<class T>
int Pnode<T>::getPr()const{
    return priority;
}
//setdata
template <class T>
void Pnode<T>::setData(T a){
    data =a;
}
//getdata
template <class T>
T Pnode<T>::getData()const{
    return data;
}
//setnext
template <class T>
void Pnode<T>::setNext(Pnode<T>* p){
    next=p;
}
//getnext
template <class T>
Pnode<T>* Pnode<T>::getNext() const{
    return next;
}
