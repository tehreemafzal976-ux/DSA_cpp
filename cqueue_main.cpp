#include<iostream>
using namespace std;

#include "Cqueue.h"
#include "Cqueue.cpp"

int main()
{
    Queue<int> q;

    cout<<"Initially:"<<endl;
    q.print();

    cout<<"\nEnqueue 10"<<endl;
    q.Enqueue(10);
    q.print();

    cout<<"\nEnqueue 20"<<endl;
    q.Enqueue(20);
    q.print();

    cout<<"\nEnqueue 30"<<endl;
    q.Enqueue(30);
    q.print();

    cout<<"\nEnqueue 40"<<endl;
    q.Enqueue(40);
    q.print();

    cout<<"\nFront Element: "<<q.peek()<<endl;

    cout<<"\nDequeued: "<<q.dequeue()<<endl;
    q.print();

    cout<<"\nDequeued: "<<q.dequeue()<<endl;
    q.print();

    cout<<"\nFront Element: "<<q.peek()<<endl;

    cout<<"\nDequeued: "<<q.dequeue()<<endl;
    q.print();

    cout<<"\nDequeued: "<<q.dequeue()<<endl;
    q.print();

    cout<<"\nTrying dequeue on empty queue:"<<endl;
    q.dequeue();

    cout<<"\nTrying peek on empty queue:"<<endl;
    cout<<q.peek()<<endl;

    return 0;
}