//lets find factorial using recursion
#include <iostream>
using namespace std;
int factorial (int n){
    if (n==0||n==1)
    return 1;
    return n*factorial(n-1);
}
int main(){
    cout<<"Factorial pf 5 is: "<<factorial(5);
    return 0;
}
