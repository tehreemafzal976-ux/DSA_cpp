#include<iostream>
using namespace std;
void func(int n){
    if(n>0)         //base case
    {
        //now lets reverse the order of  statements and check the change.
        func(n-1);
        cout<<n<<endl;
        
    }
}
int main(){
    int x=3;
    func(x);
    return 0;
}