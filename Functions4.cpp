//Find maximum of two variable
#include<iostream>
using namespace std;
int maximum(int a, int b){
    if(a>b){
        return a;
    }
    else {
        return b;
    }
}
int main(){
    int a=10;
    int b=4;
    cout<<maximum(a,b);
    return 0;
} 