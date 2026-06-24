#include<iostream>
using namespace std;

int main(){
    //declaration
    int arr[5];
    //lets initialise array by taking it in user input.
    for (int i=0;i<5;i++){
        cin>>arr[i];
    }
    //printing the array
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}