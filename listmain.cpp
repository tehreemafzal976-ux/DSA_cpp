#include<iostream>
#include "List.h"
#include "Listdef.cpp"
using namespace std;
int main(){
    List<int> L1(5);
    L1.deleteElement(100);
    L1.addElements(10);
    L1.addElements(50);
    L1.addElements(66);
    L1.deleteElement(66);
    L1.addElements(32,1);

    cout<<L1;
    return 0;
}

//List datastructure completed!!!!!