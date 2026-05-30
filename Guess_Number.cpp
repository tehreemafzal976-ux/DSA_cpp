//Guess Number using if_else 
#include<iostream>
using namespace std;
int main(){
    int number=10;
    int n;
    cout<<"Enter your guess!!"<<endl;
    cin>>n;
    if (n==number){
        cout<<"Congrats! you guessed right."<<endl;
    }
    else{
        cout<<"Better  luck next time!"<<endl;
    }
    return 0;
}