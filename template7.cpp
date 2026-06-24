/*Generic Pair
Template class
Pair<T,U>
Store
T first
U second
Display both.
Example
Pair<int,string>
Pair<char,float>*/
#include<iostream>
using namespace std;
//template class
template <class T, class U>
class Store{
    public:
    T first;
    U second;
    //constructor 
    Store(T a,U b)
    {
        first=a;
        second=b;
    }
    //function to display
    void Display(){
        cout<<"First "<<first<<endl;
        cout<<"Second "<<second<<endl;
    }
};
int main(){
    Store<int, string> S1(2,"TARA");
    S1.Display();
    Store<char,float> S2('A',3.3);
    S2.Display();
    return 0;
}