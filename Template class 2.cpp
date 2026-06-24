/*Calculator Template
Create a function template"add()""
that adds two values.
Test with:
1. int
2. float
3. double
4. char*/
#include<iostream>
using namespace std;
template<class T>
T add(T n1,T n2){
    return n1+n2;
}
int main(){
    cout<<add(3,4)<<endl;
    cout<<add(3.3,3.4)<<endl;
    cout<<add(3.6766116,555.8888877655)<<endl;
    cout<<add('A','B')<<endl;
    return 0;
}