#include<iostream>
#include "Node.h"
using namespace std;
//lets define the hyders 
template <class T>
Node<T>::Node(T val){
    data=val;
    next=NULL;
}