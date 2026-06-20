/*Create a Car class. 
Dynamically allocate an array of Car objects based 
on user input and print all details*/
#include<iostream>
using namespace std;
class Car{
    public:
    int serialNo;
    string colour;
};
int main(){
    int size;
    cout<<"Enter Size for array."<<endl;
    cin>>size;
    Car *c=new Car[size];
    for (int i=0;i<size;i++){
        cout<<"Enter serial no for car no "<<i+1<<endl;
        cin>>c[i].serialNo;
        cout<<"Enter colour for car no "<<i+1<<endl;
        cin>>c[i].colour;
    }
    for (int i=0;i<size;i++){
        cout<<"Details for car no "<<i+1<<endl;
        cout<<"serialNo = "<<c[i].serialNo<<endl;
        cout<<"Colour is : "<<c[i].colour<<endl;
    }
    return 0;
}