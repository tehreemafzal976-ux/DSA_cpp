#include<iostream>
#include "queue.h"
using namespace std;
//constructor 
template<class T>
Queue<T>::Queue(){
    head=nullptr;
}
//sethead
template <class T>
void    Queue<T>::sethead(Node<T>* ptr){
    head=ptr;
}
//gethead
template<class T>
Node<T>* Queue<T>::gethead() const{
    return head;
}
//destructor
template <class T>
Queue<T>::~Queue(){
    Node<T>* current=head;
    while(current!=NULL){
        Node<T>* temp=current;
        current=current->getNextptr();
        sethead(temp->getNextptr());
        delete temp;
    }
}
//enqueue
template<class T>
void Queue<T>::Enqueue(T a){
    Node<T>* temp= new Node<T>(a);
    if(head==NULL){
        head=temp;
    }
   else{
    Node<T>* current=head;
    while(current->getNextptr()!=NULL){
        current=current->getNextptr();
    }
    current->setNextptr(temp);
  
   }
}
//isEMPTY
template<class T>
bool Queue<T>:: isEmpty(){
    if(head==NULL){
        return true;
    }
    else {
        return false;
    }
}
//dequeue
template<class T>
T Queue<T>::dequeue(){
    if(isEmpty()){
        cout<<"NOTHING TO DEQUEUE!"<<endl;
        return;
    }
    Node<T>* temp=head;
    T data=temp->getData();
    sethead(head->getNextptr());
    delete temp;
    return data;
}
//peek
template<class T>
T Queue<T>::peek(){
    if (!isEmpty()){
        return head->getData();
    }
}




























































