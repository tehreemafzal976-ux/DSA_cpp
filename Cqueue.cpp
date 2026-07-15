#include "Cqueue.h"
#include<iostream>
using namespace std;
//Constructor 
template <class T>
Queue<T>::Queue(){
    head=tail=NULL;
}
//sethead
template<class T>
void Queue<T>::sethead(Node<T>* ptr)
{
    head=ptr;
}
//gethead
template <class T>
Node<T>* Queue<T>::gethead() const{
    return head;
}
//settail
template <class T>
void Queue<T>::settail(Node<T>* ptr)
{
    tail=ptr;
}
//get tail 
template<class T>
Node<T>* Queue<T>::gettail() const {
    return tail;
}
//destructor
template<class T>	
Queue<T> ::~Queue()
{
	while (head != NULL)
{
    dequeue();
}
}
//Enqueue
template<class T>
void Queue<T>::Enqueue(T val){
    Node<T>* newnode=new Node<T>(val);
    //if empty
    if (isEmpty()){
        sethead(newnode);
        settail(newnode);
        tail->setNextptr(gethead());
        return;
    }
    tail->setNextptr(newnode);
    settail(newnode);
    tail->setNextptr(gethead());
}

//Dequeue
template <class T>
T Queue<T>::dequeue(){
    //emptycase
    if (isEmpty()){
        cout<<"ALready empty!!"<<endl;
        return T();
    }
    T data_deleted=gethead()->getData();

    //if first node to be added
    if(gethead()==gettail()){
        delete gethead();
        sethead(NULL);
        settail(NULL);
        return data_deleted;
    }
    //else case
    Node<T>* temp=gethead();
    sethead(head->getNextptr());
    tail->setNextptr(gethead());
    delete temp;
    return data_deleted;
}
//peek
template<class T>
T Queue<T> :: peek()
{
	if(!isEmpty())
	{
		return head->getData();
	}
    return T();

}
//check empty
template<class T>
bool Queue<T> :: isEmpty()
{
	if(head != NULL)
	{
		return false;
	}
	else
	{
		return true;
	}
}

//print
//print
template<class T>
void Queue<T>::print(){

    if(isEmpty()){
        cout<<"Queue is Empty!!"<<endl;
        return;
    }

    Node<T>* temp=gethead();

    do{
        cout<<temp->getData()<<"->";
        temp=temp->getNextptr();
    }while(temp!=gethead());

    cout<<"HEAD"<<endl;
}