#include<iostream>
using namespace std;
//lets find maximum number in array
int max(int arr[])
{
    int m=INT16_MIN;
    for (int i=0;i<5;i++){
        if (arr[i]>m)
        {
            m=arr[i];
        }
    }
    return m;
}
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
//calling 
    cout<<"maximum: "<<max(arr);

}