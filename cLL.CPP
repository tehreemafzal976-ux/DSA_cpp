#include<iostream>
#include "cLL.h"
using namespace std;
//Constructor 
template <class T>
CircularList<T>::CircularList(){
    head=tail=NULL;
}
//sethead
template<class T>
void CircularList<T>::sethead(Node<T>* ptr)
{
    head=ptr;
}
//gethead
template <class T>
Node<T>* CircularList<T>::gethead(){
    return head;
}
//settail
template <class T>
void CircularList<T>::settail(Node<T>* ptr)
{
    tail=ptr;
}
//get tail 
template<class T>
Node<T>* CircularList<T>::gettail(){
    return tail;
}
//pushfront 
template <class T>
void CircularList<T>::pushfront(T val){
    Node<T>* newnode=new Node<T>(val);
    if(head==NULL){
        sethead(newnode);
        settail(newnode);
        tail->setptr(gethead());
        return;
    }
    newnode->setptr(gethead());
    sethead(newnode);
    tail->setptr(gethead());
}
//pushback
template<class T>
void CircularList<T>::pushback(T val){
    Node<T>* newnode=new Node<T>(val);
    if (head==NULL){
        sethead(newnode);
        settail(newnode);
        tail->setptr(gethead());
        return;
    }
    tail->setptr(newnode);
    settail(newnode);
    tail->setptr(gethead());
}
//addelement
template<class T>
void CircularList<T>::addelement(T val, int ind){
   
    int counter=0;
    if(ind<0){
        cout<<"INvalid!!";
        return;
    }
    if (ind==counter){
        pushfront(val);
        return;
    }
    Node<T>* temp=gethead();
    while(counter!=ind-1&&temp->getptr()!=gethead()){
        counter++;
        temp=temp->getptr();  
    }
    if(temp->getptr()==gethead()){
        pushback(val);
        return;
    }
     Node<T>* newnode=new Node<T>(val);
    newnode->setptr(temp->getptr());
    temp->setptr(newnode);
}
//popfront 
template <class T>
void CircularList<T>::popfront(){
    if (gethead()==NULL){
        cout<<"ALready empty!!"<<endl;
        return;
    }

    if(gethead()==gettail()){
        delete gethead();
        sethead(NULL);
        settail(NULL);
        return;
    }
    Node<T>* temp=gethead();
    sethead(head->getptr());
    tail->setptr(gethead());
    delete temp;
}

//popback()
template <class T>
void CircularList<T>::popback(){
    Node<T>* temp=gethead();
    if(gethead()==NULL){
        cout<<"Already Empty!"<<endl;
    return;
}
    if (gethead()==gettail()){
        delete gethead();
        sethead(NULL);
        settail(NULL);
        return;
    }
    while(temp->getptr()!=gettail()){
        temp=temp->getptr();
    }
    temp->setptr(gethead());
    delete gettail();
    settail(temp);
}

//delete node
template<class T>
void CircularList<T>::deleteNode(T val){
    if (gethead()==NULL){
        cout<<"no node to delete !"<<endl;
    return;
    }
    if (gethead()==gettail()){
        if(gethead()->getdata()==val)
        {delete gethead();
        sethead(NULL);
        settail(NULL);
        }
        return;
    }
if(head->getdata()==val){
    popfront();
    return;
}
if (tail->getdata()==val){
    popback();
    return;
}
    Node<T>* temp=gethead();
    Node<T>* prev=gethead();
    
    while(temp->getptr()!=gethead()){
        if(temp->getdata()==val){
            prev->setptr(temp->getptr());
            delete temp;
            return;
        }
        prev=temp;
        temp=temp->getptr();
    }
    cout<<"value not found~"<<endl;

}
//print
template< class T>
void CircularList<T>::print(){
    Node<T>* temp=gethead();
    do{
        cout<<temp->getdata()<<"->";
        temp=temp->getptr();
    }while(temp->getptr()!=gethead());
}




































































