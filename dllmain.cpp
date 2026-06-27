#include <iostream>
#include "dllNode.h"
#include "doublyList.h"
#include "doublyList.cpp"
#include "dllNode.cpp"
using namespace std;
int main(){
   DoublyList <int> d1;
   d1.pushFront(10);
   d1.pushBack(20);
   d1.pushBack(30);
   d1.pushBack(40);
   d1.Print();
   d1.pushFront(5);
   d1.Print();
   d1.insert(25,3);
   d1.Print();
   d1.popFront();
   d1.popBack();
   d1.Print();
   d1.deleteNode(25);
   d1.Print();

}