#include<iostream>
#include"queueNode.h"
#include"queue.h"
#include"queue.cpp"
using namespace std;
int main(){
    Queue<int> q1;
    q1.Enqueue(10);
    q1.Enqueue(10);
    q1.dequeue();
    cout<<q1.isEmpty();
    return 0;
}