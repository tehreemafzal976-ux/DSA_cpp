#include<iostream>
using namespace std;


#include "Stack.cpp"
#include "Stacknode.cpp"

int main()
{
    Stack<int> s;

    cout<<"Push 10"<<endl;
    s.push(10);
    s.print();

    cout<<"\nPush 20"<<endl;
    s.push(20);
    s.print();

    cout<<"\nPush 30"<<endl;
    s.push(30);
    s.print();

    cout<<"\nTop Element: "<<s.peek()<<endl;

    cout<<"\nPopped: "<<s.pop()<<endl;
    s.print();

    cout<<"\nPopped: "<<s.pop()<<endl;
    s.print();

    cout<<"\nTop Element: "<<s.peek()<<endl;

    cout<<"\nPopped: "<<s.pop()<<endl;
    s.print();

    cout<<"\nTrying pop on empty stack:"<<endl;
    s.pop();

    return 0;
}