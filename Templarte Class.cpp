/*Create a class template Box.

Requirements:

Store one value of type T.
Constructor to initialize it.
display() function to print it.*/
#include<iostream>
using namespace std;
template <class T>
class Box{
    public:
        T length;
    //Constructor
    Box(T l){
        length=l;
    }
    //display function:
    void Display(){
        cout<<"Length of Box is: "<<length<<endl;
    }
};
int main(){
    Box<int> B1(4);
    B1.Display();
    //Lets test it for float and double.
    Box <float> B2(3.33);
    B2.Display();
    Box<double> B3(3.33333);
    B3.Display();
    return 0;
}