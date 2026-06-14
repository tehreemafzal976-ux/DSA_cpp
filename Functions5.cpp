//checking prime numbers
#include<iostream>
#include<cmath>
using namespace std;
bool isprime(int n){
    if(n<=1)
    return false;
    for(int i=2;i<sqrt(n);i++)
    {
        if(n%2==0)
        return false;
    }
    return true;
}
int main ()
{
    cout<<isprime(2);
    return 0;
}