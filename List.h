//lets write down a list data structure using dynamic array.
#ifndef LIST_H
#define LIST_H
#include<iostream>
using namespace std;
template <class T>
class List{
    public:
        T* arr;
        T* ptr;
        int filled_size;
        int total_size;
    List(int s);
    ~List();
    //functions relevent to pointer
    void start();
    void end();
    void previous();
    void next();
    //functionality functions 
    void addElements(T value,int index);
    void addElements(T value);
    void deleteElement(T value);
    //one operator overloading function for << operator 
    template <class U>
    friend ostream& operator <<(ostream &out, List<U> &l);
};
#endif
