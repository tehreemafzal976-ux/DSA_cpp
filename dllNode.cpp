#include "dllNode.h"

#include<iostream>
using namespace std;
template<class T>
Node<T>::Node(T val){
    data=val;
    next=prev=NULL;
}
