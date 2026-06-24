/*Complex Number
Create class  
Complex
Overload +
Display result.
Example
2+3i
4+5i
Result
6+8i*/
#include<iostream>
using namespace std;
//lets create class 
class Complex{
    public:
    int real;
    int img;
    //constructor 
    Complex(int r,int i){
        real=r;
        img=i;
    }
    //overloading
    friend Complex operator+(Complex &C1,Complex &C2){
        Complex C3(0,0);
        C3.real=C1.real+C2.real;
        C3.img=C1.img+C2.img;
        return C3;
    }
    void Result(){
        cout<<real<<" + "<<img<<"i"<<endl;
    }
};
int main(){
    Complex C1(2,3);
    Complex C2(4,5);
    Complex C3=C1+C2;
    C3.Result();
    return 0;
}