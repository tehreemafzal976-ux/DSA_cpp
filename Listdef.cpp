#include<iostream>
#include "List.h"
using namespace std;
//first constructor and destructor 
template <class T>
List<T>::List(int s){
    total_size=s;
    filled_size=-1;
    arr=new T[s];
    ptr=arr;
}
template <class T>
List<T>::~List(){
    delete[] arr;
}
//now pointer relevent functions 
template <class T>
void List<T>::start(){
    ptr=arr;
}
//now function to move pointer at the end of list
template <class T>
void List<T>::end(){
    //check if list is empty?
    if(filled_size>-1){
        ptr=arr+filled_size;
    }
    else{
        ptr=arr;
    }
}
//now to move pointer at next place
template <class T>
void List<T>::next(){
    ptr++;
}
//now to move pointer at previous location 
template <class T>
void List<T>::previous(){
    ptr--;
}
//functionality function 
template <class T>
void List<T>::addElements(T value,int index){
    //check for full array and valid index
    if (filled_size+1==total_size||index<0||index>filled_size+1){
        cout<<"Error found No space or invalid index to enter"<<endl;
        return;
    }
    else if(filled_size==-1){
        *ptr=value;
        filled_size++;
        return;
    }
        end();
        for (int i=filled_size;i>=index;i--){
            *(ptr+1)=*ptr;
            previous();
        }
        next();
        *ptr=value;
        filled_size++;

}
//add element other function without specific index ie: insert at end
template <class T>
void List<T>::addElements(T value){
    addElements(value,filled_size+1);
}
//function to delete any desired element 
template <class T>
void List<T>::deleteElement(T value){
    //checkif list is empty?
    if (filled_size==-1){
        cout<<"your list is empty! Can perform.";
        return;
    }
    start();
    for (int i=0;i<=filled_size;i++){
        if(*ptr==value){
            for (int j=i;j<filled_size;j++){
                *ptr=*(ptr+1);
                next();
            }
            filled_size--;
            cout<<"Deleted"<<endl;
            return;
        }
        next();
    }
}
//overload <<operator
template <class U>


ostream& operator<<(ostream &out,List<U> &l){
    l.start();
    for(int i=0;i<=l.filled_size;i++){
        out<<*(l.ptr)<<" ";
        l.next();
    }
    return out;
}



