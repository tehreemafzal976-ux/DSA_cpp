#include <iostream>
#include "Sll.h"
using namespace std;
//defining the functions and constructor
template <class T>
LinkedList<T>::LinkedList(){
    head=tail=NULL;
}
//pushFront Function 
template <class T>
void LinkedList<T>::pushFront(T val){
    Node<T>* newNode=new Node<T>(val);
    if (head==NULL){
        head=tail=newNode;
    }
    else{
        newNode->next=head;
        head=newNode;
    }
}
//push back function 
template <class T>
void LinkedList<T>::pushBack(T val)
{
    Node<T>* newNode=new Node<T>(val);
    if (head==NULL){
        head=tail=newNode;
    }
    else {
        tail->next=newNode;
        tail=newNode;
    }
}
//popfront function 
template <class T>
void LinkedList<T>::popFront(){
    if(head==NULL){
        cout<<"List is already empty!"<<endl;
        return;
    }
    if (head==tail){
        delete head;
        head=NULL;
        tail=NULL;
        return;
    }
    Node<T>* temp;
    temp=head;
    head=head->next;
    temp->next=NULL;
    delete temp;
}
//popBack Function 
template <class T>
void LinkedList<T>::popBack()
{
    if (head==NULL){
        return;
    }
    if (head==tail){
        delete head;
        head=NULL;
        tail=NULL;
        return;
    }
    Node<T>* temp;
    temp=head;
    while (temp->next->next!=NULL){
        temp=temp->next;
    }
    temp->next=NULL;
    delete tail;
    tail=temp;
}
//insert in between function
template <class T>
void LinkedList<T>::insert(T val,int pos){
    if (head==NULL){
        pushFront(val);
        return;
    }
    if (pos<0){
        cout<<"error! Invalid Position!"<<endl;
        return;
    }
    if(pos==0){
        pushFront(val);
        return;
    }
    Node<T>* temp=head;
    for(int i=0;i<pos-1;i++){
        if(temp==NULL){
            cout<<"ERROR!"<<endl;
            return;
        }
        temp=temp->next;
    }
    Node<T>* newNode=new Node<T>(val);
    newNode->next=temp->next;
    temp->next=newNode;
    if(newNode->next == NULL)
    {
    tail = newNode;
    }
}
//printing 
template< class T>
void LinkedList<T>::print(){
    Node<T>* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}


















































