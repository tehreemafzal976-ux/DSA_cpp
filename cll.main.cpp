#include<iostream>
#include"CllNode.h"
#include "CllNode.cpp"
#include "cLL.h"
#include "cLL.cpp"
using namespace std;
int main(){
    CircularList<int> cll;
    cll.pushfront(10);
    cll.print();
    cll.pushback(20);
    cll.print();
    cll.pushfront(5);
    cll.print();
}