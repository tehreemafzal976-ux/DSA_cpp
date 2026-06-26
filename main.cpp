#include<iostream>
#include "Node.h"
#include "Node.cpp"
#include "SLLDEF.cpp"
#include "Sll.h"
using namespace std;
int main(){
    LinkedList<int> l1;
    l1.pushFront(10);
    l1.pushFront(5);
    l1.pushBack(70);
    l1.insert(20,2);
    
    //it should look like 5->10->20->70->
    l1.print();
    cout<<endl;
    //lets pop something 
    l1.popFront();
        l1.print();

    
}