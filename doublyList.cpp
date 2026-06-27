#include<iostream>
#include "doublyList.h"
using namespace std;
//constructor 
template <class T>
DoublyList<T>::DoublyList(){
    head=tail=NULL;
}
//pushFront
template <class  T>
void DoublyList<T>::pushFront(T val){
    Node<T>* newNode=new Node<T>(val); //we are dealing with pointers.
    if (head==NULL)
    {
        head=tail=newNode;
        return;
    }
    else{
        newNode->next=head;
        head->prev=newNode;
        head=newNode;
    }
}
//pushback()
template <class T>
void DoublyList<T>::pushBack(T val){
    Node<T>* newNode=new Node<T>(val);
    if (head==NULL){
        head=tail=newNode;
        return;
    }
    else{
        tail->next=newNode;
        newNode->prev=tail;
        tail=newNode; 
        tail->next=NULL;
       }
}
//popfront
template<class T>
void DoublyList<T>::popFront(){
    if (head==NULL){
        cout<<"no node to delete! list is empty.";
        return;
    }
    if (head==tail){
        delete head;
        head=tail=NULL;
        return;
    }
    Node<T>* temp=head;
    head=head->next;
    head->prev=NULL;
    temp->next=NULL;
    delete temp;
}
//popBack 
template <class T>
void DoublyList<T>::popBack(){
    if (head==NULL){
        cout<<"error! empty list....."<<endl;
        return;
    }
    if(head==tail){
        delete head;
        head=tail=NULL;
        return;
    }
    Node<T>* temp=tail;
    tail=tail->prev;
    tail->next=NULL;
    temp->prev=NULL;
    delete temp;
}
//insert at a specific given position 
template <class T>
void DoublyList<T>::insert(T val,int pos){
    Node<T>* newNode=new Node<T>(val);
    if (head==NULL){
        pushFront(val);
        return;
    }
    if(pos==0){
        pushFront(val);
        return;
    }
    if(pos<0){
        cout<<"Invalid position."<<endl;
        delete  newNode;
        return;
    }
    Node<T>* temp=head;
    for(int i=0;i<pos-1;i++){
        if(temp->next==NULL){
            cout<<"position is beyong scope"<<endl;
            delete newNode;
            return;
        }
        temp=temp->next;
        
    }
    newNode->next=temp->next;
    temp->next=newNode;
    newNode->prev=temp;
    if (newNode->next==NULL){
        tail=newNode;
        tail->next=NULL;
        return;
    }
    else{
        newNode->next->prev=newNode;
    }
}
//delete 
template <class T>
void DoublyList<T>::deleteNode(T val){
    if(head==NULL){
        cout<<"Nothing to delete!";
        return;
    }
    if (head->data==val){
        popFront();
        return;
    }
    if (tail->data==val){
        popBack();
        return;
    }
    else{
        Node<T>* temp=head;
        while(temp->next!=NULL){
            if(temp->data==val){
                Node<T>* track=temp->prev;
                track->next=temp->next;
                temp->next->prev=track;
                temp->next=NULL;
                temp->prev=NULL;
                delete temp;
                break;
            }
            temp=temp->next;
        }
    }
}
//printing 
template<class T>
void DoublyList<T>::Print(){
    Node<T>* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}














