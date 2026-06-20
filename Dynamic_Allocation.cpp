//Declare POinter, allocate Dynamically print its value and address.
#include<iostream>
using namespace std;
int main(){
    int a =2;
    int *p=new int;                        //Declaration.
    *p=a;
    cout<<*p<<endl;                      //prints value
    cout<<p;               //Prints address
    return 0;
}