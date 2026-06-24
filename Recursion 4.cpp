//fabbonaci series printing 
#include <iostream>
using namespace std;
int fabb(int n){
    if (n<=1)
    return n;
    return fabb(n-1)+fabb(n-2);
}
int main(){
     cout<<"Printing series : "<<endl;
     for(int i=0;i<=10;i++){
        cout<<fabb(i)<<" ";
     }
    return 0;
}