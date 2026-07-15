#include<iostream>
#include "Stack.h"
using namespace std;
template<class T>
Stack<T> ::Stack(){
    head=NULL;
}
template<class T>
bool Stack<T>::isEmpty(){
    if(head==NULL){
        return true;
    }
    return false;
}
/*template<class T>
Stack<T> :: ~Stack(){
    while (!isEmpty()){
        pop();
    }
}*/
template <class T>
Stack<T>:: ~Stack(){
    Node<T>* current=head;
    while(head!=NULL){
        Node<T>* temp=current;
        current=current->getNext();
        delete temp;
    }
}
template <class T>
void Stack<T> ::push(T a){
    Node <T>* newNode=new Node<T> (a);
    newNode->setNext(head);
    head=newNode;
}

template<class T>
T Stack<T>::pop(){
    if (head!=NULL){
        Node<T>* temp=head;
        T data_return=head->getData();
        head=head->getNext();
        delete temp;
        return data_return;
    }
}
template <class T>
T Stack<T>::peek(){
    if (head!=NULL){
        return head->getData();
    }
}
template<class T>
void Stack<T>:: print(){
    Node<T>* temp=head;
    while (temp!=NULL){
        cout<<temp->getData()<<endl;
        temp=temp->getNext();
    }
}